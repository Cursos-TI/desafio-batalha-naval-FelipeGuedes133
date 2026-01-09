#include <stdio.h>

// inicio do desafio batalha naval nivel novato

int main() {
    
        // Representacao do tabuleiro 10x10 com arrays bidimensionais
    int tabuleiro[10][10]; 

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // representando os navios com arrays unidimensionais
    
    int navioHorizontal[3] = {3, 3, 3}; // os navio são representados pelo numero 3
    int navioVertical[3]   = {3, 3, 3};

    // primeiras coordenadas no tabuleiro

    int linhaH = 2;
    int colunaH = 3;

    int linhaV = 5;
    int colunaV = 6;

    // validando o limite do tabuleiro para ter certeza que os navios horizontais cabem
    
    if (colunaH + 3 > 10) {
        printf("Erro: Navio horizontal fora dos limites do tabuleiro.\n");
        return 0;
    }

    // Verifica se o navio vertical cabe no tabuleiro

    if (linhaV + 3 > 10) {
        printf("Erro: Navio vertical fora dos limites do tabuleiro.\n");
        return 0;
    }

    // posicioando os navios horizontais 

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // verificando se há alguma sobreposição

    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaV + i][colunaV] == 3) {
            printf("Erro: Os navios estao se sobrepondo.\n");
            return 0;
        }
    }

    // Posicionando os navios verticais

    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // programa exibindo o tabuleiro completo com todos os navios e (0) representando a (agua)

    printf("\nTABULEIRO BATALHA NAVAL\n\n");

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
