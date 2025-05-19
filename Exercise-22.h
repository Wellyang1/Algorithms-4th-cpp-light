#include<iostream>
#include<vector>
using namespace std;
// 1.1.22
int my_rank(int key, vector<int>a, int lo, int hi, unsigned int depth = 0)
{
	cout << " lo: " << lo << " " << " hi: " << hi << " " << " depth: " << depth << endl;

	if (lo > hi)
		return -1;

	int mid = lo + (hi - lo) / 2;

	if (key < a[mid])
		return my_rank(key, a, lo, mid - 1, ++depth);

	else if (key > a[mid])
		return my_rank(key, a, mid + 1, hi, ++depth);

	else
		return mid;
}
void start_binary()
{
	vector<int>arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr_hi = arr.size() - 1;
	int arr_lo = 0;
	unsigned int arr_depth = 0;
	int target = 6;
	my_rank(target, arr, arr_lo, arr_hi, arr_depth);
}
int my_main()
{
	start_binary();
	return 0;
}