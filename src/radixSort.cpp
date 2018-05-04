
/**
 * @file    	radixSort.h
 * @brief   	Contém a implementação função que ordena o vetor usando a estratégia do radix sort
 * @author  	Samuel Lucas de Moura Ferino
 * @since   	02.10.2017
 * @version		0.0.10
 */

/// BIBLIOTECAS USADAS (STL)

//#include <memory> 	// std::unique_ptr

/// BIBLIOTECAS PRÓPRIAS

#include "radixSort.h"


/**
 * @brief   Ordena o vetor usando a estratégia do radix sort
 * @param   A   Vetor a ser ordenado
 * @param   l   Início do vetor 
 * @param   r   Fim do vetor
 */
void radixsort( unsigned int A[], int l, int r )
{
	/*!	\var	unsigned int maior_elemento	
		\brief	Maior elemento */
	unsigned int maior_elemento = A[0];
	int count, i = 0;
	unsigned int k;

	int ordenacao_comecando_pelas_unidades = 1;

	for(count = l; count < r; ++count )
	{
		if(A[count] > maior_elemento)
		{
			maior_elemento = A[count];
		}	
	}

	unsigned int* array_intermediario = new unsigned int[r-l];

	while(maior_elemento/ordenacao_comecando_pelas_unidades > 0)
	{
		for (k = 0; k < 10; ++k)
		{
			for (count = l; count < r; ++count)
			{
				if(A[count] % 10 == k )
				{	
					array_intermediario[++i] = A[count];
				}	
			}

		}

		for(count = l; count <= r; ++count)
		{
			A[count] = array_intermediario[count];
		}	

		ordenacao_comecando_pelas_unidades *= 10;
	}

	delete[] array_intermediario;
	
}
