#include <iostream>
using namespace std;
int main (int argc, char** argv){
	cout << "Digite um numero para informar a tabuada dele ate 10:";
	
	int n1,n2;
	cin >> n1;
	
	for (int i=0; i<=10;i++){
		n2= n1*i;
		cout << n1 << " X "<< i << " = "<< n2<< endl;
	}
	
	system("PAUSE");
	return 0;
}
