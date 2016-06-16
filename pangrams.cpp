/*
Pangrams problem

Given a sentence S, tell if it is a pangram or not.

Input Format:

Input consists of a string .
Lower-case and upper-case instances of a letter are considered the same.

Output Format:

Output a line containing pangram if  is a pangram, otherwise output not pangram.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	string name;
	getline(cin, name);
	string letters = "";
	char a;
	for (int i = 0; i < name.length(); i++)
	{
		a = tolower(name.at(i));
		if (letters.find(a) == std::string::npos && a >= 'a' && a <= 'z')
		{
			letters += name.at(i);
		}
	}

	if (letters.length() >= 26)
	{
		cout << "pangram" << endl;
	}
	else
	{
		cout << "not pangram" << endl;
	}
	return 0;
}
