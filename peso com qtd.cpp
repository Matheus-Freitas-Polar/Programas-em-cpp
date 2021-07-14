#include <iostream>
using namespace std;
int main (int argc, char** argv){
	cout << "Programa para calulo de pesso"<< endl;
	
	int peso, pesot, qtd;
	
	while (peso!=-1){	
		cout << "digite o peso da pesso ou -1 para terminar o programa: ";
		cin >>peso;
		pesot+=peso;
		if (peso !=-1){	
			qtd++;
		}
	
	}
	
	cout << "peso total e' de: "<< pesot << endl;
	cout <<" e possue "<< qtd << " pessoas"<< endl;
	
	system("PAUSE");
	return 0;
}
