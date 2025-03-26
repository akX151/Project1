#include<stdio.h>
int main(){
    int r, c;
    printf("Enter row and column:\n");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    printf("Enter elements in array:");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Before ascending\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    int temp; 
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            for(int k = 0; k < r; k++){
                for(int l = 0; l < c; l++){
                    if(arr[i][j] < arr[k][l]){
                        temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }
        }
    }

    printf("After ascending\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}