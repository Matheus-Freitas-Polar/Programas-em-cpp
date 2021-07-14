#include <iostream>
using namespace std;
int main (int argc, char** argv){
	//Faça um programa que receba a idade de um nadador e retorne a seguinte
	//informação:
	//	    		Idade Categoria
	//		Menor ou igual 7 Infantil A
	//		Menor ou igual a 10 Infantil B
	//		Menor ou igual a 13 Juvenil A
	//		Menor ou igual a 17 Juvenil B
	//		Maior ou igual a 18 Adulto
	
	int years;
	 
	cout << "Isira a sua idade para te clasificar em um grupo\n";
	cin >> years;
	cout << "\n";
	if (years <=7){
		cout << "Pela sua idade vc pertence a o grupo Ifantil A"<< endl;
	}
	else if (years <=10){
		cout << "Pela sua idade vc pertence a o grupo Infantil B"<< endl;
	}
	else if (years <=13){
		cout << "Pela sua idade vc pertence a o grupo Juvenil A"<< endl;
	}
	else if (years <=17){
		cout << "Pela sua idade vc pertence a o grupo Juvenil B"<< endl;
	}
	else if (years <=18){
		cout << "Pela sua idade vc pertence a o grupo Aduldo"<< endl;
	}

cout <<"\n";
	
	system("PAUSE");
	return 0;
}
