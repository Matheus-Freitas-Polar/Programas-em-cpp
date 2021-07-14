#include <iostream>
using namespace std;
 int main(int argc, char** argv) {
 	int a,b,cA,cB,cC,cD,cE,cF;
 	a= 20;
 	b= a+2;
 	cA= (a>1)&&(b<a);
 	cB= (a==3)||(b>a);
 	cC= (a<b)||(b<20);
 	cD= (a>2)&&(a<30);
 	cE= (b<12)||(a>20);
 	cF= (a>b)&&(b>20);
	cout << "Se for 0 e falso e se for 1 e verdadeiro" << endl; 	
 	cout << "A e: "<< cA << endl;
 	cout << "B e: "<< cB << endl;
 	cout << "C e: "<< cC << endl;
 	cout << "D e: "<< cD << endl;
 	cout << "E e: "<< cE << endl;
 	cout << "F e: "<< cF << endl;
 	
 	return 0; 	
 }
