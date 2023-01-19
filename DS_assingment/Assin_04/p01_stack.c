#include <stdio.h>
#include <stdlib.h>
/*
Stack is consider just like a simple array having some 
restrictions i.e we can only access top  most elemnt at any cast.*/
//using define preprosedure
#define MAX 10
//defining globle variables :a stack array and top;
int stack_arr[MAX];
int top=-1;//in starting its having value of non existing index.\
//operations of stack
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else
        return 0;
}
int isFull(){
    if(top==MAX-1){
        return 1;
    }
    else 
        return 0;
}
void push(int data){
    if(isFull()){
        printf("Stack Overflow!");
        return;
    }
    top +=1;
    stack_arr[top]=data;
    printf("Your data has been inserted!\n");
}
int pop(){
    int value;
    if(isEmpty()){
        printf("Stack Underflow!");
        exit(1);
    }
    value=stack_arr[top];
    top -=1;
    return value;
}
int peek(){
    if(isEmpty()){
        printf("Stack Underflow!");
        exit(0);
    }
    return stack_arr[top];
}
void print_stack(){
    if(isEmpty()){
        printf("Stack Underflow!");
        exit(0);
    }
    for(int i=top;i>=0;i--){
        //i starts froom top coz in stack we first remove top element
        printf("%d\t",stack_arr[i]);
    }
    printf("\n");
}

void main(){
    int choice, data;
    //our requireent froom user: for user:
    //user interface
    while(1){
        printf("-----------------------------*****-----------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top Element\n");
        printf("4. Print all elements in Stack\n");
        printf("5. Quit(Exit the program)\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);

        //switch case
        switch(choice){
            case 1:
                printf("Enter Your data to push:\n");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                data =pop();
                printf("Deleted Element is: %d\n",data);
                break;
            case 3:
                printf("The top is %d\n",peek());
                break;
            case 4:
                printf("Elements are:\n");
                print_stack();
                break;
            case 5:
                exit(0);
                break;
            default: 
                printf("Please Enter any valid Choice!");


        }
    }
}