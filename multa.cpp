#include <iostream>
using namespace std;
int main (int argc, char** argv){
	//Crie no DEV C++ um programa que mostre se o usu�rio ser� multado ou n�o.
	//Se numa rodovia a velocidade m�xima � de 80 km/h, andar acima disso e
	//abaixo da metade (40 km/h) d� multa.
	
	float velo,lim, limt;
	cout << "Coloque a que velocidade vc estava: ";
	cin >> velo;
	cout << "\nColoque o limite  da estrada que vc estava: ";
	cin >> lim;
	limt = lim/2;
	
	if (velo >lim || velo<limt){
		cout << "\nvc estava fora do limite permitido vai ser multado"<< "\n\n";
	}
	else {
		cout <<"\nvc esta no limite \n";
	}
	
	system("PAUSE");
	return 0;
}
