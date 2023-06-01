//
// Created by ADM on 6/1/2023.
//
#include <stdio.h>
void main(){
    int num1,num2;
    int num;
    int sum;
    printf("\nPlease, enter a number:\n");
    printf("+num1: ");
    scanf("%d",&num1);
    printf("\n+num2:");
    scanf("%d",&num2);
    for (num=num1;num<num2;num++){
    sum=num%2;
    if (sum==0) {
        printf("\nThe even number between %d and %d is\n", num1, num2);
        printf("%d", num);
    }
    }

}