#include <math.h>
#define PI 3.14159265359

/*
 * Este arquivo - "funcoes_bechmark.c" - contem a implementacao das funcoes do benchmark.
 *
 *
 * Para cada funcao de benchmark, temos a implementacao de duas funcoes computacionais:
 *  i) uma funcao (em C) que retorna um valor de uma determinada funcao de benchmark, dados x1 e x2;
 *  ii) uma funcao (em C) que "retorna" o limite dos valores de dominio (utilizando passagem de parametro por referencia).
 *
 * Autor:
 *  - Andre Hermenegildo Costa Silva
 *
 * Data: 20/07/2014
 *
 *
 */

// **************** FUNCOES (em C) QUE RETORNAM VALOR DE UMA ESPECIFICA FUNCAO DE BENCHMARK, DADO x1 e x2 ****************

/*
 * Retorna um valor (do tipo float) referente a funcao DE JONGS, dado duas entrada, x1 e x2(tambem do tipo float);
 */
float de_jongs(float x1, float x2){
    return pow(x1,2.0) + pow(x2,2.0);
}

/*
 * Retorna um valor (do tipo float) referente a funcao RASTRIGIN, dado duas entrada, x1 e x2(tambem do tipo float)
 */
float rastrigin(float x1, float x2){
    return 20 + (pow(x1,2.0) - (10.0 * cos(2.0*PI*x1))) + (pow(x2,2.0) - (10.0 * cos(2.0*PI*x2)));
}

/*
 * Retorna um valor (do tipo float) referente a funcao DROP WAVE, dado duas entrada, x1 e x2(tambem do tipo float)
 */
float drop_wave(float x1, float x2){
    float valor = de_jongs(x1,x2);
    //float part1 = 1.0 + cos(12.0 * sqrt(valor));
    //float part2 = (0.5 * valor) + 2.0;
    //return - (part1/part2);
    
    return -((1.0 + cos(12.0 * sqrt(valor)))/((0.5 * valor) + 2.0));
}

/*
 * Retorna um valor (do tipo float) referente a funcao GRIEWANGK, dado duas entrada, x1 e x2(tambem do tipo float)
 */
float griewangk(float x1, float x2){
    float valor = de_jongs(x1,x2);
    //float part1 = valor/4000.0;
    //float part2 = (cos(x1) * cos(x2/sqrt(2)));
    
    //return part1 - part2 + 1;
    return (valor/4000.0) - (cos(x1) * cos(x2/sqrt(2))) + 1;
}

/*
 * Retorna um valor (do tipo float) referente a funcao SHUBERT, dado duas entrada, x1 e x2(tambem do tipo float)
 */
float shubert(float x1, float x2){
    float sum1 = 0.0;
    float sum2 = 0.0;
    
    int i;
    for(i = 1; i <= 5; i++){
        sum1 += (i * cos((i + 1.0) * x1 + i));
        sum2 += (i * cos((i + 1.0) * x2 + i));
    }
    
    return sum1*sum2;
    
}

// **************** **************************************** ****************

// **************** FUNCOES (em C) QUE RETORNAM O LIMITE DOS VALORES DE DOMÍNIO DE UMA ESPECIFICA FUNCAO DE BENCHMARK, DADO x1 e x2 ****************
/*
 * As funcoes a seguir nao retornam nada (void = vazio). 
 *
 * Para que o limite dos valores de dominio sejam "retornados" a uma outra funcao que a chama, 
 * utiliza-se nestas funcoes passagem de parametro por referencia.
 *
 * Ou seja, elas recebem um vetor de float "d" de tamanho 2 e este eh modificado com os valores de dominio referente a uma funcao de benchmark
 * especifica.
 * Logo, a funcao externa que a chama tera acesso a tais valores de dominio modificados.
 *
 */
 
/*
 * Implementacao da funcao que informa os valores de dominio referente a funcao de benchmark DE JONGS
 */
void d_de_jongs(float d[]){
    d[0] = -5.12;
    d[1] = 5.12;   
}

/*
 * Implementacao da funcao que informa os valores de dominio referente a funcao de benchmark RASTRIGIN
 */
void d_rastrigin(float d[]){
    d[0] = -2.0;
    d[1] = 2.0;
}

/*
 * Implementacao da funcao que informa os valores de dominio referente a funcao de benchmark DROP WAVE
 */
void d_drop_wave(float d[]){
    d[0] = -2.0;
    d[1] = 2.0;
}

/*
 * Implementacao da funcao que informa os valores de dominio referente a funcao de benchmark GRIEWANGK
 */
void d_griewangk(float d[]){
    d[0] = -4.0;
    d[1] = 4.0;
}

/*
 * Implementacao da funcao que informa os valores de dominio referente a funcao de benchmark SHUBERT
 */
void d_shubert(float d[]){
    d[0] = -3.0;
    d[1] = 3.0;
}

// **************** **************************************** ****************