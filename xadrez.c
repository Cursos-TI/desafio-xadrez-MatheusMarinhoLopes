#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    int bispo = 0; // variável da peça Bispo

    printf("Movimento do Bispo (5 casas na diagonal superior direita): \n"); // diz qual é o movimento da peça do Bispo

    while (bispo < 5){
        printf(" Diagonal Superior Direita \n"); // imprime a direção do movimento do Bispo para diagonal superior direita
        bispo++;
    }
        printf("\n"); // comando para pular linha

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimento da Torre (5 casas para a direita): \n"); // diz qual é o movimento da peça da Torre

    for (int torre = 0; torre < 5; torre++){  // a variável Torre está aqui dentro
        printf(" Direita \n");  // imprime a direção do movimento da Torre para direita
    }
        printf("\n"); // comando para pular linha

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    int rainha = 0; // variável da peça Rainha

    printf("Movimento da Rainha (8 casas para a esquerda): \n"); // diz o movimento da peça da Rainha

    do {
        printf(" Esquerda \n"); // imprime a direção do movimento da Rainha para esquerda
        rainha++;
    } while (rainha < 8);

        printf("\n"); // comando para pular linha

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
