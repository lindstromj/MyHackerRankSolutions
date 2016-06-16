/*
Maximum Element Problem

You have an empty sequence, and you will be given N queries. Each query is one of these three types:
-----------------------------------------------------------
|1 x  -Push the element x into the stack.									|
|2    -Delete the element present at the top of the stack.|
|3		-Print the maximum element in the stack.						|
-----------------------------------------------------------

Input Format:

The first line of input contains an integer, . The next  lines each contain an above mentioned query.
(It is guaranteed that each query is valid.)

Output Format:

For each type 3 query, print the maximum element in the stack on a new line.

*/
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	string n , query;
	int pushVal;
	vector<int> arr;
	vector<int>::iterator maxElem;
	getline(cin, n);
	int mainfor = stoi(n);
	for (int i = 0; i < mainfor; i++)
	{
		getline(cin, query);
		switch (query.at(0))
		{
		case '1':
			arr.push_back(stoi(query.substr(2, query.length() - 1)));
			break;
		case '2':
			arr.pop_back();
			break;
		case '3':
			maxElem = max_element(arr.begin(), arr.end());
			cout << *maxElem << '\n';
			break;
		default :
			exit(1);
		}
	}

	return 0;
}
