#include <iostream>
using namespace std;
class Student{
private:
	int scores[5];	
public: 
	Student(){};
	int calculateTotalScore(int _scores[5]);
};

int Student::calculateTotalScore(int _scores[5]){
	int suma=0;	
	scores[5] = _scores[5];
	for(int i=0;i<5;i++)
	{
		cin>>scores[i];
	}
	for(int i=0;i<5;i++)
	{
		suma+=scores[i];		
	}
	return suma;
}



int main(int argc, char *argv[]) {
	int n;
	cin>>n;
	int scores[5];
	Student std[100];	
	for(int i=0;i<n;i++)
	{		
		std[i].calculateTotalScore(scores);			
	}
	
	


	
	return 0;
}

