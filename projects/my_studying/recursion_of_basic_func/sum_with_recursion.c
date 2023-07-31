#include <stdio.h>

int sum(int* arr, int n);

int main(){
    int arr[] = {}; //sum = 30
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n", sum(arr,n));
    return 0;
}

//recusrion with middle element
int sum(int* arr, int n){
    int res = 0;
    if (n == 1){
        res = arr[0];
    }
    else if (n>1){
    int mid = n/2;
    int arr_l[mid];
    int arr_b[n-mid];
    for (int i = 0; i<n; i++){
        if (i<mid){
            arr_l[i] = arr[i];
        }
        else{
            arr_b[i-mid] = arr[i];
        }
    }
    res = sum(arr_l, mid) + sum(arr_b, n-mid);
    }
    return res;
}
//