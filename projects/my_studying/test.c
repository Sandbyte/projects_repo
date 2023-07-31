#include <stdio.h>
#include <stdlib.h>

int main(){
    //int a = 5;
    int* pa = (int*)malloc(1);
    printf("%p\n", pa);
    free(pa);
    free(pa);
    printf("%p\n", pa);
    return 0;
}