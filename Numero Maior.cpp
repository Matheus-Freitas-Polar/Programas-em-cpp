#include <iostream>
using namespace std;
int main(int argc, char** argv){
	//Crie um programa para determinar se os n�meros reais s�o iguais ou
    //diferentes. Utilize os comandos if else para isso.
     int X,Y;
     
     cout << "Insira um numero" << endl;
     cin >> X;
     cout << "Insria outro numero" << endl;
     cin >> Y;
     
     if (X==Y){
     	cout << "Esses numeros sao iguais" << endl;
	 }
	 if (X!=Y){
	 	cout << "Esses nuemero sao diferentes" << endl;
	 }
	system("PAUSE");
	return 0;
}
