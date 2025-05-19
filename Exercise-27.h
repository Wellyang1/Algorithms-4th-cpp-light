#include<iostream>
using namespace std;
#include<vector>
#include<map>
// 1.1.27

unsigned int all_count = 0;
double binomial(int N, int k, double p, vector<vector<double>>& binvec)
{
	all_count++;
	if (N == 0 && k == 0)
		return binvec[N][k] = 1.0;
	// 这里我又加了个新的约束条件，更加符合数学逻辑
	if (N < 0 || k < 0 || k>N)
		return 0.0;

	if (!binvec[N][k])
		binvec[N][k] = (1.0 - p) * binomial(N - 1, k, p, binvec) + p * binomial(N - 1, k - 1, p, binvec);

	return binvec[N][k];
}

void start()
{
	int N = 101;
	vector<vector<double>> my_binvec(N, vector<double>(N, 0.0));
	cout << binomial(100, 50, 0.25, my_binvec) << endl;
	cout << all_count << endl;
}
int my_main()
{
	start();
}