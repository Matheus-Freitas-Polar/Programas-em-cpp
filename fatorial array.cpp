#include <iostream>
using namespace std;
int main (int argc, char** argv){
	/*Desenvolver um programa que efetue a leitura da matriz A do tipo vetor com
15 elementos. Construir uma matriz B do mesmo tipo, sendo que cada
elemento da matriz B seja o fatorial do elemento correspondente da matriz A.
Apresentar as matrizes A e B.*/

	int A[15],B[15];
	cout << "Insira 15 valores paraf A:\n";
	for (int y; y<15; y++){
		cin>> A[y];
	}
	
	cout <<"\nValores de A fatoriados: "<< endl;
	
	for (int i=0; i<15;i++){
		 for(B[i]*=A[i] ;A[i]>1;A[i]--){
		 
		}
		cout << B[i] << endl;
	}
	
	system("PAUSE");
	return 0;
}
