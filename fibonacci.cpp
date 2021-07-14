#include <iostream>
using namespace std;
int main (int argc, char** argv){
	
	cout << "A sequencia de fibonacci e': \n";
	

    int num,i,atual=1,ante=1, prox=0;
    float total=0;
    while(num<=0)
    {
        cout<<"Digite a qtde de termos maior que 0: ";
        cin>> num;
    }
    for(i=0;i<num;i++)
    {
        if(i==0)
        {
            cout << "0, ";
        }else if(i==1 || i==2)
        {
            cout << "1, ";
            total=total+1;
        }else
        {
            prox=ante+atual;
            ante=atual;
            atual=prox;
            printf("%i, ",prox);
            total=total+atual;
        }
    }
    cout <<"\nA media eh: ", total/i;
	system("PAUSE");
	return 0;
}
