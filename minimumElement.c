#include<stdio.h>
int main(){
    int r, c;
    printf("Enter row and Columns:\n");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    printf("Enter element in array:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int min = 100;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(min > arr[i][j])
                min = arr[i][j];
        }
    }

    printf("Minimum element is %d",min);
    return 0;
}