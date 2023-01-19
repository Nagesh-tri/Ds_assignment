//a program for providing simple step wise solution of 
//problem using simple recursion.
#include <stdio.h>
#include <math.h>

int step=0;
void tower(int d,char beg,char aux, char fin){
    if(d<=0){
        printf("\nIllegle Entry");
    }
    else if(d==1){
        step++;
        printf("Step %d: ",step);
        printf("Move disc from %c to %c\n",beg,fin);
    }
    else{

    tower(d-1,beg,fin,aux);//move n-1 disk from big to aux
    tower(1,beg,aux,fin);//move nth disc to beg to end

    tower(d-1,aux,beg,fin);//aux to fin;
    }
}
void main(){
    int disk,ttl;
    printf("Enter No of disks:\n");
    scanf("%d",&disk);
    ttl=pow(2,disk)-1;
    printf("The Solution for %d disks in tower of Hanoi is:\n(total steps required: %d)\n",disk,ttl);
    tower(disk,'A','B','C');
}