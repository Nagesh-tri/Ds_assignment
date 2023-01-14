#include <stdio.h>
//defining size of aray globaly
int size=4;

//swap function
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return;
}

void main(){
    int i,j;
    int arr[size];

    //taking input from user an array first
    printf("Enter Values of(Unsorted):\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //show unsorted array
    printf("The unsorted array is:\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    //sort array using Bubble sort
    for(i=0;i<size;i++){
        //compare ith term with all succesing terms and swap them if not in order
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                //define swap above
                swap(arr,i,j);
            }
        }
    }
    //show Sorted array
    printf("\nThe Sorted array is:\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }


}