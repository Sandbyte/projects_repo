#include <stdio.h>

void comb_sort(int* arr, int n);


int main(){
    int arr[] = {100,50,2,9,8,4,5,1,164,3,6,7,0,5,3,6,3,7,4}; //1 2 3 4 5 6 7 8 9
    int n = sizeof(arr)/sizeof(int);

    printf("before: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    comb_sort(arr, n);

    printf("after: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void comb_sort(int* arr, int n){
    const double fac = 1.247;
    int step = n - 1;
    // while (step >=1){
    //     for (int i = 0; i+step<n; i++){
    //         if (arr[i+(int)step] < arr[i]){
    //             int tmp = arr[i];
    //             arr[i] = arr[i+(int)step];
    //             arr[i+(int)step] = tmp;
    //         }
    //     }
    //     step/=fac;
    // }
    for (int i = 0; i<10; i++){
        printf("%d %d\n", i, step);
        step/=fac;
    }
}