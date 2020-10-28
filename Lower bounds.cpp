#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n,num;
	cin>>n;
	vector <int> Q;
	
	for (int i =0;i<n;i++)
	{
		cin>>num;
		Q.push_back(num); //ingreso al vector los numeros
	}
	
	int cons,val;
	cin>>cons;
	for(int i =0;i<cons;i++)
	{
		cin >> val;
		vector<int>::iterator low = lower_bound(Q.begin(),Q.end(),val);	//ordena y busca el menor 
	
	
	if (Q[low - Q.begin()] == val)
		cout<<"Yes"<<(low - Q.begin()+1)<<endl;
	else
		cout<<"No"<<(low - Q.begin()+1)<<endl;
	}
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	return 0;
}
