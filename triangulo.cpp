#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	//Escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique
	//se esses valores podem ser os comprimentos dos lados de um tri�ngulo e,
	//neste caso, retornar qual o tipo de tri�ngulo formado. Para que X, Y e Z
	//formem um tri�ngulo � necess�rio que a seguinte propriedade seja satisfeita:
	//o comprimento de cada lado de um tri�ngulo � menor do que a soma do
	//comprimento dos outros dois lados. O procedimento deve identificar o tipo de
	//tri�ngulo formado observando as seguintes defini��es:

	int x,y,z;
	
	cout << "coloque os tres valores do triangulo\nvalor de X: ";
	cin>> x;
	cout << "valor de Y: ";
	cin>> y;
	cout << "valor de Z: ";
	cin>>z;
	
	if (x!=y && x!=z && y!=z){
		cout << "\nsao valores de um triangulo Escaleno"<< endl;
	}
	if (x==y && x==z && y==z){
		cout <<"\nsao valores de um triangulo Equilatero"<< endl;
	}
	else {
		cout <<"\nsao valores de um triangulo Isosceles"<< endl;
	}	
	
    system("PAUSE");
	return 0;
}
