#include<stdio.h>
#include<locale.h>

//Uma empresa contrata um encanador a R$ 20,00 por dia. Crie um algoritmo que solicite o
//n�mero de dias trabalhados pelo encanador e imprima o valor l�quido a ser pago, sabendo
//que s�o descontados 8% de imposto de renda.

int main(){
float valor;
int dias;
setlocale(LC_ALL, "Portuguese");

    printf("Digite o n�mero de dias trabalhados pelo encanador: ");
    scanf("%d", &dias);

    valor = ( dias * 20 ) - (( dias * 20) * 0.08 );

    printf("O valor l�quido a ser pago � de %.2f R$ com 8%% de juros descontados.\n" , valor);
    getch();
}
