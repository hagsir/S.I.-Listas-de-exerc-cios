#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
Leia uma matriz 5 x 3, imprima a matriz e retorne a localiza��o (linha e a coluna) do
maior valor.
*/
int main(){
int mtz[5][3], i, j, linha=0, coluna=0;
setlocale(LC_ALL, "Portuguese");
mtz[linha][coluna]=0;

    printf("Escreva 15 n�meros para completar a matriz 5x3:\n");
    for(i=0; i<5; i++){
        for(j=0; j<3; j++){                              //Leitor dos 15 n�meros
            scanf("%d", &mtz[i][j]);
                if(mtz[i][j]>mtz[linha][coluna]){
                    linha = i;                           //Leitor da linha e coluna do maior n�mero
                    coluna = j;
                }
        }
    }
system("cls");

printf("A matriz 5x3:");
    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            printf(" %d", mtz[i][j]);                   //Printf dos n�meros da matriz
        }
    }
                                     //Printf do maior n�mero
printf("\nO maior n�mero da matriz est� na localiza��o %dx%d e tem o valor de %d.", linha+1, coluna+1, mtz[linha][coluna]);


}


