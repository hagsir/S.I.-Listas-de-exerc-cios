#include<stdio.h>
#include<locale.h>
#include<windows.h>
/*
5. Uma loja deseja fazer a avalia��o com base na opini�o de seus clientes. Para isto,
ela ir� disponibilizar um computador que ir� perguntar a cada cliente a sua idade e
a nota que ele avalia a loja. Voc� dever� elaborar o programa de computador que
far� a leitura da opini�o dos 100 primeiros clientes e dever� informar os dados
solicitados abaixo:
Notas Informa��es
A - �timo       1. A quantidade de respostas A (�timo);
B - Bom         2. A m�dia de idade das pessoas que responderam D (Ruim);
C - Regular     3. A percentagem de respostas E (P�ssimo) e a menor idade de quem informou esta resposta;
D - Ruim        4. A maior idade de quem respondeu A (�timo) e a maior idade de quem respondeu D (Ruim);
E - P�ssimo
*/
int main(){
int i=0, idade=0, somaD=0, maioridadeA=0, maioridadeD=0, menoridadeE=0;
int A=0, D=0, E=0;
float mediaD, percentagemE;
char nota;
setlocale(LC_ALL, "Portuguese");

    printf("Avalia��o da Loja.\nNotas:\nA - �timo\nB - Bom\nC - Regular\nD - Ruim\nE - P�ssimo\n");
    while(i<100){
        printf("\nVoc� � o %d� cliente, agora digite a sua nota: ", i+1);
        scanf("%s", &nota);
        printf("Agora digite a sua idade: ");
        scanf("%d", &idade);

            if(nota == 'a' || nota == 'A'){
                A++;
                if(idade>maioridadeA){
                    maioridadeA=idade;
                }
            }
            if(nota == 'd' || nota == 'D'){
                D++;
                somaD += idade;
                mediaD = somaD / D;
                    if(idade>maioridadeD){
                        maioridadeD=idade;
                    }
            }
            if(nota == 'e' || nota == 'E'){
                E++;
            }
        i++;
    }
    percentagemE = (E * 100) / i;

    system("cls");
    printf("\nA quantidade de respostas A foi %d.", A);
    printf("\nA m�dia de idade das pessoas que responderam D � %.1f.", mediaD);
    printf("\nA percentagem de respostas E foi %.1f%% e a menor idade de quem informou esta resposta foi %d anos.", percentagemE, menoridadeE);
    printf("\nA maior idade de quem respondeu A foi %d anos e a maior idade de quem respondeu D foi %d.", maioridadeA, maioridadeD);
return 0;
}

