#include <iostream>
using namespace std;
int main (int argc, char** argv){

	float salario, total, INSS;
	int hora, dinPhora;
	
	cout << "Esse programa e para calcular o Salario de um professor " << endl;
	cout << "insira o seu salario loquido: " << endl;
	cin >> salario;
	cout << "quantas horas vc trabalhou: " << endl;
	cin >> hora;
	cout << "Agora o inposto em porcentagem do seu inss: " << endl;
	cin >> INSS;
	cout << "e agora quanto por hora vc recebe: "<< endl;
	cin >> dinPhora;
	
	salario = dinPhora * hora;
	total = (INSS/100) * salario;
	
	cout << "seu salrio e de: R$" << total << ",00" << endl;
	
	system ("PAUSE");
	return 0;
	
}
