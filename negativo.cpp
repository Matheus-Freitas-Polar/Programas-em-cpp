#include <iostream>
using namespace std;
int main (int argc, char** argv){
/*Desenvolver um programa que efetue a leitura de uma matriz A do tipo vetor
com 10 elementos. Construir uma matriz B de mesmo tipo e dimensão, em que cada 
elemento da matriz B deverá ser o valor negativo do elemento
correspondente da matriz A.*/
	int A[15],B[15];
	cout << "Insira 15 valores paraf A:\n";
	for (int y; y<15; y++){
		cin>> A[y];
	}
	
	cout <<"\nValores de A fatoriados: "<< endl;
	
	for (int i=1; i<15;i++){
		 for(B[i]=1 ;A[i]>1;A[i]--){
		 B[i]=(A[i])*-1;
		}
		cout << B[i] << endl;
	}
	
	
	system("PAUSE");
	return 0;
}
