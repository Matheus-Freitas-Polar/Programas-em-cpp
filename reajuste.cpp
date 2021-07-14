#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	//Elaborar um programa que efetue o cálculo do reajuste de salário de um
    //funcionário. Considere que um funcionário deverá receber um reajuste de
	//15% caso seu salário seja menor que 500. Se o salário for maior ou igual a
    //500, mas menor ou igual a 1000, seu reajuste será de 10%; caso seja ainda
    //maior que 1000, o reajuste deverá ser de 5%. Mostrar mensagem mostrando
    //o salário antigo e o novo salário com reajuste.
     
    float sal,rea;
    
    cout << "informe seu salario para reajuste: ";
    cin >> sal;
    cout << "\n";
    
    if (sal <501){
    	sal = sal+(sal*0.15);
    	cout << "Seu reajuste foi de 15% entao seu salario e de:\nR$"<< sal << ".00"<< endl;
	}
	else if (sal >499 && sal <1001){
		sal = sal+(sal*0.10);
		cout <<"Seu rajuste foi de 10% entao seu salario e de: \nR$"<< sal <<".00"<< endl;
	}
    else {
    	sal= sal+(sal*0.05);
    	cout <<"Seu reajuste foi de 5% entao seu salario e de: \nR$" << sal <<".00" << endl;
	}
	cout << "\n\n";
	system("PAUSE");
	return 0;
}
