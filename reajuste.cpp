#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	//Elaborar um programa que efetue o c�lculo do reajuste de sal�rio de um
    //funcion�rio. Considere que um funcion�rio dever� receber um reajuste de
	//15% caso seu sal�rio seja menor que 500. Se o sal�rio for maior ou igual a
    //500, mas menor ou igual a 1000, seu reajuste ser� de 10%; caso seja ainda
    //maior que 1000, o reajuste dever� ser de 5%. Mostrar mensagem mostrando
    //o sal�rio antigo e o novo sal�rio com reajuste.
     
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
