#include <iostream>
using namespace std;
int main (int argc, char** argv){
	//Crie no DEV C++ um programa que mostre para o usuário se ele é obrigado a
	//votar ou não. Para ele ser obrigado a votar o usuário deve ter idade maior que
	//18 anos e menor que 65 anos.
	 	
	int idd;

    cout << "isira sua idade: ";
    cin >> idd;
    
    if (idd >=18&& idd<=65){
    	cout << "\nvc deve votar e exercer sua cidadania e votar "<< endl;
	}
	else {
		cout << "\nVc nao precisa votar "<< endl;
	}
cout << "\n\n";
	system("PAUSE");
	return 0;
}
