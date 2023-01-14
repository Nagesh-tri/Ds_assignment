/*
MERGE SORT:
prerequiste: Recursion
merge sort basically based on divide and conqure technique
Time complexity:  nlogn
Extra memory is used way much(see line 32 in merge function): memory wastage

*/

#include <stdio.h>
//defining size of aray globaly
int size=4;

//Additional note: merge function must be defined above divide(as it is used in divide:fxn can't use before its defination)
//conqure  step: merging elements in right order
void merge(int arr[],int si,int mid,int ei){
    // a new array must be created to store sorted elements for a while
    int s=ei-si+1;//size of new array
    int merge_arr[s];
    int idx1=si;//tracker for 1st arr index
    int idx2=mid+1;
    int x=0;//tracking index of merge_arr
    //comparing elemnts and putting in merged arr
    while(idx1<=mid && idx2<=ei){
        if(arr[idx1]<=arr[idx2]){
            merge_arr[x++]=arr[idx1++];//m[i++] means it access ith term and then increse i with 1;
        }else
            merge_arr[x++]=arr[idx2++];
    }
    //after comparing remaning elements pass in merge_arr till end
    while(idx1<=s){
        merge_arr[x++]=arr[idx1++];
    }
    while(idx2<=s){
        merge_arr[x++]=arr[idx2++];
    }
    //copy merge_arr elemts in original array
    for(int i=si,x=0;x<s;x++,i++){
        arr[i]=merge_arr[x];
    }

} 
//merge function (recursive)
void divide(int arr[],int si,int ei){
    //base condition
    if(si>=ei){
        return;
    }
    int mid=si+ (ei-si)/2;
    //divide array in two parts
    divide(arr,si,mid);//one part of array
    divide(arr,mid+1,ei);//2nd part
    //merge these arrays
    merge(arr,si,mid,ei);

}
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
//no use of swapping

void main(){
    int i,j;
    int arr[size];

    //taking input from user an array first
    printf("Enter Values of(Unsorted):\n");
    take_array_input(arr);
    //show unsorted array
    printf("The unsorted array is:\n");
    print_array(arr);

    //Sorting Method:Merge
    //function is defined above
    divide(arr,0,size-1);
    //show Sorted array
    printf("\nThe sorted array is:\n");
    print_array(arr);


}