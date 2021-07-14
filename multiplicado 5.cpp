#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	int A[8];
	cout <<"Insira 10 valores: "<< endl;
	for (int i=0; i<8;i++){
		cin >> A[i];
	}
	
	int B;
	cout << "\n\nValores multiplicados por 5: \n";
	for (int j=0;j<8;j++){
		B=(A[j])*5;
		cout << B<< endl;
	}
	
	system("PAUSE");
	return 0;
}
