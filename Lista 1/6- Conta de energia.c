#include<stdio.h>
#include<locale.h>

/*Um cliente gostaria de saber o quanto de seu sal�rio � destinado ao pagamento da conta de
energia el�trica. Sabendo que a tarifa � R$ 0,78 por kWh, fa�a um algoritmo que receba o
sal�rio do cliente e seu consumo (em kWh), e imprima qual a porcentagem do sal�rio do
cliente deve ser destinado para pagamento da conta de energia el�trica.*/

int main(){
setlocale(LC_ALL, "Portuguese");
float salario, kwh, valor;

printf("Digite o seu sal�rio: ");
    scanf("%f", &salario);
printf("Digite o consumo de energia em kWh: ");
    scanf("%f", &kwh);

    valor = ((kwh * 0.78) * 100) / salario;

    printf("A porcentagem do seu sal�rio destinado a conta de energia � de %.1f%%.", valor);
    getch();
}

