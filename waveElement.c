#include<stdio.h>
int main(){
    int arr[7];
    
    printf("Enter number:\n");
    for(int i = 0; i < 7; i++){
        scanf("%d", &arr[i]);
    }

    int temp;
    for(int i = 0; i < 7; i++){
        for(int j = i+1; j < 7; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int t;
    for(int i = 0; i < 7-1; i+=2){
        t = arr[i];
        arr[i] = arr[1+i];
        arr[1+i] = t;
         
    }

    for(int i = 0; i < 7; i++){
        printf("%d  ", arr[i]);
    }

    return 0;
}