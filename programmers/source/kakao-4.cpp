// 오픈채팅방
// 2019.08.29
#include<string>
#include<vector>
#include<iostream>
#include<sstream>
#include<map>

using namespace std;

vector<string> solution(vector<string> record) {
	vector<string> answer;
	map<string, string> info; // 유저아이디,유저닉네임을 가지고있는 맵
	vector<string> log;
	string buf;
	// 들어오고 아이디 바꾼것을 먼저 체크함
	for (int i = 0; i < record.size(); i++)
	{
		log.clear();
		// log[0] : Enter,Leave,Change
		// log[1] : 유저 아이디
		// log[2] : 닉네임
		stringstream ss(record[i]);
		while (ss >> buf)
		{
			log.push_back(buf);
		}
		// 방에 들어오면 맵에 추가
		if (log[0] == "Enter")
		{
			info[log[1]] = log[2];
		}
		// 닉네임을 변경함
		else if (log[0] == "Change")
		{
			info.find(log[1])->second = log[2];
		}
	}
	// 다시 돌면서 로그 answer에 저장
	for (int i = 0; i < record.size(); i++)
	{
		log.clear();
		stringstream ss(record[i]);
		while (ss >> buf)
		{
			log.push_back(buf);
		}
		// 방에 들어옴
		if (log[0] == "Enter")
		{
			buf = info.find(log[1])->second;
			buf += "님이 들어왔습니다.";
			answer.push_back(buf);
		}
		// 방에서 나감
		else if (log[0] == "Leave")
		{
			buf = info.find(log[1])->second;
			buf += "님이 나갔습니다.";
			answer.push_back(buf);
		}
	}
	return answer;
}
