#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	float n1,n2,n3;
	int m1;
	
	while(m1<=3){
		cout <<"Digite uma nota: ";
		cin >> n1;
		n3+=n1;
		m1++;
	}
	n2=n3/3;
	
	cout << "A media do aluno foi de: "<<n2<< endl;
	
	
	
	system("PAUSE");
	return 0;
}
