#include<stdio.h>
int main(){
    int r,c;
    printf("Enter Row and Columns:\n");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    printf("Enter elements in array:");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Matrix:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < r; i++){
        int sr = 0, sc = 0;
        for(int j = 0; j < c; j++){
            sr += arr[i][j];
            sc += arr[j][i];
        }
        printf("Sum of Row: %d\n",sr);
        printf("Sum of Columns: %d\n",sc);
    }
    return 0;
}