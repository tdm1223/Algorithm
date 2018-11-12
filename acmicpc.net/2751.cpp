// 2751. 수 정렬하기 2
// 2018.11.12
#include<cstdio>

#define SWAP(x, y) { int t = x; x = y; y = t; }
int n;
int arr[1000000];

void MySort(int *array, int left, int right)
{
	int mLeft = left, mRight = right;
	int pivot = array[(left + right) / 2];

	while (mLeft <= mRight)
	{
		while (pivot > array[mLeft])
		{
			mLeft++;
		}
		while (pivot < array[mRight])
		{
			mRight--;
		}

		if (mLeft <= mRight)
		{
			SWAP(array[mLeft], array[mRight]);
			mLeft++;
			mRight--;
		}
	}
	if (left < mRight)
	{
		MySort(arr, left, mRight);
	}
	if (mLeft < right)
	{
		MySort(arr, mLeft, right);
	}
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	MySort(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
