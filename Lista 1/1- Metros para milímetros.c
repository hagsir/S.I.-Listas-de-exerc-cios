#include<stdio.h>
#include<locale.h>

int main(){
    int metros, milimetros;
    setlocale(LC_ALL, "Portuguese");


    printf("Digite um valor em metros para converte-lo em mil�metros: ");
    scanf("%d", &metros);
    system("cls");

    milimetros = metros * 1000;

    printf("O valor %d em metros convertido para mil�metros � igual a %d mil�metros.\n", metros, milimetros);
    getch();
}
