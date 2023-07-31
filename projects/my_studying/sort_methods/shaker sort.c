#include <stdio.h>

void shaker_sort(int* arr, int n);
void swap(int* a, int* b);

int main(){
    int arr[] = {9, 11, 5, 7, 2, 8, 3, 24, 12}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("before: ");
    for (int i = 0; i<n;i++){
    printf("%d ", arr[i]);
    }

    shaker_sort(arr,n);

    printf("\nafter: ");
    for (int i = 0; i<n;i++){
    printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void shaker_sort(int* arr, int n){
    int l = 0;
    int r = n-1;
    while (l <= r){
        for (int i = l; i<r; i++){
           if (arr[i] > arr[i+1]){
                swap(&arr[i], &arr[i+1]);
           } 
        }
        r--;
        for (int i = r; i>l; i--){
            if (arr[i-1] > arr[i]){
            swap(&arr[i-1], &arr[i]);
            }
        }
        l++;
    }
}

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
