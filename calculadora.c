#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int op, resposta;
    float numberOne, numberTwo, result;
    
    printf("**********  Calculadora **********\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    
    resposta = 1;

    while (resposta == 1)
    {
        printf("Informe a operação desejada: \n1 para soma \n2 para divisão \n3 para multiplicação \n4 para divisão\n");
        scanf("%i", &op);
    
        printf("Informe o primeiro valor: ");
        scanf("%f",&numberOne);

        printf("Informe o segundo valor: ");
        scanf("%f", &numberTwo);
    
        if (op == 1){
            result = numberOne+numberTwo;
            printf("\n %.2f",result);
        }
        if (op == 2){
            result = numberOne-numberTwo;
            printf("\n %.2f",result);
        }
        if (op == 3){
            result = numberOne*numberTwo;
            printf("\n %.2f",result);
        }
        if (op == 4){
            result = numberOne/numberTwo;
            printf("\n %.2f",result);
        }
        printf("\n Para continuar digite 1, para encerrar digite 2: ");
        scanf("%i",&resposta);
    }    

   
   
    return (0);
}  
