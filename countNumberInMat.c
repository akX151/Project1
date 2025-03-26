#include<stdio.h>
int main(){
    int r, c;
    printf("Enter Row and columns:\n");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    printf("Enter elements in array:\n");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int k, count = 0;
    printf("Enter k element to search:\n");
    scanf("%d",&k);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] == k)
                count++;
        }
    }

    printf("%d",count);
    return 0;
}