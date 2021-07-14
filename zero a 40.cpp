#include <iostream>
using namespace std;
//Crie um programa que imprima em ordem decrescente números de 40 até
//0. Utilize o comando While para isso.
int main(int argc, char** argv){
	cout << "Numeros decrescente de 40 ate 0" << endl;
	int n = 40;
	while (n>=0){
		cout << n << endl;
		n--;
	}
	return 0;
}
