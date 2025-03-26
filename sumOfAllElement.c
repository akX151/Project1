#include<stdio.h>
int main(){
    int row, col;
    printf("Enter row and columns:\n");
    scanf("%d%d",&row,&col);

    int arr[row][col];
    printf("Enter number in matrix:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;
    printf("Matrix element is:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
    }

    printf("sum of = %d",sum);
    return 0;
}