#include <stdio.h>

void ins_sort(int* arr, int n);

int main(){
   int arr[] = {100,50,2,9,8,4,5,1,164,3,6,7,0,5,3,6,3,7,4}; //1 2 3 4 5 6 7 8 9
    int n = sizeof(arr)/sizeof(int);

    printf("before: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    ins_sort(arr, n);

    printf("after: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void ins_sort(int* arr, int n){
    for (int i = 1; i<n; i++){
        int x = arr[i];
        int j = i;
        while (j > 0 && arr[j-1] > x){
            arr[j] = arr[j-1];
            j--;
        }
        arr[j] = x;
    }
}
