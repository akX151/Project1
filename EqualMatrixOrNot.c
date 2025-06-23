#include<stdio.h>
void input(int r, int c, int arr[r][c]){
    printf("Enter elements in array:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

int main(){
    int rows, cols;
    printf("Enter Rows and Columns:\n");
    scanf("%d%d",&rows,&cols);

    int arr1[rows][cols];
    int arr2[rows][cols];
    input(rows,cols,arr1);
    input(rows,cols,arr2);

    int count = 0;
    int r = rows * cols;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr1[i][j] == arr2[i][j])
                count++;
        }
    }

    if(count == r)
        printf("Both Matrices are equals");
    else
        printf("Both Matrices are not equals");
    return 0;
}
