#include<stdio.h>
#include<locale.h>
#include<windows.h>
#define num 10
/*
Fa�a um programa que leia um vetor de 10 posi��es e verifique se existem valores
iguais e os escreva na tela.
*/
int main(){
int v[num], same, i, j;
setlocale(LC_ALL, "Portuguese");

    printf("Escreva 10 n�meros: ");
        for(i=0; i<num; i++){
            scanf("%d", &v[i]);     //Leitor dos 10 n�meros
        }
    for(i=0 ; i<num; i++){
        for(j=0 ; j<num; j++){
            if(v[i]==v[j] && i!=j){     //Contador de n�meros iguais
                same++;
            }
        }
    }
if(same==0){
    printf("\nN�o existem valores iguais no vetor.");   //Caso n�o haja n�meros iguais
    return 0;
}

    printf("\nH� %d valores que s�o iguais e eles s�o:", same);
        for(i=0 ; i<num; i++){
            for(j=0 ; j<num; j++){                  //Printf dos n�meros iguais
                if(v[i]==v[j] && i!=j){
                    printf(" %d", v[i]);
                }
            }
        }




}
