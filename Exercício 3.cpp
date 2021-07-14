#include <iostream>
using namespace std;
int main(int argc, char** argv){
	int formula, a, b, c;
	a = 4;
	b = 5;
	c = 6;
	cout << "O primero valor e igual: " << a << endl;
	cout << "O segundo valor e igual: " << b << endl;
	cout << "E o terciro e igua a: " << c << endl;
	
	formula = a+(--b)*c;
	cout << "O valor fianal e de: " << formula << endl;
}
