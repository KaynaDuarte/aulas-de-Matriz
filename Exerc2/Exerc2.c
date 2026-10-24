/*
Elabore um algoritmo que leia uma matriz de inteiros com 2 linhas e 4 colunas (matriz[2][4])
e determine quantos de seus elementos são números pares.
*/

#include<stdio.h>
#include<stdlib.h>

int matriz[2][4];

int quantidadedepares = 0;
int result;
int main () {
    for (int c = 0; c < 4; c++) {
        for (int l = 0; l < 2; l++) {
            printf("Matriz [%i]x[%i] = ", l + 1, c + 1);
            scanf("%i", &matriz[l][c]);
        }
    }
    for (int c = 0; c < 4; c++) {
        for (int l = 0; l < 2; l++) {
          if (matriz[l][c] % 2 == 0){
            quantidadedepares++;
          }
        }
    }
    result = quantidadedepares;
    printf("Matriz[2][4] possui %i pares. ", result);
    return 0;
}