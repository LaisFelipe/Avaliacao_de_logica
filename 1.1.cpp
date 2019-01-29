#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL,"");
	int linha,tam, valor, menor=100000000, soma=0;
	cout<<"\nQuantas linhas de números tem a sua piramide? ";
	cin>>linha;
	cout<<"\nQuantos números tem a sua piramide? ";
	cin>>tam;
	tam=tam+linha-1;
	string piramide[tam];
	cout<<"\nInforme os números da piramide, começando do topo, separando cada linha com '-'(obs: dê enter após cada caracter).\n";
	for(int i=0;i<tam;i++)
	{
		cin>>piramide[i];
		if(piramide[i]!="-")
		{
			valor= stoi(piramide[i]);
			if(valor<menor)
			{
				menor=valor;
			}
		}
		else
		{
			soma=soma+menor;
			menor=100000000;
		}
	}
	soma=soma+menor;
	cout<<"\n"<<soma<<endl;
	return 0;
}
