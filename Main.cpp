// ExDeSexta9.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <bitset>

unsigned long long result = 0;

void calc(unsigned long long num1, unsigned long long num2, char op)
{
	switch (op)
	{
	case '+':
	     result = num1 + num2;
		 break;
	case '*':
		 result = num1 * num2;
		 break;
	case '-':
		 result = num1 - num2;
		 break;
	case '/':
		 result = num1 / num2;
		 break;
	case '%':
		 result = num1 % num2;
		 break;
	default:
		break;
	}
}

int main()
{
	int loop = 1;
	
	unsigned long long aux = 0;

	char caux;

	std::vector<unsigned long long> arr;

	std::vector<char> ops;
	
	std::cin >> loop;

	do
	{
		std::cin >> aux;

		arr.push_back(aux);

		if (loop - 1 == 0)
			break;

		std::cin >> caux;

		ops.push_back(caux);

		loop--;
	}
	while (loop > 0);

	for (int i = 0; i < ops.size(); i++)
	{
		calc(arr.at(i), arr.at(i + 1), ops.at(i));
		arr.at(i + 1) = result;
	}


	std::cout << "Result: ";
    std::cout << result << std::endl; 
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
