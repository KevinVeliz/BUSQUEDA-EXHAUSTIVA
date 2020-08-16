#include <iostream>

bool primo(unsigned int numero);
using namespace std;


int main()
{
	unsigned int numero;
	cout<<"Ingrese un numero: ";
  cin>>numero;
	primo(numero)==true ? cout<<"\nEl numero es primo" : cout<<"\nEl numero no es primo";
	return 0;
}


bool primo(unsigned int numero)
{

bool primo;

if(numero!=1)
{
primo=1;
for (int contador=numero-1; contador>1; contador--)
	{
    if ((numero%contador)==0)
		primo=0;
  }	
}
	else primo=0;
return primo;
}