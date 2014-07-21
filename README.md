##Algoritmo Genético em C
====================

Implementação, na linguagem C, de um algoritmo genético capaz de buscar o ponto de mínimo em funções de duas variáveis.

Os parametros a serem definidos pelo usuario sao empíricos, isto é, deve-se realizar diversos experimentos alternando/alterando os valores dos parâmetros a fim de encontrar um conjunto deles que otimize (minimize) determinada função.

Uma sugestão para os parâmetros de entrada seria:
    - Total de individuos da populacao: 1000
    - Total de desecendentes a descartar: 100
    - Total de geracoes a evoluir: ? (realizar experimentos, entre [10,100] por exemplo. 
    - Probabilidade de mutação: 0.1

É apenas uma sugestão, não se limite somente à ela. Realize outros experimentos.

##Comandos para compilar

NO WINDOWS: `>> gcc principal.c funcoes_benchmark.c gerador_numeros.c ag.c -o saida`

NO LINUX: `>> gcc principal.c funcoes_benchmark.c gerador_numeros.c ag.c -o saida -lm`
