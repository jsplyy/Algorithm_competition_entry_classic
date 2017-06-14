#define LOCAL
#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <cstdio>
using namespace std;

set<string> dict;

int main(int argc, char const *argv[])
{
	string s, buf;

#ifdef LOCAL
	freopen("exa_5_3_data.in", "rb", stdin);
	freopen("exa_5_3_data.out", "wb", stdout);
#endif
	while(cin >> s)
	{
		for (int i = 0; i < s.length(); ++i)
		{
			if(isalpha(s[i]))
			{
				s[i] = tolower(s[i]);
			}
			else
			{
				s[i] = ' ';
			}
		}
		stringstream ss(s);
		while(ss >> buf)
		{
			dict.insert(buf);
		}
	}
	for (set<string>::iterator it = dict.begin(); it != dict.end(); ++it)
	{
	cout << *it << "\n";
	}
	return 0;
}