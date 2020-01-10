// OddOccurrencesInArray
// 2019.01.10
int solution(vector<int> &A)
{
	// 쌍이 아닌것은 Exclusive-or 연산을 통해 검출할 수 있다.
	int ans = 0;
	for (int i = 0; i < A.size(); i++)
	{
		ans ^= A[i];
	}
	return ans;
}
