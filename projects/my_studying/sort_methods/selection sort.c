#include <stdio.h>

void selection_sort(int* arr, int n);

int main(){
    int arr[] = {4,12,2,6,-100,5,7,0,-1,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("before: ");
    for (int i = 0; i<n;i++){
    printf("%d ", arr[i]);
    }

    bubble_sort(arr,n);

    printf("\nafter: ");
    for (int i = 0; i<n;i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void selection_sort(int* arr, int n){
    for (int i = 0; i<n-1; i++){
        for (int j = i+1; j<n; j++){
            if (arr[i]>arr[j]){
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            }
        }
    }
}