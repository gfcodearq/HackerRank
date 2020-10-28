#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
#include <map>
using namespace std;


int main() 
	{
		map<std::string, int> m={}; // puedo ngresar dos tipo de datos distintos
		string s;
		int a, b;
		cin>>a; //cantidad de veces que se va a pedir los datos
		while(a--)
		{
			cin>>b;
			cin>>s;
			switch(b)
			{
			case 1: cin>>b; m[s]+=b; break;
			case 2: m.erase(s); break;
			case 3: cout<<m[s]<<"\n";
			}
		}
		return 0;
	}
