#include <stdio.h>
#include <stdlib.h>

#include "ag.h"

/*
 * Este arquivo - "principal.c" - contem a implementacao da entrada de dados (com menu).
 *
 *
 * Autor:
 *  - Andre Hermenegildo Costa Silva
 *
 * Data: 20/07/2014
 *
 *
 */

 
/*
 * No procedimento menu() abaixo que esta implementada a entrada de dados simples, onde:
 *  - mostra o nome de cada uma das funcoes do benchmark;
 *  - o usuario define qual funcao otimizar e parametros do algoritmo genetico.
 */
void menu(){

    int funcao = 0;
    int total_individuos = 0;
    int descarte = 0;
    int geracoes = 0;
    float prob_mutacao = 0.0;

    printf("\n\nAlgoritmos Geneticos\n");
    printf("========== =========\n\n");
    printf("1) De Jongs\n");
    printf("2) Rastrigin\n");
    printf("3) DropWave\n");
    printf("4) Griegwangk\n");
    printf("5) Shubert\n\n");
    
    printf("Selecione a funcao a minimizar : ");
    scanf("%d",&funcao);
    if (funcao < 1 || funcao > 5){
        printf("\nOpcao Invalida! Opcoes possiveis: 1-5 !!!\n");
        return;
    }
    
    printf("Total de individuos da populacao : ");
    scanf("%d",&total_individuos);
    if (total_individuos < 1){
        printf("\nErro! O tamanho da populacao deve ser maior do que zero !!!\n");
        return;
    }
    
    printf("Total de descendentes a descartar : ");
    scanf("%d",&descarte);
    if (descarte < 1){
        printf("\nErro! O total de descendentes a descartar deve ser maior do que zero !!!\n");
        return;
    }
    
    printf("Total de geracoes a evoluir : ");
    scanf("%d",&geracoes);
    if (geracoes < 1){
        printf("\nErro! O total de geracoes a evoluir deve ser maior do que zero !!!\n");
        return;
    }
    
    printf("Probabilidade de mutacao : ");
    scanf("%f",&prob_mutacao);
    if (prob_mutacao < 0 || prob_mutacao > 1){
        printf("\nErro! A probabilidade de mutacao deve estar no intervalo entre 0 e 1 !!!\n");
        return;
    }

    executar(funcao, total_individuos, descarte, geracoes, prob_mutacao);

}

// ******************* MAIN ************************
int main(){
    
    int op = 1;
    
    do{
        menu();
        printf("\nTecle:\n- 0 (Zero) para FINALIZAR;\n- qualquer digito (1-9) para Continuar:\n");
        scanf("%d",&op);
    } while (op != 0);

    return 0;
}