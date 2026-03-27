#include <stdio.h>

int main(){

    int num[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    printf("O elemento posição [0][0] = %d\n", num[0][0]);
    printf("O elemento posição [1][1] = %d\n", num[1][1]);
    printf("O elemento posição [2][2] = %d\n", num[2][2]);

    printf("*** ***\n\n");

    printf("%d\t", num[0][0]);
    printf("%d\t", num[0][1]);
    printf("%d\n\v", num[0][2]);
    printf("%d\t", num[1][0]);
    printf("%d\t", num[1][1]);
    printf("%d\n\v", num[1][2]);
    printf("%d\t", num[2][0]);
    printf("%d\t", num[2][1]);
    printf("%d\n\v", num[2][2]);
    return 0;
}