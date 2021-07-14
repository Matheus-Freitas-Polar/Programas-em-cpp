#include <iostream>
using namespace std;
int main (int argc, char** argv){
	float n1,n2,n3,n4,md;
	
	cout << "Ola, insira a sua nota do primeiro bimestre: " << endl;
	cin >> n1;
	
	cout << "Agora do segundo bimestre: "<< endl;
	cin >> n2;
	
	cout << "Agora do seu terceiro bimestre: "<< endl;
	cin >> n3;
	
	cout << "Agora do seu quarto bimestre: "<< endl;
	cin >> n4;
	
	md = (n1+n2+n3+n4)/4;
	
	if (md >= 7.5){
		cout << md << "Pontos no total resultado: \nAPROVADO !!!"<< endl;		
    }
    else if (md >= 5){
    	cout << md << " Pontos no total resultado: \nRECUPERACAO"<< endl;
	}
	else {
		cout << "Pontos no total resultado: \nREPROVADO :(" << endl;
	}
	cout << "\n\n\n"<< endl;
	
	system("PAUSE");
	return 0;
}
