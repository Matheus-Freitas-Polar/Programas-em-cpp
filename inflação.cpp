#include <iostream>
using namespace std;
int main (int argc, char** argv){
	//Elaborar um programa que lê o preço de um produto e inflaciona esse preço
	//em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.
    
    float prdt;
    
    cout << "isira o valor de um produto: ";
    cin >> prdt;
    
cout<< "\n";
	
	if (prdt<100){
		prdt= prdt+(prdt*0.10);
		cout <<"O valor do produto aumentou 10% \nresultado: R$"<< prdt<< ".00"<< endl;
	}
	else {
		prdt=prdt+(prdt*0.20);
		cout <<"O valor do prduto aumentou 20% \nresultado: R$"<< prdt<< ".00"<< endl;
	}
cout << "\n";
	system("PAUSE");
	return 0;
}
