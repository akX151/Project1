#include<stdio.h>
void input(int rows, int cols, int arr[rows][cols]){
    printf("Enter elements in array:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

int main(){

    int rows, cols;
    printf("Enter row:\n");
    scanf("%d",&rows);
    printf("Enter Columns:\n");
    scanf("%d",&cols);

    int arr1[rows][cols];
    input(rows, cols, arr1);
    int arr2[rows][cols];
    input(rows, cols, arr2);

    int mul[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            mul[i][j] = 0;
            for(int k = 0; k < rows; k++){
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("After multiply of array:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d  ",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}