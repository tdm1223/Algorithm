// 2621. 카드게임
// 2019.10.27
// 구현
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int colors[4];
int nums[10];
int maxVal;
int main()
{
	int pair1 = 0;
	int pair2 = 0;
	int triple = 0;
	int quad = 0;
	for (int i = 0; i < 5; i++)
	{
		char color;
		int num;
		cin >> color >> num;
		switch (color)
		{
		case 'R':
			colors[0]++;
			break;
		case 'B':
			colors[1]++;
			break;
		case 'Y':
			colors[2]++;
			break;
		case 'G':
			colors[3]++;
			break;
		}
		nums[num]++;
		maxVal = max(maxVal, num);
	}

	for (int i = 1; i <= 9; i++)
	{
		// 2개가 같은 수
		if (nums[i] == 2)
		{
			if (pair1 > 0)
			{
				pair2 = i;
			}
			else
			{
				pair1 = i;
			}
		}
		// 4개가 같은 수
		else if (nums[i] == 4)
		{
			quad = i;
		}
		// 3개가 같은 수
		else if (nums[i] == 3)
		{
			triple = i;
		}
	}

	// 5개 모두 같은수
	bool isFlush = false;
	if (colors[0] == 5 || colors[1] == 5 || colors[2] == 5 || colors[3] == 5)
	{
		isFlush = true;
	}

	// 연속된 숫자 5개
	bool isStraight = false;
	for (int i = 1; i <= 6; i++)
	{
		if (nums[i] && nums[i + 1] && nums[i + 2] && nums[i + 3] && nums[i + 4])
		{
			isStraight = true;
			break;
		}
	}

	// 1. 카드 5장이 모두 같은 색이면서 숫자가 연속적일 때
	if (isFlush && isStraight)
	{
		printf("%d", 900 + maxVal);
		return 0;
	}
	// 2. 4장의 숫자가 같을 때
	if (quad > 0)
	{
		printf("%d", 800 + quad);
		return 0;
	}
	// 3. 3장의 숫자가 같고 나머지 2장도 숫자가 같을 때
	if (triple > 0 && pair1 > 0)
	{
		printf("%d", 700 + 10 * triple + pair1);
		return 0;
	}
	// 4. 5장의 카드 색깔이 모두 같을 때
	if (isFlush)
	{
		printf("%d", 600 + maxVal);
		return 0;
	}
	// 5. 카드 5장의 숫자가 연속적일 때
	if (isStraight)
	{
		printf("%d", 500 + maxVal);
		return 0;
	}
	// 6. 3장의 숫자가 같을 때
	if (triple > 0)
	{
		printf("%d", 400 + triple);
		return 0;
	}
	// 7. 2장의 숫자가 같고 또 다른 2장의 숫자가 같을 때
	if (pair1 > 0 && pair2 > 0)
	{
		printf("%d", 300 + 10 * max(pair1, pair2) + min(pair1, pair2));
		return 0;
	}
	// 8.  2장의 숫자가 같을 때
	if (pair1 > 0)
	{
		printf("%d", 200 + pair1);
		return 0;
	}
	// 9. 위의 어떤 경우에도 해당하지 않을 때
	printf("%d", 100 + maxVal);
	return 0;
}
