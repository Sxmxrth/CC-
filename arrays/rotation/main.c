#include <stdio.h>

int main() {
    int n;
    int arr[]={1,2,3,4,5};
    printf("enter number of rotations:");
    scanf("%d",&n);
    for (int i = 1; i <=n ; ++i) {
        int n=arr[0];
        for (int j = 0; j <5 ; ++j) {
            arr[j]=arr[j+1];
        }
        arr[4]=n;
    }
    for (int i = 0; i <5 ; ++i) {
        printf("%d",arr[i]);

    }
    return 0;
}
