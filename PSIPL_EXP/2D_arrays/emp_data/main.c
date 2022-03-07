#include <stdio.h>

int main() {
    int curryear,id,age,n,retyear;

    printf("enter the current year: ");
    scanf("%d",&curryear);
    printf("enter the number of employees: ");
    scanf("%d",&n);
    int arr[n][3];
    for (int i = 0; i <n ; ++i) {
        int j=0;
        printf("enter employee ID: ");
        scanf("%d",&id);
        arr[i][j]=id;
        j++;
        printf("enter current age: ");
        scanf("%d",&age);
        arr[i][j]=age;
        j++;
        retyear=age+curryear;
//        scanf("%d",&retyear);
        arr[i][j]=retyear;
    }
//    printf("%d",arr[0][1]);
    printf("EMP ID \t\t");
    printf("Age \t");
    printf("Retirement year \t");
    for (int i = 0; i <n ; ++i) {

        printf("\n");

        for (int j = 0; j <3 ; ++j) {
            printf("%d \t\t", arr[i][j]);
        }

    }

    return 0;
}
