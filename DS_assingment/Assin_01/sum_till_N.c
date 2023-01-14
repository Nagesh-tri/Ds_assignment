#include <stdio.h>
void main(){

    //sum of 1 to N;
    //declare variables
    int n,i,sum=0;

    //take input of N
    printf("Enter the value of N\n: ");
    scanf("%d",&n);

    //sum via #loop
    for(i=1;i<=n;i++){
        sum +=i;
    }

    //output the value of sum
    printf("The sum is: %d",sum);

    return;
}