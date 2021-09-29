#include <stdio.h>
#include <stdlib.h>

void print(char name[], int age, float monthyPay){
    printf("Your name is: %s\n", name);
    printf("Your age is: %i\n",age);
    printf("Your monthly fee is R$:%.2f\n",monthyPay);
}

int main (){
    /* declaração de váriaveis */
    char name[30];
    int age;
    float monthlyPay;

    /* entrada de dados */
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your age: ");
    scanf("%i",&age);

    // processamento //
    if( age <= 18){
        monthlyPay = 50.00;
    }
    else if(age >= 19  && age <= 29){
        monthlyPay = 70.00;
    }
    else if(age >= 30 && age <= 45){
        monthlyPay= 90.00;  
    }
    else if(age >= 46 && age <= 65){
        monthlyPay= 130.00;
    }
    else{
        monthlyPay= 170.00;
    }
    // Saída de dados
    print(name,age,monthlyPay);
}