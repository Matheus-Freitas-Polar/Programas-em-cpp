#include <iostream>
using namespace std;
//Crie um programa para calcular a m�dia aritm�tica entre tr�s notas fornecidas
//pelo usu�rio.
int main(int argc, char** argv){
	 float nP,nS,nT,mG;
	 
	 cout << "Isnisra a nota da sua primeira prova: " << endl;
	 cin >> nP;
	 cout << "Isnisra a nota da sua segunda prova: " << endl;
	 cin >> nS;
	 cout << "Isnisra a nota da sua terceira prova: " << endl;
	 cin >> nT;
	 mG= (nP+nS+nT)/3;
	 cout << "A sua media foi de: "<< mG << endl;
	 
	return 0;
}
