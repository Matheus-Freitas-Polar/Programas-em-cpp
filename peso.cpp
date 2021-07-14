#include <iostream>
using namespace std;
int main (int argc, char** argv){
	//Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:
	//feminino 2: masculino) de uma pessoa, construa um programa que calcule e
	//imprima seu peso ideal, utilizando as seguintes Fórmulas:
	//			? Para homens: (72.7 * Altura) – 58
	//			? Para mulheres: (62.1 * Altura) – 44.7
	
	cout << "Insira o seu sexo Homen(1) Mulher(2): ";
	int sexo,altura,pso;
	cin >> sexo; 
	cout << "Agora sua altura em cm: ";
	cin >> altura;
	
	if (sexo ==1){
		pso=(72.7*altura)-58;
		cout << "Seu pesso ideal e de "<< pso<< "kg"<< endl;
	}
	else{
		pso=(62.1*altura)-44;
		cout << "Seu peso ideal e de "<< pso<< "kg"<< endl;
	}
	
cout << "\n";
	system("PAUSE");
	return 0;
}
