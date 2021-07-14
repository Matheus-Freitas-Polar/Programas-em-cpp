#include <Iostream>
using namespace std;
int main( int argc, char** argv){
	
	int Ce, Fe;
	
	cout << "Programa para trocar Celsius para Farenhenit"<< endl;
	cout << ""<< endl;
	cout << "Insira a temperatura em Celsius para ser convertida"<< endl;
	cin >> Ce;
	
	Fe= (9*Ce +160)/5;
	
	cout << Ce << "° graus celsius sao iguais a: "<< Fe << "° graus Farenhenit"<< endl;
	
	system ("PAUSE");
	return 0; 
}
