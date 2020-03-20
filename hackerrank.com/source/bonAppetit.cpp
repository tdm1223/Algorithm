//https://www.hackerrank.com/challenges/bon-appetit
void bonAppetit(vector<int> bill, int k, int b)
{
	int sum = 0;
	for (int i = 0; i < bill.size(); i++)
	{
		if (i == k) continue;
		sum += bill[i];
	}
	sum /= 2;
	if (sum == b)
	{
		cout << "Bon Appetit" << endl;
	}
	else
	{
		cout << b - sum << endl;
	}
}
