#include<iostream>
using namespace std;
int main(int argc, char** argv){
	//Crie um programa em que o usuário digite um número e apareça o seu
	//nome por extenso. Os números devem ser de 0 a 6, caso ele digite um
	//número diferente, exibir a mensagem “Numero invalido”. Utilize o Switch
	//para isso.
	
	 int X;
	
	 cout <<"inisra um numero de 0 a 6 para que ele possa ser lido por extenso: "<< endl;
	 cin >> X;
	 
	 switch (X){
	 	case 1:
	 		cout << "Um" << endl;
	 		break;
	 	case 2:
	 		cout << "Dois" << endl;
	 		break;
	 	case 3:
	 		cout << "Tres" << endl;
	 		break;
	 	case 4:
	 		cout << "Quatro" << endl;
	 		break;
	 	case 5:
	 		cout << "Cinco" << endl;
	 		break;
	 	case 6:
	 		cout << "Seis" << endl;
	 		break;
	 	default:
	 		cout << "insira um numero equivalente a o proposto"<< endl;
	 }
}
