#include <iostream>
using namespace std;
int main (int argc, char** argv){
	/*Desenvolver um programa que efetue a leitura de 15 elementos de uma
	matriz A do tipo vetor. Construir uma matriz B de mesmo tipo, observando a
	seguinte lei de formação: “Todo elemento de B deverá ser o quadrado do
	elemento A correspondente”. Apresente as matrizes A e B.*/
	int A[15],B;
	cout << "Valores de A:\n";
	for (int i,o;o<15, i<15;o++,i++){
		A[i]=o;
		cout << o << endl;
	}
	cout << "\nO quadrado desses valore sao: \n";	
	for (int x; x<15;x++){
		B=A[x]*A[x];
		cout << B << endl;
	}
	system("PAUSE");
	return 0;
}
