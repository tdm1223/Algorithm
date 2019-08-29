// 캐시
// 2019.08.29
#include<string>
#include<vector>
#include<map>
#include<list>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
	int answer = 0;

	map<string, bool> cache;
	list<string> list;
	for (int i = 0; i < cities.size(); i++)
	{
		for (int j = 0; j < cities[i].size(); j++)
		{
			cities[i][j] = tolower(cities[i][j]);
		}
	}

	if (cacheSize == 0)
	{
		answer = cities.size() * 5;
	}
	else
	{
		for (int i = 0; i < cities.size(); i++)
		{
			// 현재 도시가 캐시에 들어있지 않다면(cache miss)
			if (cache.find(cities[i]) == cache.end())
			{
				answer += 5;
				cache[cities[i]] = true;
				// 캐시가 꽉 차있다면 맨 앞꺼 제거(LRU)
				if (list.size() == cacheSize)
				{
					cache.erase(list.front());
					list.pop_front();
					list.push_back(cities[i]);
				}
				else
				{
					list.push_back(cities[i]);
				}
			}
			// 현재 도시가 캐시에 들어있다면(cache hit)
			else
			{
				answer += 1;
				// 들어있는거 찾아서 맨 뒤로 넣어줌(LRU)
				for (auto iter = list.begin(); iter != list.end(); iter++)
				{
					if (*iter == cities[i])
					{
						list.erase(iter);
						list.push_back(cities[i]);
					}
				}
			}
		}
	}

	return answer;
}
