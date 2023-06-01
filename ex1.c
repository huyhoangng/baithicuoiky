//
// Created by ADM on 6/1/2023.
//
#include <stdio.h>
int isEvenNumber(int num);
void main(){
    int num1,num2;
    int num;
    int sum;
    printf("\nPlease, enter a number:\n");
    printf("+num1: ");
    scanf("%d",&num1);
    printf("\n+num2:");
    scanf("%d",&num2);
    for (num=num1+1;num<num2;num++){
        sum=isEvenNumber(num);
        if(sum==0)
            printf("The even number between %d and %d is %d\n",num1,num2,num);

    }

}
int isEvenNumber(int num){
    int kq;
    kq=num%2;
    return (kq);
}
