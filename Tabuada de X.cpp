#include<iostream>
using namespace std;
int main(int argc, char**argv){
	int x;
	
	cout << "Insira qualquer numero : " << endl;
	cin >> x;
	
	for (int i = 0; i<= 10; i++){
		cout << i << " x " << x << " = " << (i*x) << endl;
	}
	system("PAUSE");
	return 0; 
}
