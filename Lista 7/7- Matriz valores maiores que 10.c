#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/
int main(){
int mtz[4][4], i, j, con=0;
setlocale(LC_ALL, "Portuguese");

    printf("Digite 16 n�meros para completar a matriz 4x4: \n");
    for(i=0; i<4; i++){
      for(j=0; j<4; j++){
        scanf("%d", &mtz[i][j]);            //Leitor dos n�meros da matriz
        if(mtz[i][j]>10){
            con++;                          //Contador de n�meros maiores que 10
        }
      }
    }
system("cls");
if(con==0){
    printf("N�o h� n�meros maiores que 10.");       //Caso n�o haja n�meros maiores que 10
    return 0;
}

    printf("H� %d n�meros maiores que 10 e s�o eles:", con);
        for(i=0; i<4; i++)
          for(j=0; j<4; j++)
                if(mtz[i][j]>10)
                    printf(" %d", mtz[i][j]);       //printf dos n�meros maiores que 10
}

