/*
Elabore um algoritmo que leia uma matriz de inteiros com 2 linhas e 2 colunas (matriz[2][2]),
identifique o maior valor armazenado e informe em que posição ele se encontra.
*/

#include<stdio.h>
#include<stdlib.h>

int matriz[2][2];

int maior;
int maiorlinha = 0;
int maiorcoluna = 0;


int main () {
    for (int c = 0; c < 2; c++) {
        for (int l = 0; l < 2; l++) {
            printf("Matriz [%i]x[%i] = ", l + 1, c + 1);
            scanf("%i", &matriz[l][c]);
        }
    }
    maior = matriz[0][0];
    for (int c = 0; c < 2; c++) {
        for (int l = 0; l < 2; l++) {
            if (matriz[l][c] > maior) {
                maior = matriz[l][c];
                maiorlinha = l;
                maiorcoluna = c;
            }
        }
    }

    printf("Maior valor: %i\nLinha: %i\nColuna: %i", maior, maiorlinha, maiorcoluna);
    return 0;
}