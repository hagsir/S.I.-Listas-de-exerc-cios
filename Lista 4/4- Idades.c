#include<stdio.h>
#include<locale.h>
/*
4. Fa�a um algoritmo que permita ao usu�rio informar a idade de quantas pessoas ele
desejar. Ap�s isso, o algoritmo deve informar a soma das pessoas maiores de
idade e a m�dia de idade das pessoas maiores de idade informadas.
*/
int main(){
int idade, soma=0, media=0, i=1;
setlocale(LC_ALL, "Portuguese");

    printf("Digite idades de quantas pessoas voc� desejar.");
    printf("\nQuando estiver satisfeito com a quantidade de idades, aperte 0:\n");
    while(idade != 0){
        scanf("%d", &idade);
            if(idade>=18 && idade!=0){
                soma+=idade;
                media= soma/i;
                i++;
            }
    }
    printf("A soma das idades das pessoas maiores de idade � igual a %d.", soma);
    printf("\nA m�dia de idade das pessoas maiores de idade � igual a %d.", media);
}
