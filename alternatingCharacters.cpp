/*
Alternating Characters Problem

Shashank likes strings in which consecutive characters are different.
For example, he likes ABABA, while he doesn't like ABAA.
Given a string containing characters A and B only, he wants to change it into a string he likes.
To do this, he is allowed to delete the characters in the string.

Your task is to find the minimum number of required deletions.

Input Format:

The first line contains an integer T, i.e. the number of test cases.
The next T lines contain a string each.

Output Format:

For each test case, print the minimum number of deletions required.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int numdelete=0;
	string numtest;
	string altstring;
	cin >> numtest;
	for (int i = 0; i < stoi(numtest); i++)
	{
		cin >> altstring;
		for (int j = 0; j < altstring.length()-1; j++)
		{
			if (altstring[j] == altstring[j + 1])
			{
				numdelete++;
			}
		}
		cout << numdelete << endl;
		numdelete = 0;
	}
	return 0;
}
