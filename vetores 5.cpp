#include <iostream>
using namespace std;
int main(int argc, char** argv){
	//Crie um programa com 5 posi��es de vetores, onde vetor[0] = 1, vetor[1]
	//= 0, vetor[2]=15, vetor[3]=16, vetor[4]=2, em seguida, fa�a o c�lculo
	//vetor[3]*vetor[4], mostrando o resultado em tela. Lembre-se que o vetor
	//vai at� o n�mero 4, porque sempre come�a na posi��o 0.
	int n[5];
	
	n[0] = 1;
	n[1] = 0;
	n[2] = 15;
	n[3] = 16;
	n[4] = 2;
	
	cout << n[3]*n[4] << endl;
	return 0; 
	
}
