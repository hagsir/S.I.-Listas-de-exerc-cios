#include<stdio.h>
#include<locale.h>
/*
6. Escreva um algoritmo que leia um peso na Terra e o n�mero de um planeta e
imprima o valor do seu peso neste planeta. A rela��o de planetas � dada a seguir
juntamente com o valor das gravidades relativas � Terra.
N�mero Gravidade Planeta
1 0,31 Merc�rio
2 0,98 V�nus
3 0,28 Marte
4 2,74 J�piter
5 1,45 Saturno
6 1,27 Urano
Para calcular o peso do planeta use a f�rmula:
Pplaneta = Pterra / 10 * gravidade
*/

int main(){
float peso;
int planeta;
setlocale(LC_ALL, "Portuguese");

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    system("cls");
    printf("Escolha um planeta para saber o seu peso nele:\n");
    printf(" ( 1 ) Merc�rio\n ( 2 ) V�nus\n ( 3 ) Marte\n ( 4 ) J�piter\n ( 5 ) Saturno\n ( 6 ) Urano\n: ");
    scanf("%d", &planeta);

    switch(planeta){
    case 1:
        peso = (peso / 10)*0.31;
        printf("O seu peso em Merc�rio seria de %.1f kg.", peso);
        break;
    case 2:
        peso = (peso / 10)*0.98;
        printf("O seu peso em V�nus seria de %.1f kg.", peso);
        break;
    case 3:
        peso = (peso / 10)*0.28;
        printf("O seu peso em Marte seria de %.1f kg.", peso);
        break;
    case 4:
        peso = (peso / 10)*2.74;
        printf("O seu peso em J�piter seria de %.1f kg.", peso);
        break;
    case 5:
        peso = (peso / 10)*1.45;
        printf("O seu peso em Saturno seria de %.1f kg.", peso);
        break;
    case 6:
        peso = (peso / 10)*1.27;
        printf("O seu peso em Urano seria de %.1f kg.", peso);
        break;
    default:
        printf("Este planeta n�o est� na lista.");
    }
}
