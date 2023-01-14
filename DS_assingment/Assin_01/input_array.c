#include <stdio.h>
void main(){
    //create an array and take input from user

    //declare variables;
    int size,i;
    int arr[100]; //we assume here input will be less than 100

    //ask user for number of input he want to give
    printf("Enter the number of Inputs: \n");
    scanf("%d",&size);

    //a loop for taking input for 'size' of times
    for(i=1;i<=size;i++){
        printf("Input no.%d : \n",i);
        scanf("%d",&arr[i]);
    }

    //loop for printing array
    printf("The array is :\n");
    for(i=1;i<=size;i++){
        printf("%d\n",arr[i]);
    }

    
    return;
}