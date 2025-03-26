#include<stdio.h>
void input(int rows, int cols, int arr[rows][cols]){
    printf("Enter number in matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

int main(){
    int row, col;
    printf("Enter row and columns:\n");
    scanf("%d%d",&row,&col);

    int arr1[row][col];
    int arr2[row][col];
    input(row,col,arr1);
    input(row,col,arr2);
    
    int sum[row][col];
    printf("Matrix element is:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}