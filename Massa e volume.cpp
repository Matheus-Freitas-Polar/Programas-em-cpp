#include<iostream>
using namespace std;
int main (int argc, char** argv){
	
	//3) Crie um programa que receba a massa e o volume de um objeto qualquer e
    //calcule a densidade. A fórmula será: den = massa/vol.
    
    float massa, volume, densidade;	
	
	cout << "Insira a massa do objeto: "<< endl;
	cin >> massa; 
	cout << "Agora o volume: " << endl;
	cin >> volume;
	densidade = massa/volume;
	cout << "A densidade e "<< densidade << " kg/cm3" << endl;

	return 0; 
}
