#include <stdio.h>
//total no of students
int N =2;
//A program to create student database using Structure

//structure
struct Student{
    char name[50];//student name
    int roll;//roll number
    char branch[50];//branch name
};

void main(){
    struct Student students[N]; 
    printf("Enter %d student details\n",N);
    //taking input of student details from user
    for(int i=0;i<N;i++){
        printf("Student Name: ");
        scanf("%s",&students[i].name);
        printf("Student Roll Number: ");
        scanf("%d",&students[i].roll);
        printf("Student Branch: ");
        scanf("%s",&students[i].branch);
        printf("______________\n");
    }
    //displaying it
    printf("--------Students details--------\n");
    for(int i=0;i<N;i++){
        printf("Name is: %s\nROll no is: %d\nand Branch is: %s\n\n",students[i].name,students[i].roll,students[i].branch);
    }
}