#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	int A[10];
	cout <<"Insira 10 valores: "<< endl;
	for (int i=0; i<10;i++){
		cin >> A[i];
	}
	
	int B;
	cout << "\n\nValores multiplicados por 3: \n";
	for (int j=0;j<10;j++){
		B=(A[j])*3;
		cout << B<< endl;
	}

	system("PAUSE");
	return 0;
}
