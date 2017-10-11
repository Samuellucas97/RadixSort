/*
 * @file	main.cpp
 * @brief	Programa principal
 * @author	Samuel Lucas de Moura Ferino
 * @since	02/10/2017
*/

#include <iostream>
#include <array>
#include <chrono>
#include <random>
#include <algorithm>
#include <cstdlib>
//#include "blackbox.h"

#include "radix_sort.h"

using std::cin;
using std::cout;
using std::endl;

/** 
 * @brief	Função que imprime o vetor
 * @param	A array que será impresso seus elementos  
*/
void imprimindo(unsigned int A[], int tamanho)
{
	cout << endl << "== // ===== // ==== // ==== // ===== // ==== // ====" << endl << "Vetor:" << endl;
	
	for(auto i = 0; i != tamanho; ++i)
	{
		cout << " " << A[i] << " ";
	}	
	
	cout << endl << "== // ===== // ==== // ==== // ===== // ==== // ====" << endl;
}

/**
 * @brief	A função inicializa de forma crescente, em seguida, bagunça o array
 * @param	A array que será impresso seus elementos
 * @param	tamanho_array Tamanho do array
*/ 
void inicializando_aleatoriamente(unsigned int A[], int tamanho)
{
	for(int i = 0; i < tamanho; ++i)
	{
		A[i] = rand()%10000 ;
	}

}

/**
 * @brief	A função inicializa de forma crescente
 * @param	A array que será impresso seus elementos
 * @param	tamanho_array Tamanho do array
*/ 
void inicializando_nao_decrescente(unsigned int A[], int tamanho)
{
	for(int i = 0; i < tamanho; ++i)
	{
		A[i] = rand()%i;
	}

}


/**
 * @brief	A função inicializa de forma decrescente
 * @param	A array que será impresso seus elementos
 * @param	tamanho_array Tamanho do array
*/ 
void inicializando_nao_crescente(unsigned int A[], int tamanho)
{
	for(int i = tamanho; i> 0; --i)
	{
		A[i] = rand()%i;
	}

}

 
int main(int argc, char const *argv[])
{
	/** @brief	Quantidades de amostras recebida via linha de comando */
	int quant_amostras = atoi(argv[1]);
	/** @brief Variável que garante o loop da primeira impressão para o usuario */
	//int loop = 1;
	/** @brief	Opção de inicialização do array */
	//int opcao_inicializacao;
	/** @brief	Opção de ordenação do array */
	//int opcao_ordenacao;
	/** @brief	array que será usado */
	unsigned int *vetor = new unsigned int[1600];

	auto lenvetor = quant_amostras;
	int l(0);
    int r(lenvetor-1);

	inicializando_aleatoriamente(vetor, quant_amostras);
	
	
	radixsort(vetor, l, r);
	
	imprimindo(vetor, r);


	delete[] vetor;
	return 0;
}



