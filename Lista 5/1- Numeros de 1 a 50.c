#include<stdio.h>
#include<locale.h>
/*
1.Escrever um programa para exibir os n�meros de 1 at� 50 na tela.
*/
int main(){
setlocale(LC_ALL, "Portuguese");
    printf("N�meros de 1 a 50: ");
    for(int i=0; i<50; i++){
        printf("%d ", i+1);
    }
}
