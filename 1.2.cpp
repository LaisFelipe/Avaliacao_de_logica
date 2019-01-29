#include <iostream>
#include <string>
using namespace std;
int main()
{
	string sequencia;
	bool op;
	int tam;
	cout<<"\nInforme a sequencia: ";
	cin>>sequencia;
	tam=sequencia.length()-1;
	for(int i=0; i<tam;i++)
	{
		if(sequencia[i]=='(')
			if(sequencia[i+1]==')')
				op= true;
			else
				op= false;
		else if(sequencia[i]=='[')
				if(sequencia[i+1]==']')
					op= true;
				else
					op= false;
		else if(sequencia[i]=='{')
				if(sequencia[i+1]=='}')
					op= true;
				else
					op= false;
	}
	if(op==true)
		cout<<"Correto!";
	else
		cout<<"Incorreto!";
	return 0;
}
