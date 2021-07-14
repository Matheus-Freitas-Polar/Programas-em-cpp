#include <iostream>
using namespace std;
int main (int argc, char** argv){
	int D;
	int A[20];
	cout <<"20 Valores (A): "<< endl;
	for (int i=0,y=5;y<28,i<20;i++,y++){
		A[i]=y;
		cout << y << endl;
	}
	
	int B[20];
	cout << "\n\n20 Valores (B): \n";
	for (int j=0,k=1;j<20,k<24;j++,k++){	
		B[j]=k;
		cout << k<< endl;		
	}
	
	int C[20];
	cout << "\n\n20 valores subtraidos: "<< endl;
	for (int n=0,m=0;n<20,m<20;n++,m++){
		D= B[n]-A[m];
		cout << D << endl;
	}

	system("PAUSE");
	return 0;
}
