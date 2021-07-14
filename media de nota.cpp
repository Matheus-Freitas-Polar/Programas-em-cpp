#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	cout << "Programa para calcular media de notas" << endl;
	
	int n1,n2,n3,n4;
	
	cout << "Isira a nota do primeiro bimestre: ";
	cin >> n1;
	
	cout << "Insira a nota do segundo bimestre: ";
	cin >> n2;
	
	cout << "Agora a do terceiro:";
	cin >> n3;
	
	n4= (n1+n2+n3)/3;
	
	cout << "\n";
	
	if (n4 >= 6){
		cout << "vc foi aprovado ;)" << endl;
	} else {
		cout << "vc foi reprovado :( "<< endl;
	}
	
	system("PAUSE");
	return 0;
}
