#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	int num, soma, cont, menor,i;
	float media;
	
	soma=0;
	cont=0;
	menor=100;
	
	for (i=1; i<=5; i++){
		cout << "digite um numero: ";
		cin >> num;
		soma+=num;
		if (num > menor){
			menor=num;
		}
		else if(num >5 && num <10){
			cont++;
		}
		
	}
	media = soma /5.0;
	
	cout << "O menor numero digitado foi "<< menor << "\n";
	cout << "A media dos 5 numeros e' :"<< media << "\n";
	cout << "a quantidade de quantidade de numeros entre 5 e 10 e':"<< cont << endl;
	
	
	system("PAUSE");
	return 0;
}
