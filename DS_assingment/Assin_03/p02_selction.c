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

    //Sorting Method: Selection
    //in selection we  select the smallest elemtn and put it to starting and so on
    for(i=0;i<size;i++){
        int min=i;
        for(j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr,i,min);
    }

    //show Sorted array
    printf("\nThe Sorted array is:\n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }


}