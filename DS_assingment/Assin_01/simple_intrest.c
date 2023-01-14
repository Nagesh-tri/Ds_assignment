#include <stdio.h>
void main(){
    int principle,time,rate,sim_intrest;
    //take all requrired inputs
    printf("Enter YOur principle Amount: \n");
    scanf("%d",&principle);

    printf("Enter Number of Years: \n");
    scanf("%d",&time);

    printf("Enter Rate of Interst: \n");
    scanf("%d",&rate);

    //calculate interst
    sim_intrest= principle*time*rate/100;

    //show the value of interst on output panle
    printf("The Simple interest is: %d",sim_intrest);

    return;
}