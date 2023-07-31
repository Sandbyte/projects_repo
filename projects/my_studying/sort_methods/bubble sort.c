#include <stdio.h>

void bubble_sort(int* arr, int n);

int main(){
    int arr[] = {3,9,5,1,0,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("before: ");
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr,n);

    printf("after: ");
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void bubble_sort(int* arr, int n){
    for (int i = 0; i<n-1;i++){
        for (int j = 0; j<n-i-1; j++){
            if (arr[j+1] < arr[j]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}