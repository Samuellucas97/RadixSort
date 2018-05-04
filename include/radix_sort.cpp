#include "radix_sort.h"
#include <memory>
#include <iostream>

void radixsort( unsigned int A[], int l, int r )
{
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
