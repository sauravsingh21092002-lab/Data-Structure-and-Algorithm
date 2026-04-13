#include<stdio.h>
int a;
int *p = &a;
int main(){
    printf("Enter a number");
    scanf("%d", &a);
    printf("ENter Second Number");
    int b;
    int *q = &b;
    scanf("%d", &b);
    printf("Sum of this two number is: %d", *p + *q);
    return 0;

}