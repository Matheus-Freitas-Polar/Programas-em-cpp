#include <iostream>
using namespace std;
int main(){
	
	float n, soma =0, num;
	
	do {
		cout <<"digite um numero: \n" ;
		cin >> n;
		soma+=n;
		cout << "digite 1 para iniciar o programa: \n";
		cin >> num;
		
	}while(num == 1);
	cout << " a soma dos numeros e': "<< soma << endl;
	
	return 0;
	
}
