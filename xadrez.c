#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Função recursiva para movimentar a Torre
void moverTorre(int casas){
    if(casas > 0){
        printf("\tDireita\n");
        moverTorre(casas - 1);
    }
}

//Função recursiva para movimentar a Rainha
void moverRainha(int casas){
    if(casas > 0 ){
        printf("\tEsquerda\n");
        moverRainha(casas - 1);
    }
}

//Função recursiva para movimentar o Bispo
void moverBispo(int casas){
    int i, j;
    if(casas > 0){
        //Loop externo para o movimento vertical
        for(i = 1; i <= 1; i++){
            //Loop interno para o movimento horizontal
            for(j = 1; j <=1; j++){
                printf("\tCima, Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças Bispo, Torre e Rainha
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Nível Aventureiro - Movimentação do Cavalo
    int casasBaixo = 2;
    int casasEsquerda = 1;

    //Variáveis auxiliares para os contadores
    int i, j;

    // Implementação de Movimentação do Bispo
    // Utilizando estrutura WHILE
    printf("***MOVIMENTO DO BISPO***\n");
    moverBispo(casasBispo);

    printf("\n"); //Pular uma linha por questão estética
    
    // Implementação de Movimentação da Torre
    // Utilizando estrutura FOR
    printf("***MOVIMENTO DA TORRE***\n");
    moverTorre(casasTorre);
    
    printf("\n"); //Pular uma linha por questão estética
    
    // Implementação de Movimentação da Rainha
    // Utilizando estrutura do-while
    printf("***MOVIMENTO DA RAINHA***\n");
    moverRainha(casasRainha);

    printf("\n"); //Pular uma linha por questão estética
    /*
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
    */

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Utilizando loops aninhados, continue e break
    printf("***MOVIMENTO DO CAVALO***\n");
    for(i = 1, j = 1; i <= casasBaixo; i++){
        printf("\tBaixo\n");
        //Loop enquanto não completa o movimento para baixo
        if(i < casasBaixo){
            continue;
        }
        while(j <= casasEsquerda){
            printf("\tEsquerda\n");
            j++;
            //Movimento para esquerda
            if(j > casasEsquerda){
                break;
            }
        }
    }

    return 0;
}