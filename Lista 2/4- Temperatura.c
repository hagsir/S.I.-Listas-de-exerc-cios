#include<stdio.h>
#include<locale.h>

/*
Fa�a um algoritmo para ler a temperatura atual e conforme leitura, imprimir o resultado de
acordo com a tabela
at� 15�         Muito frio
de 16� a 23�    Frio
de 23� a 26�    Agrad�vel
de 26� a 30�    Calor
acima de 31�    Muito quente
*/

int main(){
float temp;
setlocale(LC_ALL, "Portuguese");

    printf("Digite a temperatura atual: ");
    scanf("%f", &temp);

    if(temp > 31)
        printf("A temperatura atual est� muito quente.");
         else if(temp > 26)
            printf("A temperatura atual est� quente.");
             else if(temp > 23)
                printf("A temperatura atual est� agrad�vel.");
                 else if(temp > 15)
                    printf("A temperatura atual est� fria.");
                     else
                      printf("A tempertatura atual est� muito fria.");
getch();
}
