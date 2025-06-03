#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int MOVIMENTO_BISPO = 5; // 5 casas na diagonal superior direita
    int MOVIMENTO_TORRE = 5; // 5 casas para a direita
    int MOVIMENTO_RAINHA = 8; // 8 casas para a esquerda

    printf("=== Simulação de Movimentos no Xadrez ===\n\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // ===== MOVIMENTO DO BISPO =====
    // O bispo se move 5 casas na diagonal superior direita
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");

    for (int i = 1; i <= MOVIMENTO_BISPO; i++) {
        // Diagonal superior direita = combinação de "Cima" e "Direita"
        printf("Movimento %d: ", i);
        printf("Cima\n");
        printf("Movimento %d: ", i);
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // ===== MOVIMENTO DA TORRE =====
    // A torre se move 5 casas para a direita
    printf("Movimento da Torre (5 casas para a direita):\n");

    int contadorTorre = 1;
    while (contadorTorre <= MOVIMENTO_TORRE) {
        printf("Movimento %d: ", contadorTorre);
        printf("Direita\n");
        contadorTorre++;
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // ===== MOVIMENTO DA RAINHA =====
    // A rainha se move 8 casas para a esquerda
    printf("Movimento da Rainha (8 casas para a esquerda):\n");

    int contadorRainha = 1;
    do {
        printf("Movimento %d: ", contadorRainha);
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= MOVIMENTO_RAINHA);

    printf("\n=== Fim da Simulação ===\n");


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
