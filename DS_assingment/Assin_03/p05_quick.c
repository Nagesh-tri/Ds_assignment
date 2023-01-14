#include <stdio.h>
/*
QUICK SORT:
keywords-> pivot: a elemnt jiske arround sorting ya partion hoti h
we have many ways to choose pivet i)random element ii)median of values 
iii) 1st element of array iv) last elemnt of array
Basically,
we arranage samller elemts left side of pivot value and bigger right side
i.e we are positioing pivot to its right postion in sorted array.
then we recursivly call the same quick sort method to rigth subarray and left subarray.

Time COmplexity:
wortst case: O(N^2);
when pivot is choosen as always smallest or greatest, worst case occres;
i.e if pivot is choosen as 1st or last element then if array is completry sorted in assending
or decending order it wil give worst case
avarage case: O(NlogN)

merge sort O() is always nlogn yet quick sort is used coz it does not take any extra
space i.e we need not to create new array.
and also worst case occures very few times in practical sinareos.
*/

int size=7;
void quicksort();
int partition();
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
//swap function for values
void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    return;
}
void quicksort(int arr[],int low ,int high){
    if(low<high){
        int pi_index= partition(arr,low,high);
        quicksort(arr,low,pi_index-1);
        quicksort(arr,pi_index+1,high);
    }
}
int partition(int arr[],int low,int high){
    int pivot,pi_index,i;
    pivot=arr[high];
    i=low-1;
    for(int j=0;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    i++;
    swap(arr,i,high);
    return i;
}
void main(){
    int arr= {34,3,2,3,443,234,32};
    quicksort(arr,0,size-1);
    return;
}