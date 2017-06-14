#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <ctime>
#include <cstdlib>
#include <string>
#include <map>
#define ARRAY_SIZE(a) (sizeof(a)/sizeof(a[0]))

using namespace std;
int main(int argc, char const *argv[])
{
	int a;
	int data[] = {12,34,22,78,133,1,2,3};
	set<int> set_data;

	cout << "c++ sort test:";
	sort(data,data+8);
	for (int i = 0; i < ARRAY_SIZE(data); ++i)
	{
		cout << data[i] << " ";
	}
	cout << endl ;
	cout << "time(0)" << time(0) << endl;

	//generate random data. srand set rand seed.
	srand(time(0));
	cout << "rand:" << rand() << " RAND_MAX:" << RAND_MAX << endl;

	//set
	set_data.insert(13);set_data.insert(4);set_data.insert(50);
	for (set<int>::iterator it=set_data.begin();it!=set_data.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//map
	map<string,int> map_data;
	map_data["a"] = 1; map_data["b"] = 2; map_data["c"] = 3;
	map<string,int>::iterator it = map_data.end();
	it--;
	cout << it->first << " " << it->second;

	//stack
	
	// scanf("%d",&a);
	// printf("c printf test.%d\n",a);
	// cin >> a;
	// cout << "c++ cout test." << a;	
	return 0;
}