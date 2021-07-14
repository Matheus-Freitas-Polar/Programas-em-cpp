#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	int num, qtd1,qtd2;
	
	do {
		cout << "Digite um numero se quiser sair digite um negativo: ";
		cin >> num;
		if ((num%=3)==0){
			qtd1++;
		}
		else if((nume%=7)==0){
			qtd2++;
		}	
	}while(num<0);
	
	cout << "tem "<< qtd1 <<" numeros divisiveis por 3 "<< endl;
	cout << "tem "<< qtd2 << " numeros divisiveis por 7"<< endl;
	
	
	system("PAUSE");
	return 0;
}
