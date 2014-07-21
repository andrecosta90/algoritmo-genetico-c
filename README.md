##Algoritmo Genético em C

Implementação, na linguagem C, de um algoritmo genético capaz de buscar o ponto de mínimo em funções de duas variáveis.

Os parametros a serem definidos pelo usuario sao empíricos, isto é, deve-se realizar diversos experimentos alternando/alterando os valores dos parâmetros a fim de encontrar um conjunto deles que otimize (minimize) determinada função.


##Compilar

Linux: `>> gcc principal.c funcoes_benchmark.c gerador_numeros.c ag.c -o saida -lm`

Windows: `>> gcc principal.c funcoes_benchmark.c gerador_numeros.c ag.c -o saida`


##Executar

Linux: `>> ./saida`

Windows: `>> saida.exe`


###Sugestões de entrada:

    * Total de individuos da populacao: 1000
    * Total de desecendentes a descartar: 100
    * Total de geracoes a evoluir: ? (realizar experimentos, entre [10,100] por exemplo)
    * Probabilidade de mutação: 0.1
