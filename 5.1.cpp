#include <iostream>
#include <math.h>
using namespace std;
float ObtenhaMontante(float capitalInicial, float taxaJuro, float prazo)
{
	return capitalInicial * pow((1+taxaJuro),prazo);
}
int main()
{
	float montante;
	montante=ObtenhaMontante(10000,0.03,3);
	cout<<"\nMontante= "<<montante;
	return 0;
	
}
