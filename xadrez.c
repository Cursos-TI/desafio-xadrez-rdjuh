#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças Bispo, Torre e Rainha
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Nível Aventureiro - Movimentação do Cavalo
    int casasBaixo = 2;
    int casasEsquerda = 1;

    //Variáveis auxiliares para os contadores
    int i = 1;
    int j = 1;

    // Implementação de Movimentação do Bispo
    // Utilizando estrutura WHILE
    printf("***MOVIMENTO DO BISPO***\n");
    while(i <= casasBispo){//Condicional
        printf("\tCima, Direita\n");//Movimento
        i++;//Incremento
    }

    printf("\n"); //Pular uma linha por questão estética
    
    // Implementação de Movimentação da Torre
    // Utilizando estrutura FOR
    printf("***MOVIMENTO DA TORRE***\n");
    for(i = 1; i <= casasTorre; i++){//Início do contador, condicional e incremento
        printf("\tDireita\n");//Movimento
    }
    
    printf("\n"); //Pular uma linha por questão estética
    
    i = 1; // Ajuste da variável dos contadores
    
    // Implementação de Movimentação da Rainha
    // Utilizando estrutura do-while
    printf("***MOVIMENTO DA RAINHA***\n");
    do{
        printf("\tEsquerda\n");//Movimento
        i++;//Incremento
    }while(i <= casasRainha);//Condicional

    printf("\n"); //Pular uma linha por questão estética

    // Nível Aventureiro - Movimentação do Cavalo
    // Aninhamento de estrutura WHILE em estrutura FOR
    printf("***MOVIMENTO DO CAVALO***\n");
    for(i = 1; i <= casasBaixo; i++){//Início do contador, condicional e incremento
        printf("\tBaixo\n");//Primeiro movimento
        if(i == casasBaixo){//Condicional para o movimento seguinte ao atingir o limite do primeiro movimento
            while(j <= casasEsquerda){//Condicional
                printf("\tEsquerda\n");//Movimento
                j++;//Incremento
            }
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    return 0;
}