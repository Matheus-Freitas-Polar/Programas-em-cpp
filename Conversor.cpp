#include <iostream>
using namespace std;
//Tente fazer este exercício convertendo 18 graus Celsius em Farenheit e 65 graus
//Farenheit em Celsius.
int main(int argc, char** argv){
	float C,F;
	
	C= (65-32)/1.8;
	F= 18*1.8+32;
	
	cout << "18 graus Celsius sao iguais a: "<< F << " graus Farenheit" << endl;
	cout << "65 graus Farenhet sao iguais a: "<< C << " graus Celsius" << endl;
	
	return 0;
}
