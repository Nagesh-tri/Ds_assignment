#include <stdio.h>

//function to swap two numbers
void swap(int *ptr_a, int *ptr_b){
    //function takes ow pointeres as parameter which are needed to swap
    int temp;
    temp=*ptr_a;//we can access a value stored in a pointer using '*' operator
    *ptr_a=*ptr_b;
    *ptr_b=temp;
}
void main(){

    //declare variable
    int a,b;
    //take two numbers as input
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    
    //print before swaping
    printf("Numbers are before swapping: a=%d and b=%d\n",a,b);

    //call swap function
    swap(&a,&b);//don't forget to add '&' operator as swap() takes  int pointers .

    //print after swapping
    printf("Numbers after swapping: a=%d and b=%d",a,b);
    
    return;
}