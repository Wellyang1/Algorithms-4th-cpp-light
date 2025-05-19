#include<iostream>
using namespace std;
#include<vector>

long F(int N, vector<long>& lvec)
{
	if (N == 0)
	{
		lvec[0] = 0;
		return 0;
	}
	else if (N == 1)
	{
		lvec[1] = 1;
		return 1;
	}
	else if (lvec[N] != 0) return lvec[N];
	return  lvec[N] = F(N - 1, lvec) + F(N - 2, lvec);
}
int my_main()
{
	vector<long>lvec(1010, 0);
	cout << F(55, lvec);
	return 0;
}