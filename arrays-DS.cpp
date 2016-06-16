/*
Arrays - DS Problem

Given an array, A , of N integers, print each element in reverse order as a single line of space-separated integers.

Input Format:

The first line contains an integer, N (the number of integers in A).
The second line contains N space-separated integers describing A.

Output Format:

Print all N integers in A in reverse order as a single line of space-separated integers.
*/

#include <vector>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}
	for (int j = arr.size(); j-- > 0;)
	{
		cout << arr[j] << " ";
	}
	return 0;
}
