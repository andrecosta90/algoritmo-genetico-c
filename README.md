## Algoritmo Genético em C

Implementação, na linguagem C, de um algoritmo genético (Genetic Algorithm) capaz de buscar o ponto de mínimo em funções de duas variáveis.

Os (hiper)parâmetros a serem definidos pelo usuário sao empíricos, isto é, deve-se realizar diversos experimentos alternando/alterando os valores dos parâmetros a fim de encontrar um conjunto deles que otimize (minimize) determinada função. 

A descrição detalhada das funções de benchmark implementadas neste código podem ser encontradas [aqui](https://www.sfu.ca/~ssurjano/optimization.html).


## Comandos

Compilar via `make`

Executar via `./saida.out`


## Sugestões de hiperparâmetros de entrada:
    + Total de individuos da populacao: 1000
    + Total de desecendentes a descartar: 100
    + Total de geracoes a evoluir: 100
    + Probabilidade de mutação: 0.1
