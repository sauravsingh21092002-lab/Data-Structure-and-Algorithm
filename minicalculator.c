#include <stdio.h>
int main() {
    int a, b;
    printf("Please enter a first numbers to perform any arithmetic operation:\n");
    scanf("%d", &a);
    printf("Now Enter second number \n");
    scanf("%d", &b);
    char operation;
    printf("Kindly tell me which operation you want to perform (+, -, *, /)");
    scanf(" %c", &operation);

    switch(operation){
        case '+':printf("The sum of these two numbers are:%d", a + b);
        break;
        case '-': printf("The difference between those two numbers are %d", a - b);
        break;
        case '*': printf("The product of those two numbers are %d", a * b);
        break;
        case '/': printf("The division of those two numbers are %d", a / b);
        break;
        default: printf("Bye");
    
    }
    printf("\nThank you for using this mini calculator");
    return 0;
}