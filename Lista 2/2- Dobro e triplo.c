#include<stdio.h>
#include<locale.h>

//Programa que dobra n�meros positivos e triplica n�meros negativos.

int main(){
int num;
setlocale(LC_ALL, "Portuguese");

    printf("Digite um n�mero qualquer positivo ou negativo: ");
    scanf("%d", &num);

    if(num>0){
        num*=2;
        printf("O n�mero duplicado � igual a %d.", num);
    }
        else{
            num*=3;
            printf("O n�mero triplicado � igual a %d.", num);
        }
getch();
}
