#include <iostream>
using namespace std;
int main (int argc, char** argv){
	 
	int Fa, Ce;
	
	cout << "Programa para tranformar Farenheint para Celsius"<< endl;
	cout<< " " << endl;
	cout << "Inisira a temperatura em Farenheit para conversao:"<< endl;
	cin >> Fa;
	Ce = ((Fa-32)*5)/9;
	
	cout << Fa << " graus Farenhenit sao iguais a: "<< Ce << " graus Celsius"<< endl;
	
	system ("PAUSE");
	return 0; 
}
