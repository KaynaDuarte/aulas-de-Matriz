/*  
Elabore um algoritmo que leia uma matriz de inteiros com 3 linhas e 3 colunas (matriz[3][3]) e calcule a
soma de todos os seus elementos.
*/

#include<stdio.h>
#include<stdlib.h>

int matriz[3][3];
int soma = 0;
int result;

int main () {

    for (int c = 0; c < 3; c++) {
        for (int l = 0; l < 3; l++) {
            printf("Matriz [%i]x[%i] = ", l + 1, c + 1);
            scanf("%i", &matriz[l][c]);
        }
    }
    for (int c = 0; c < 3; c++) {
        for (int l = 0; l < 3; l++) {
            soma += matriz[l][c];
        }
    }
    result = soma;
    printf("O resultado da soma de matriz[3][3] = %i", result);
    
    return 0;
}