// C++ program to demonstrate working of regex_search()
#include <iostream>
#include <regex>
#include <string.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	regex exp(".+@gmail\\.com$");
	vector<string> str1;
	for (int i = 0; i < test; i++)
	{
		string first_name, email_id;
		cin >> first_name >> email_id;
		if (regex_match(email_id, exp))
		{
			str1.push_back(first_name);
		}
	}
	sort(str1.begin(), str1.end());
	for (int i = 0; i < str1.size(); i++)
	{
		cout << str1[i] << " ";
	}

	return 0;
}
