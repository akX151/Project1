#include<stdio.h>
int main(){
    int r, c;
    printf("Enter row and column:\n");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    printf("Enter elements in array:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nBefore transpose of matrix\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    int trans[c][r];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            trans[j][i] = arr[i][j];
        }
    }

    printf("\nAfter tanspose of matrix:\n");
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            printf("%d  ",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}