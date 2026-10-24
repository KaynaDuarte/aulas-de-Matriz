/*
Elabore um algoritmo que leia uma matriz de inteiros com 4 linhas e 5 colunas (matriz[4][5]) e calcule,
separadamente, a soma dos elementos de cada uma das colunas.
*/

#include<stdio.h>
#include<stdlib.h>

int matriz[4][5];

int somacoluna[5];

int main () {

    for (int c = 0; c < 5; c++) {
        for (int l = 0; l < 4; l++) {
            printf("Matriz [%i]x[%i] = ", l + 1, c + 1);
            scanf("%i", &matriz[l][c]);
        }
    }
    for (int c = 0; c < 5; c++) {
        for (int l = 0; l < 4; l++) {
            somacoluna[c] += matriz[l][c];
        }
        printf("\nA soma da coluna %i: %i", c, somacoluna[c]);
    }
    
    return 0;
}