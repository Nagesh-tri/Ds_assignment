#include <stdio.h>
void main(){
    int arr[]={4,4,4,54,64,54,45,};
    int rev[15];
    for(int i=0,j=14;i<15;i++,j--){
        rev[j]=arr[i];
    }
    //print
    for(int i=0;i<15;i++){
        printf("%d\n",rev[i]);
    }
}