#include <stdio.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
    int main(){  
    // Nível Novato - Movimentação das Peças
    // Declarando variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;


    // Implementação de Movimentação do Bispo
    // Usando 'WHILE' para simular a movimentação do BISPO (5 vezes).
    printf("BISPO: %d casas: \n", casasBispo);
    int i = 1;
    while (i <= casasBispo){
        printf("Passo %d: CIMA DIREITA\n", i);
        i++;
    }   
        printf("\n"); 
    // Implementação de Movimentação da Torre
    // Usando 'FOR' para simular a movimentação TORRE (5 vezes).
    printf("TORRE: %d casas: \n", casasTorre);
    for (int j = 1; j <= casasTorre; j++){
        printf("Passo %d: FRENTE\n", j);
    }  
        printf("\n");

    // Implementação de Movimentação da Rainha
    // Foi utilizada a estrutura de repetição DO-WHILE para simular a movimentação da Rainha para a esquerda (8vezes).
    printf("RAINHA: %d casas: \n", casasRainha);
    int k = 1;
    do{
        printf("Passo %d: ESQUERDA\n", k);
        k++;
    }while (k <= casasRainha);
        printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Usando loops aninhados para simular a movimentação do Cavalo em L.
    
    int movimentoCompleto = 1; //variavel para a movimetação do cavalo em 'L' (Desafio Aventureiro).

    while (movimentoCompleto--)
    printf("CAVALO: 3 casas em 'L'\n");
    {
        for (int i = 0; i < 2; i++){
            printf("Passo 1: CIMA\n"); 
        }
        printf("Passo 1: ESQUERDA\n");
        printf("\n");
    }


    
    return 0;
}

  
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  
