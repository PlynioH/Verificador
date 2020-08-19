#include <iostream>

int main()
{
	int invet[10], vet[10], i, j, re[10], r = 1;
	
	//std::cout << para mostrar algo para o usuário 
	//std::cin >> para armazenar variavéis
	
	std::cout << "Esse software verifica se existem numeros iguais nas mesmas posicoes do vetor\n\n";
	
	while(r == 1)
	{	
		int cont = 0;
		
		for(i=0;i<10;i++)
		{
			std::cout << "Digite um Numero: ";
			std::cin >> vet[i];
		}
	
		for(j=9, i=0;j>=0, i<10;j--, i++)
		{
			invet[j] = vet[i];
		}
	
		std::cout << "\nVetor i\n";
	
		for(i=0;i<10;i++)
		{
			std::cout << vet[i] << " ";
		}
	
		std::cout << "\n\nVetor j\n";
	
		for(j=0;j<10;j++)
		{
			std::cout << invet[j] << " ";
		}
	
		for(j=0, i=0;j<10, i<10;j++, i++)
		{
			if(invet[j] == vet[i])
			{
				re[i] = j;
				cont++;
			}
			else
			{
				re[i] = -1;
			}
		}
	
		if(cont==0)
		{
			std::cout << "\n\nAs posicoes dos Numeros sao diferentes!!!\n";
		}
		else if(cont>=1)
		{
			std::cout << "\n\nOs Numeros repitidos se encontram nas posicoes\n";
		}

		for(i=0;i<10;i++)
		{
			if(re[i]>=0)
			{
				std::cout << re[i]+1 << " ";
			}
		}
		
		std::cout << "\n\nDeseja fazer uma nova verificacao ?\n1 - Sim\n2 - Nao\n";
		std::cin >> r;
		std::cout << "\n";
		
	}
	
	return 0;
}
