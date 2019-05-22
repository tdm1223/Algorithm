// 12791. Starman
// 2019.05.22
// 구현
#include<iostream>
#include<string>

using namespace std;

struct Album
{
	int year;
	string name;
};
// 예제 출력 2에 있는 모든 값 저장
Album album[26] =
{
	1967, "DavidBowie", 1969, "SpaceOddity", 1970, "TheManWhoSoldTheWorld", 1971, "HunkyDory",
1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars", 1973, "AladdinSane",
1973, "PinUps", 1974, "DiamondDogs", 1975, "YoungAmericans", 1976, "StationToStation",
1977, "Low", 1977, "Heroes", 1979, "Lodger", 1980, "ScaryMonstersAndSuperCreeps",
1983, "LetsDance", 1984, "Tonight", 1987, "NeverLetMeDown", 1993, "BlackTieWhiteNoise",
1995, "1.Outside", 1997, "Earthling", 1999, "Hours", 2002, "Heathen", 2003, "Reality",
2013, "TheNextDay", 2016, "BlackStar"
};

// year가 a,b사이에 있는지 여부 반환하는 함수
bool isBetween(int a, int b, int year)
{
	return (year >= a && year <= b);
}

int main()
{
	int q;
	cin >> q;
	while (q > 0)
	{
		q--;
		int a, b;
		int cnt = 0;
		cin >> a >> b;
		for (int i = 0; i < 25; i++)
		{
			if (isBetween(a,b,album[i].year))
			{
				cnt++;
			}
		}
		cout << cnt << endl;
		for (int i = 0; i < 25; i++)
		{
			if (isBetween(a, b, album[i].year))
			{
				cout << album[i].year << " " << album[i].name << endl;
			}
		}
	}
	return 0;
}
