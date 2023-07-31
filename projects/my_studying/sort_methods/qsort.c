#include <stdio.h>
#include <stdlib.h>

void q_sort(int* arr, int l, int r);
void swap(int* a, int* b);

int main(){
    int arr[] = {2,9,8,4,5,1,3,6,7}; //1 2 3 4 5 6 7 8 9
    int n = sizeof(arr)/sizeof(int);

    printf("before: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    q_sort(arr, 0, n-1);

    printf("after: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void q_sort(int* arr, int l, int r){
    if (l >= r){
        return;
    }
    int pivot = arr[(l+r)/ 2];
    int i = l;
    int j = r;
    while (i<=j){
        while (arr[i] < pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }

        if(i<=j) {
            swap(&arr[i], &arr[j]);
            i++;
            j--;

        }
    }
    q_sort(arr,l,j);
    q_sort(arr,i,r);
}

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
