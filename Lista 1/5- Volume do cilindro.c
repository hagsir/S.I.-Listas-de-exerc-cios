#include<stdio.h>
#include<locale.h>

//Fa�a um algoritmo que calcule o volume de um cilindro.

int main(){
float altura, raio, volume;
setlocale(LC_ALL, "Portuguese");

printf("Digite a altura do cil�ndro: ");
scanf("%f", &altura);

printf("Digite o raio do cil�ndro: ");
scanf("%f", &raio);

    volume = raio * raio * altura * 3.14;

    printf("O volume do cil�ndro � %.1f", volume);
    getch();
}
