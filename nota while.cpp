#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	int n1,n2,totl;
	char oss;
	oss = "s";
	
	while (oss = "s" || oss = "S"){
		cout << "Insira a primeira nota: ";
		cin >> n1;
		
		cout << "Insira a sugunda nota: ";
		cin >> n2;
		
		totl = n1+n2;
		
		if ( totl >=60){
			cout << "Aluno aprovado!!!";
		}
		else {
			cout << "Aluno reprovado";
		}
		cout << "Digita novas nota [s/n]: ";
		cin >> oss;
	}
	
	system("PAUSE");
	return 0;
}
