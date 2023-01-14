#include <stdio.h>

int fact(int num){
    int factorial=1;
    //for 0 fact =1;
    if(num==0 || num==1)
        return 1;
    //calc fact
    while(num>1){
        factorial = factorial*num;
        num--;
    }
    return factorial;
}
void main(){
    int num,fact_num;
    printf("enter any Number: \n");
    scanf("%d",&num);
    fact_num=fact(num);
    printf("The factorial of Number is: %d",fact_num);
    return;
}