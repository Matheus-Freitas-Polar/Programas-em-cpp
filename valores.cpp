#include <iostream>
using namespace std;
int main (int argc, char** argv){

	int vet[10];
	cout <<"Insira 10 valores: "<< endl;
	for (int i=0; i<10;i++){
		cin >> vet[i];
	}
	cout <<"\n\n";
	cout << "Seus valores sao: "<< endl;
	for (int j=0;j<10;j++){
		cout << vet[j]<< endl;
	}

	system("PAUSE");
	return 0;
}
