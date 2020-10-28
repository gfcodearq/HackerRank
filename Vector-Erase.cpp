#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	
	vector<int> v;
	int size,a,b,c,d;	
	cin>>size;
	v.size();
	
	for (int i = 0;i<size;i++)
	{
		cin>>a;
		v.push_back(a);
	}	
	cin>>b;
	v.erase(v.begin()+b-1);
	cin>>c>>d;
	v.erase(v.begin()+c-1,v.begin()+d-1);
	cout<<v.size()<<endl;	
	for (int i = 0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	return 0;
}
