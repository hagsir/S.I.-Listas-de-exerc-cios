#include<stdio.h>
#include<locale.h>
/*
8. Fa�a um algoritmo que l� um valor N inteiro e positivo e que calcula e escreve o
fatorial de N (N!).
*/
main(){
int num, result=1, i;
setlocale(LC_ALL, "Portuguese");

    printf("Insira um n�mero para fatorar: ");
	scanf("%d", &num);
	for(i = 1; i <= num; i++){
		result *= i;
	}
	printf("O fatorial de %d �: %d", num, result);
}
