#include <stdio.h>
void fib(int num){
    int i,term1=0,term2=1,next_term;
    printf("First term is: %d\n",term1);
    printf("Second term is: %d\n",term2);
    for(i=3;i<=num;i++){
        next_term=term1+term2;
        printf("%d term is: %d\n",i,next_term);
        term1=term2;
        term2=next_term;

    }
}

void main(){
    int terms;
    printf("Enter no of terms in Fibonacci: \n");
    scanf("%d",&terms);
    fib(terms);
}