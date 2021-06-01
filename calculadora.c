#include <stdio.h>

int main(){
    float num1, num2;
    char op;
    printf("Digite a operação a ser realizada:");
    scanf("%f %c %f",&num1,&op,&num2);
    switch (op){
        case '+':
            printf("A Soma de %1.f + %1.f = %1.f:",num1,num2,num1+num2);
            break;
        case '*':
            printf("O Produto de %1.f x %1.f = %1.f:",num1,num2,num1*num2);
            break;
        case '/':
            printf("A Divisão de %1.f / %1.f = %1.f:",num1,num2,num1/num2);
            break;
        case '-':
            printf("A Diferença de %1.f - %1.f = %1.f:",num1,num2,num1-num2);
            break;
        default:
            printf("INVALID OPERATION");
            break;
            }

}
