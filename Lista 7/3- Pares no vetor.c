#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define num 10

//Leia um vetor de 10 posi��es. Contar e escrever quantos valores pares ele possui.

int main(){
int v[num], pares=0, i;
setlocale(LC_ALL, "Portuguese");

    printf("Digite 10 n�meros inteiros: ");
    for(i=0; i<num; i++){
        scanf("%d", &v[i]);                   //leitor de 10 n�meros inteiros
            if( v[i]% 2==0){
                pares++;                      //contador de n�meros pares
            }

    }
system("cls");

    if(pares>0){
        printf("H� %d n�meros pares e eles s�o:", pares);       //printf da quantidade de n�meros pares
        for(i=0; i<num; i++){
            if( v[i] % 2==0){
                printf(" %d ", v[i]);                           //printf dos n�meros pares
            }
        }
    }
        else
          printf("N�o h� n�meros pares no vetor.");
}
