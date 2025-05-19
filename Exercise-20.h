#include<iostream>
using namespace std;
#include<cmath>
#include<vector>
// 1.1.20
long double my_ln(long N)
{
	return log(N);
}
long my_factorial(long N, vector<long>& mylvec)
{
	if (N <= 0 || floor(N) != N)
		return -1;
	if (N == 1)
		return mylvec[1] = 1;
	if (mylvec[N] == 0)
	{
		mylvec[N] = my_factorial(N - 1, mylvec) * N;
	}
	return mylvec[N];
}
void start_function()
{

	long N = 12;
	vector<long>lvec(N * 1.5, 0);
	cout << my_ln(my_factorial(N, lvec));

}
int my_main()
{
	start_function();
	return 0;
}