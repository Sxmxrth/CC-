#include <stdio.h>

int main() {
    int m,n,p,q,c;

    printf("Enter the number of rows=");
    scanf("%d",&m);
    printf("Enter the number of columns=");
    scanf("%d",&n);
    printf("Enter the number of rows=");
    scanf("%d",&p);
    printf("Enter the number of columns=");
    scanf("%d",&q);

    int arr1[m][n];
    int arr2[p][q];
    int a1;
    for (int i = 0; i <m ; ++i) {
        for (int j = 0; j <n ; ++j) {
            scanf("%d",&arr1[i][j]);
        }

    }
    for (int i = 0; i <p ; ++i) {
        for (int j = 0; j <q ; ++j) {
            scanf("%d",&arr2[i][j]);
        }

    }

//    printf("%d",arr1[1][1]);
    printf("1)addition \n");
    printf("2)subtraction \n");
    printf("3)multiplication \n");
    printf("4)Transpose \n");
    printf("5) Norm \n");
    printf("enter your choice: ");
    scanf("%d",&c);

    switch (c) {
        case 1:
            if(m==p && n==q){
                int arr3[m][n];
                for (int i = 0; i <m ; ++i) {

                    for (int j = 0; j <n ; ++j) {
                        arr3[i][j]=arr1[i][j]+arr2[i][j];

                    }

                }
                for (int i = 0; i <m ; ++i) {
                   printf("\n");
                    for (int j = 0; j <n ; ++j) {
                        printf("%d \t",arr3[i][j]);
                    }

                }
            }

     break;

        case 2:
            if(m==p && n==q){
                int arr3[m][n];
                for (int i = 0; i <m ; ++i) {

                    for (int j = 0; j <n ; ++j) {
                        arr3[i][j]=arr1[i][j]-arr2[i][j];

                    }

                }
                for (int i = 0; i <m ; ++i) {
                    printf("\n");
                    for (int j = 0; j <n ; ++j) {
                        printf("%d \t",arr3[i][j]);
                    }

                }
            }

            break;

        case 3:
            if(n==p){
                int arr3[m][q];
                for (int i = 0; i <m ; ++i) {
                    printf("\n");
                    for (int j = 0; j <n ; ++j) {
                        printf("\n");
                        for (int k = 0; k < n; ++k) {
                            arr3[i][j] += arr1[i][k] * arr2[k][j];
                        }
                    }
                }
                for (int i = 0; i <m ; ++i) {
                    printf("\n");
                    for (int j = 0; j <q ; ++j) {
                        printf("%d \t",arr3[i][j]);

                    }

                }
            }
            break;


            case 4:
                for (int i = 0; i <m ; ++i) {
                    printf("\n");
                    for (int j = 0; j <n ; ++j) {
                        printf("%d \t",arr1[j][i]);

                    }

                }
                printf("\n");
                for (int i = 0; i <p ; ++i) {
                    printf("\n");
                    for (int j = 0; j <q ; ++j) {
                        printf("%d \t",arr2[j][i]);

                    }

                }
                break;

        case 5:
            

        default:
            printf("enter a valid choice");
            break;
    }


    return 0;
}
