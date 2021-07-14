#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	cout << "programa para inserir dados de curriculo" << endl;
	int idade;
	char nome[200], qualids[200], intecao[200];
		
	cout << "coloque seu nome: "<< endl;
	cin >> nome;
	cout << "Coloque sua idade: "<< endl;
	cin >> idade;
	cout << "Coloque suas qualidades proficionais: "<< endl;
	cin >> qualids;
	cout << "Coloque suas inteçoes na empresa (pequena biografia): " << endl;
	cin >> intecao; 
	
	cout << "Seu nome: "<< nome << " Idade:  "<< idade<< endl;
	cout << "------------------------------------Qualidades----------------------------------------------------------------" << endl;
	
	cout << qualids << endl;
	
	cout << intecao << endl;
	
	system ("PAUSE");
	return 0; 
	
}
