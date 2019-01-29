#include <iostream>
#include <math.h>
using namespace std;
float ObtenhaMontante(float capitalInicial, float taxaJuro, float prazo)
{
	return capitalInicial * pow((1+taxaJuro),prazo);
}
float ObtenhaJuroTotal(float Montante, float capitalInicial)
{
	return Montante-capitalInicial;
}
int main()
{
	float montante;
	montante=ObtenhaMontante(10000,0.03,3);
	cout<<"\nMontante= "<<montante;
	cout<<"\nJuro= "<<ObtenhaJuroTotal(montante, 10000);
	return 0;
	
}
