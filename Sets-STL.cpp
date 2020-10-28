#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
	set <int>s; //creo el iterador
	int n;
	cin>>n; //pide la cantidad de iteradores
	for (int i =0;i<n;i++)
	{
		int a,option;
		
		cin>>option>>a;
		switch(option)
		{
		case 1:			
			s.insert(a);
			break;
		case 2: 			
			s.erase(a);
			break;
		case 3:
			cout << (s.find(a) == s.end() ? "No" : "Yes") << endl;				
			break;			
		}
	}
	
	return 0;
}
