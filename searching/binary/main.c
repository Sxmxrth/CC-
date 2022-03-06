#include <stdio.h>

int main() {
    int a,b;
    printf("enter number of element in an array:");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i <a; ++i) {
        scanf("%d",&arr[i]);
    }
    //array entered must be sorted
    printf("enter a number to be searched in this array:");
    scanf("%d",&b);
    int start=0;
    int end=a-1;
    while(end>=start){
        int mid=(start+end)/2;
        if(b>arr[mid]){
            start=mid+1;

        }
        if(b<arr[mid]){
            end=mid-1;

        }
        if(b==arr[mid]){
            printf("number found at index %d",mid);
            break;
        }

    }
    return 0;
}
