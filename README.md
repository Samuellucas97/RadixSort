# Radix Sort

Neste repositório é implementado o algoritmo de ordenação denominado __Radix Sort__ referente à atividade da 1ª unidade da disciplina de _Estrutura de Dados I_ do bacharelado em Tecnologia da Informação (__UFRN__). 


## O que é o Radix Sort?

Em ciência da computação, radix sort é um algoritmo de ordenação que ordena inteiros processando dígitos individuais. Como os inteiros podem representar strings compostas de caracteres (como nomes ou datas) e pontos flutuantes especialmente formatados, radix sort não é limitado somente a inteiros.O objetivo desta árvore é estruturar os dados de forma a permitir busca binária. 
[Wikipedia]


<p align="center">
<img src="https://www.codingeek.com/wp-content/uploads/2017/02/radix.png" width="50%"  />
</p>


[Wikipedia]: https://pt.wikipedia.org/wiki/Radix_sort

## Requisitos mínimos

Compilador C++ 11 (**g++**), GNU debugger (**GDB**) e Doxygen.
	
	Obs.: Para usuários Linux, tanto o g++ quanto o gdb são ambos nativo, faltando apenas instalar o Doxygen.  
	Porém, caso deseje usar o gdb no Windows será necessário instalar o MinGW. 

Download Doxygen (**UBUNTU**):

```$ sudo apt-get install doxygen``` 	

## Etapa de compilação e execução

	Obs.: Todos os códigos digitados no terminal deverão ser na respectiva pasta raiz do programa.  
	Exceto na vizualização da documentação do projeto, não será necessária alterar a pasta.

Depois de clonar o repositório na respectiva pasta local, digite ```make``` para 
realizar a compilação, resultando na criação do arquivo binário(executável) 
denominado ***radix***. Em seguida, digite ```./radix``` para executar o programa.

###  Documentação e exclusão dos objetos e do executável

Caso deseje verificar a documentação, digite ```make doxy```. Diante disso, abra a pasta **html**, depois abra o arquivo chamado **index.html** o qual possui a documentação.  

Além disso, caso deseje fazer o debugger do programa, primeiro digite no terminal ```make debug```, depois digite ```gdb ./radix```.  Ou, se quiser apagar os objetos e o executável, digite ```make clean```.

## Autor

Samuel Lucas de Moura Ferino (_samuel1797@gmail.com_)


