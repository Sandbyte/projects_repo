#include <stdio.h>
#include <stdlib.h>

void merge_sort(int* arr, int* buf, int l, int r);


int main(){
    int arr[] = {100,50,2,9,8,4,5,1,164,3,6,7,0,5,3,6,3,7,4}; //1 2 3 4 5 6 7 8 9
    int n = sizeof(arr)/sizeof(int);
    int* buf = (int*)malloc(n*sizeof(int));

    printf("before: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    merge_sort(arr, buf, 0, n-1);

    printf("after: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(buf);
    return 0;
}

void merge_sort(int* arr, int* buf, int l, int r){
    if (l < r){
        int m = (l+r)/2;
        merge_sort(arr, buf, l, m);
        merge_sort(arr, buf, m+1, r);
        int k = l;
        for (int i = l, j = m+1; i<=m || j<=r;){
            if (j>r || (i<=m && arr[i] < arr[j])){
                buf[k] = arr[i];
                i++;
            }
            else{
                buf[k] = arr[j];
                j++;
            }
            k++;
        }
        for(int i = l; i<= r; i++){
            arr[i]=buf[i];
        }
    }
}