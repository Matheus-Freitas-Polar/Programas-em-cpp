#include <iostream>
using namespace std;
int main(int argc, char** argv){
	int tempo;
	cout << "Digite a quanto tempo esta na empresa: " << endl;
	cin >> tempo;
	
	if (tempo<=10){
		cout << "Voce tem um abono de e 10%" << endl;
	}
	else {
		cout << "Voce tem abono de 25%"<< endl;
	}
	return 0;
}
