#include <iostream>
using namespace std;
int main(int argc, char** argv){
	//4) Crie um programa que identifique se o n�mero digitado pelo usu�rio � par,
    //�mpar ou nulo. Lembre-se, para um n�mero ser par sua divis�o por 2 tem que
    //dar resto 0, ou seja, voc� pode colocar um if(numero%2==0).
	 int numero;
	 
	 cout << "Insira um numero para indentifica-lo como impar ou par: " << endl;
	 cin >> numero;
	 
	 if ((numero%2)==0){
	 	cout << "Esse numero e par" << endl;
	 }
	 else {
	 	cout << "esse numero e impar" << endl;
	 }
	 return 0;
}

