#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	//Ler dois valores numéricos e efetuar a adição. Caso o valor somado seja
    //maior ou igual a 10, deverá ser apresentado somando mais 5; caso o valor
    //somado não seja maior ou igual a 10, este deverá ser apresentado subtraindo
    
	int n1,n2,v;
	
	cout << "Digite um valor: ";
 	 cin >> n1;
	
	cout << "Digite outro: ";
	 cin >> n2;
	
	v= n1+n2;
	cout << "\n";
	cout << n1 << " + "<< n2 << " = "<< v<< endl;
	cout << "\n";
	if (v>= 10){
		v=v+5;
		cout << "Valor e maior ou igual a 10 entao soma 5 \nresultado: "<< v<< endl;
	}
	else {
		v=v-5;
		cout << "Valor e menor que 10 entao subtrai 5 \nresultado: "<< v<< endl;
	}
	
	system("PAUSE");
	return 0;
}
