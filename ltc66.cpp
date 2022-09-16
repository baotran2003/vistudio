#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Nhap so luong phan tu :");
    scanf("%d", &n);
    int* ptr = (int*)malloc(n*sizeof(int)); 
    if(ptr==NULL) {
        printf("\nError : Khong cap phat duoc vung nho:");
        return 0;
    }
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", ptr+i);
    }
    for(int i=0; i<n; i++) {
        printf("%d\t", *(ptr+i));
    }
    // Them so luong phan tu
    int x;
    printf("Nhap so luong phan tu can them :");
    scanf("%d", &x);
    realloc(ptr, x);
    // Nhap mang

    for(int i=0; i<n; i++) {
        printf("x[%d] = ", i);
        scanf("%d", ptr+i);
    }
    for(int i=0; i<n; i++) {
        printf("%d\t", *(ptr+i));
    }
}