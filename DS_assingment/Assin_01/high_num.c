#include <stdio.h>
void main(){
    //find highest number among 3 of given by user

    //declare variables
    int num1, num2,num3;
    
    //take 3 input from user
    printf("Enter 1st Number: \n");
    scanf("%d",&num1);
    printf("Enter 2st Number: \n");
    scanf("%d",&num2);
    printf("Enter 3st Number: \n");
    scanf("%d",&num3);

    //compare numbers and find largest
    if(num1>num2 && num1>num3){
        printf("%d is the Largest number",num1);
    }
    else if(num2>num3 && num2>num1){
        printf("%d is the Largest number",num2);
    }
    else
        printf("%d is the Largest number",num3);

    return;
}