#include <stdio.h>
//defining size of aray globaly
int size=4;

//print array method:
void print_array(int arr[]){
    int i;
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}

//take input method
void take_array_input(int arr[]){
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
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
    take_array_input(arr);
    //show unsorted array
    printf("The unsorted array is:\n");
    print_array(arr);

    //Sorting Method: Insertion
    //we have two subaarray
    //we pick an elemnt and insert it to its right position in sorted sub array
    //in the last we have completly sorted array
    for(i=0;i<size;i++){
        j=i-1;
        while(j!=0&& arr[i]<arr[j]){
            j--;
        }
        swap(arr,i,j);
    }

    //show Sorted array
    printf("\nThe Sorted array is:\n");
    print_array(arr);


}