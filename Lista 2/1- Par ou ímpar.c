#include<stdio.h>
#include<locale.h>

//Programa que diz se o n�mero � �mpar ou par.

int main(){
int num;
setlocale(LC_ALL, "Portuguese");

printf("Escreva um n�mero inteiro qualquer: ");
    scanf("%d", &num);

    if(num % 2==0){
        printf("O n�mero %d � par.", num);
    }
        else{
            printf("O n�mero %d � �mpar.", num);
        }
getch();
}
