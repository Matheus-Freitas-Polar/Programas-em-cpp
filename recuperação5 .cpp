#include <iostream>
using namespace std;
int main(int argc, char** argv){
	float v,s,t;
	cout << "Insira em qual e a distancia do trajeto do corpo:"<< endl;
	cin >> s;
	cout << "Insira o tempo que esse corpo chegou a o destino: "<< endl;
	cin >> t;
	v = s/t;
	cout << "A velocidade foi de "<< v << endl;
	return 0;
}
