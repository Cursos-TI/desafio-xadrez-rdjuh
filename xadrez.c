#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Declaração das variávveis para quantidade de casas que uma peça irá se movimentar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int i = 1; //Variável auxiliar dos contadores, setada em 1 para evitar presença de lixo do buffer

    // Implementação de Movimentação do Bispo
    // Utilizando estrutura WHILE
    printf("***MOVIMENTO DO BISPO***\n");
    while(i <= casasBispo){//Condicional
        printf("Cima, Direita\n");//Movimento
        i++;//Incremento
    }

    // Implementação de Movimentação da Torre
    // Utilizando estrutura FOR
    printf("***MOVIMENTO DA TORRE***\n");
    for(i = 1; i <= casasTorre; i++){//Início do contador, condicional e incremento
        printf("Direita\n");//Movimento
    }

    i = 1; // Ajuste da variável dos contadores

    // Implementação de Movimentação da Rainha
    // Utilizando estrutura do-while
    printf("***MOVIMENTO DA RAINHA***\n");
    do{
        printf("Esquerda\n");
        i++;
    }while(i <= casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
