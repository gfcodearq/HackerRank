#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
		
		/* Enter your code here */
		
		cout<<hex<<showbase<<nouppercase<<left; // pasa de un numero decimal a un hexadecimal //nouppercase todas la letras en minusculas
		cout<<long(A)<<endl;
		cout << setprecision(2)<<fixed <<dec<<showpos<<std::setfill ('_') << std::setw (15)<<right; //showpos muestra signos positivos
		cout<<B<<endl;
		cout << scientific << uppercase << noshowpos << setprecision(9); //usa notacion cientifica
		cout<<C<<endl;
	}
	return 0;
	
}
