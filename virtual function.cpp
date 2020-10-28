#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
protected: 
	string name;
	int edad;
public:
	void get_data(string, edad){cin>>};
	void put_data;
};

class Professor: public Person{
protected:
	int publication;
	int cur_id;
};

class Student : public Person{
protected:
	int marks[6];
public:
	void get_data(string,int,int);
	void put_data();
	
};

int main(){
	
	int n, val;
	cin>>n; //The number of objects that is going to be created.
	Person *per[n];
	
	for(int i = 0;i < n;i++){
		
		cin>>val;
		if(val == 1){
			// If val is 1 current object is of type Professor
			per[i] = new Professor;
			
		}
		else per[i] = new Student; // Else the current object is of type Student
		
		per[i]->getdata(); // Get the data from the user.
		
	}
	
	for(int i=0;i<n;i++)
		per[i]->putdata(); // Print the required output for each object.
	
	return 0;
	
}
