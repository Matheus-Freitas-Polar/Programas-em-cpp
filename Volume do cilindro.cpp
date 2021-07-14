#include <iostream>
using namespace std;
int main (int argc, char** argv){
	 
	float r, h, v;
	 
	cout << "Programa para calcular volume de um cilindro \n"<< endl;
	cout << "coloque a altura do cilindro: \n";
	cin >> h;
	cout << "Coloque o raio do cilindro: \n";
	cin >> r; 
	
	v = (r*r)*3.14159*h; 
	
	cout << "o volume do seu cilindro e de: "<< v << "centrimetros cubicos"<< endl;
	
	system("PAUSE");
	return 0;
	
}
