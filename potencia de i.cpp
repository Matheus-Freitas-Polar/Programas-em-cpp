#include <iostream>
using namespace std;
int main( int argc, char** argv){
	cout << "Insira a pontecia de i:"<< endl;
	int ix, ir;
	cin >> ix;
	ir = ix%4;
	

	switch (ir){
		case 0: 
			cout << "O resultado e 1"<< endl;
			break;
		case 1: 
			cout << "O resultado e i"<< endl;
			break;	
		case 2: 
			cout << "O resultado e -1"<< endl;
			break;	
		case 3: 
			cout << "O resultado e -i"<< endl;
			break;
		default:
			cout << "resultado não computa"<<endl;
	}
	return 0;	
}
