#include <stdio.h>

void text(float sfixo, float stotal){
    printf("Salário líquido informado: R$:%.2f ",sfixo);
    printf("\nSalário a receber: R$:%.2f",stotal);
} 

int main() {
    float sfixo, stotal, porcentagem;

    porcentagem = 7.5/100;

    printf("***** EMPRESA BLUE SOFTWARE *****\nFuncionário: João Marcelo Deus \nRA: 20166620-5");
    printf("\nInforme o valor do seu salário fixo, no ultimo holerite: ");
    scanf("%f", &sfixo);

    stotal = (porcentagem*sfixo)+sfixo;

    if (stotal <= 1750) {
        stotal = stotal + 150;
        text(sfixo, stotal);
    }
    else{
        text(sfixo, stotal);
    }
}