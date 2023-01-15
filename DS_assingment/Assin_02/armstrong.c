#include <stdio.h>
#include <math.h>
/*armstrong numbers are=
 (num)=sum of digits with raise to power of (no of digits)

here we are not cencern about negative numbers...it considered that number enterd by user will be positive
*/

int digits(int num){
    int n=0;
    while(num>0){
        num /=10;
        n++;
    }
    return n;
}
int arm_power(int num,int p){
    int sum=0;
    while(num!=0){
        sum +=pow(num%10,p);
        num=num/10;
    }
    return sum;
}
void main(){
    int num,dig,arm;
    printf("Enter Number to check: \n");
    scanf("%d",&num);
    //find no of digits
    dig=digits(num);
    //sum of digits with power dig
    arm=arm_power(num,dig);
    //check if arm =num or not number is armstrong or not
    if(arm==num){
        printf("Number is Armstrong number");
    }else{
        printf("Number is not Armstrong number");
    }

}
