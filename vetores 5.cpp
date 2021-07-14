#include <iostream>
using namespace std;
int main(int argc, char** argv){
	//Crie um programa com 5 posições de vetores, onde vetor[0] = 1, vetor[1]
	//= 0, vetor[2]=15, vetor[3]=16, vetor[4]=2, em seguida, faça o cálculo
	//vetor[3]*vetor[4], mostrando o resultado em tela. Lembre-se que o vetor
	//vai até o número 4, porque sempre começa na posição 0.
	int n[5];
	
	n[0] = 1;
	n[1] = 0;
	n[2] = 15;
	n[3] = 16;
	n[4] = 2;
	
	cout << n[3]*n[4] << endl;
	return 0; 
	
}
