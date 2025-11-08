#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void bispo(int casas){
    for (int i = 0; i < casas; i++){
        for (int j = 0; j < 1; j++){
            printf(" Diagonal Cima, Direita \n");
        }

    }
}

void torre(int casas){
    if (casas > 0){
        printf(" Direita \n");
        torre(casas - 1);
    }
}

void rainha(int casas){
    if (casas > 0){
        printf(" Esquerda \n");
        rainha(casas - 1);
    }
}

void cavalo(int casas){
    for (int i = 0; i < 1; i++){     
        for (int cima = 0; cima < 3; cima++){
            if (cima == 2){
                break;
            }
            printf(" Cima \n");
        }
    for (int direita = 0; direita < 2; direita++){
            if(direita == 1){
                printf(" Direita \n");
                continue;
            }
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    int casasBispo = 5;

    printf("Movimento do Bispo (5 casas na diagonal superior direita): \n"); // diz qual é o movimento da peça do Bispo
        bispo(casasBispo);
   

        printf("\n"); // comando para pular linha

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimento da Torre (5 casas para a direita): \n"); // diz qual é o movimento da peça da Torre
        torre(5);

        printf("\n"); // comando para pular linha

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Movimento da Rainha (8 casas para a esquerda): \n"); // diz o movimento da peça da Rainha
        rainha(8);
    
        printf("\n"); // comando para pular linha

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int casasCavalo = 1;    

    printf("Movimento do Cavalo (2 casa para baixo e 1 casa para esquerda): \n"); // diz o movimento da peça do Cavalo
        cavalo(casasCavalo);

        printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
