#include <stdio.h>

int main(){

    char operators;
    double num1;
    double num2;
    double result;

    printf("\n Enter an operator(+ - * / %  **):")
    scanf("%c", &operators );

    printf("\n Enter Number 1 :");
    scanf("%lf", &num1);

    printf("\n Enter Number 2 :");
    scanf("%lf", &num2);

    switch(operators){
        case '+':
         result = num1 + num2;
         printf("\nresult: %lf",result);
         break;
        case '-':
         result = num1 - num2;
         printf("\nresult: %lf",result);
         break;
         case '*':
         result = num1 * num2;
         printf("\nresult: %lf",result);
         break;
        case '/':
         result = num1 / num2;
         printf("\nresult: %lf",result);
         break;
        case '%':
         result = num1 % num2;
         printf("\nresult: %lf",result);
         break; 
        case '**':
         result = num1 ** num2;
         printf("\nresult: %lf",result);
         break;
        default:
         printf("%c is not valid ", operators) ;

    }
 return 0;
}