#include <iostream>
using namespace std;
int main (int argc, char** argv){
 	
 	int fat, n;
	cout << "Insira um valor para o qual deseja calcular seu fatorial: ";
	cin >> n;
	fat = 1;
	for( ; n > 1; n-=1){
	fat *= n;
	}
	cout<< "\nO fatorial do numero e': " << fat << "\n\n";
		 
	system("PAUSE");
	return 0;
}
