#include <iostream>
using namespace std;
int main (int argc, char** argv){
	cout << "programa para calcular o gasto de uma altomevel :\n";
	
	float litros, velocidade, tempo, tempo1, distancia;
	
	cout << "Tempo em minutos do percurso: ";
	cin >> tempo;
	tempo1 = tempo/60;
	cout << tempo << " minutos"<< endl;
	
	cout << "Velocidade media do percurso: ";
	cin >> velocidade;
	cout << velocidade << " km/h" << endl;
	
	distancia = tempo1*velocidade;
	litros = distancia/12;
	cout << "vc percoreu "<< distancia <<"km e gatou  "<< litros << "litos de gasolina" << endl;s
	
	system("PAUSE");
	return 0;
	

}
