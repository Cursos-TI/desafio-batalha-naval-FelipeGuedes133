#include <stdio.h>

// inicio do desafio batalha naval nivel novato
// nivel aventureito e novas implementações a partir da linha (65)

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

    // ================= NOVAS IMPLEMENTACOES =================

    // coordenadas iniciais do navio diagonal principal
    // define a posição inicial do navio diagonal que cresce para baixo e para a direita

    int linhaD1 = 0;                                     
    int colunaD1 = 0;                                   

    // validando limite do navio diagonal principal
    // garante que o navio diagonal não ultrapasse os limites do tabuleiro 10x10

    if (linhaD1 + 3 > 10 || colunaD1 + 3 > 10) {         
        printf("Erro: Navio diagonal fora dos limites do tabuleiro.\n");
        return 0;
    }

    // verificando sobreposição do navio diagonal principal
    // verifica se alguma posição diagonal já está ocupada por outro navio

    for (int i = 0; i < 3; i++) {                         
        if (tabuleiro[linhaD1 + i][colunaD1 + i] == 3) {
            printf("Erro: Sobreposicao no navio diagonal.\n");
            return 0;
        }
    }

    // posicionando o navio diagonal principal
    // marca no tabuleiro as posições ocupadas pelo navio diagonal principal

    for (int i = 0; i < 3; i++) {                          
        tabuleiro[linhaD1 + i][colunaD1 + i] = 3;          
    }

    // coordenadas iniciais do navio diagonal secundaria
    // define a posição inicial do navio diagonal que cresce para baixo e para a esquerda

    int linhaD2 = 0;                                     
    int colunaD2 = 9;                                    

    // validando limite do navio diagonal secundaria
    // garante que o navio diagonal secundário não ultrapasse os limites do tabuleiro

    if (linhaD2 + 3 > 10 || colunaD2 - 2 < 0) {
        printf("Erro: Navio diagonal fora dos limites do tabuleiro.\n");
        return 0;
    }

    // verificando sobreposição do navio diagonal secundaria
    // verifica se as posições da diagonal secundária estão livres

    for (int i = 0; i < 3; i++) {                           
        if (tabuleiro[linhaD2 + i][colunaD2 - i] == 3) {    
            printf("Erro: Sobreposicao no navio diagonal.\n");
            return 0;
        }
    }

    // posicionando o navio diagonal secundaria
    // marca no tabuleiro as posições ocupadas pelo navio diagonal secundário
    for (int i = 0; i < 3; i++) {                           
        tabuleiro[linhaD2 + i][colunaD2 - i] = 3;           
    }

    // programa exibindo o tabuleiro completo com todos os navios e (0) representando a (agua)

    printf("\nTABULEIRO BATALHA NAVAL\n\n");

    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }


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
