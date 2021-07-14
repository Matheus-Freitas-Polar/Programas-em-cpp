#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	cout << "Programa de soma dos impares"<< "\n\n";
	
	int A[5],soma,total=0,i;
	
	cout << "insira cinco valores aleatorios (depois de cada um tecle [enter])" << endl;
	cin >> A[0];
	cin >> A[1];
	cin >> A[2];
	cin >> A[3];
	cin >> A[4];
	cout << "Ok "<< endl;
	
	for(i=0; i<5;i++){
		
		if ((A[i]%2)==0){
		}
		else{
			soma+=(A[i]);
		}
	}

	cout << "o total de numeros impares somados e' "<< soma<< endl;
	cout << "/n/n";
	system("PAUSE");
	return 0;
}
