#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	cout << "programa de calculo de prestação: \n";
	
	float v, t, time, ret, tax;
	
	cout << "Coloque o valor do produto, depois a taxa da prestacao e o tempo"<< endl;
	
	cin >> v;
	cout << "RS "<< v << ",00"<< endl;
	
	cin >> t;
	cout << t << "%" << endl;
	
	cin >> time;
	
	tax= t/100;
	
	ret = (v*tax*time)+v;
	
	cout << ret << " reais a pagar"<< endl;
	
	system("PAUSE");
	return 0;
	
	
}
