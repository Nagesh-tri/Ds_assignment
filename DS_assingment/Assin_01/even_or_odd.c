#include <stdio.h>
void main(){
    //to determine whether the number input by user is even or odd
    //declare num
    int num;

    //take number as input from user
    printf("Enter the Number\n: ");
    scanf("%d",&num);

    //check if num is divisble by 2 or not i.e even or odd and print it to terminal
    if(num%2==0){
        //reminder of num/2 is equal to 0 i.e num is even
        printf("THe given number is Even");
    }else{
        printf("The given number is Odd");
    }


    
    return;
}