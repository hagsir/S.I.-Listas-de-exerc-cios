#include<stdio.h>
#include<locale.h>
/*
4.Fa�a um programa que receba a idade de 10 pessoas e mostre quantas s�o
maiores que 18 anos.
*/
int main(){
int i=0, idade, MaioresdeIdade=0;
setlocale(LC_ALL, "Portuguese");

    printf("Digite a idade de 10 pessoas para saber quantas s�o maiores de 18:\n");
    while(i<10){
        scanf("%d", &idade);
            if(idade >= 18){
                MaioresdeIdade++;
            }
    i++;
    }
    printf("H� %d pessoas maiores de idade.", MaioresdeIdade);

return 0;
}
