#include <iostream>
#include <string>

using namespace std;

int main() {
	string a,b,c;   //a,b,c,d - e,f
	cin>>a>>b;
	int len_a = a.size();
	int len_b = b.size();
	
	c =  a + b;
	cout<<len_a<<" "<<len_b<<endl;
	cout<<c<<endl;
	swap(a[0],b[0]);
	cout<<a<<" "<<b<<endl;	
	
	return 0;
}
