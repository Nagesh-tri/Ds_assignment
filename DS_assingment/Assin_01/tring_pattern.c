#include <stdio.h>
void main(){
    //print a tringle pattern with '*'
    //declare variables
    int row,i,j,k;

    //take row as input from user
    printf("Enter the Value of Rows: \n");
    scanf("%d",&row);

    /*
    pattern would be like
    for row =5
        *       i=1,no of star in row 1=1   no of space before: 4
       ***      i=2;    *=3                 :3
      *****     i=3;    *=5                 :2
     *******    i=4;    *=7                 :1
    *********   i=5;    *=9  (2*i-1)        :0(let be j=row -i)for spaces
    
    */
   //a loop for rows
   for(i=1;i<=row;i++){
    //before printing * we need some white spaces
    for(j=row;j>=i;j--){
        printf(" ");
    }

    //a loop for printing * in every row in right manner
    
    //for(k=1;k<2*i;k++){printf(" ");}
    //more convinent using while
    k=1;
    while(k<2*i){
        printf("*");
        k++;
        }
    printf("\n");//end of row
   }
    
    return;
}