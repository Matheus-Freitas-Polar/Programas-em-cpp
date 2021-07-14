#include <iostream>
using namespace std;
int main (int argc, char** argv){

cout << "Programa para calcular volume de objetos: " << endl;
float volume, compri, largura, altura;

cout << "insira a lagura do objeto: "<< endl;
cin >> largura;
cout << "insira o comprimento: "<< endl;
cin >> compri;
cout << "Agora a altura: "<< endl;
cin >> altura;
volume = compri*largura*altura;

cout << volume << " cm³"<< endl;
system ("PAUSE");
	return 0;
}
