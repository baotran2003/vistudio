#include<stdio.h>
int main() {
    // int x[]={1,2,3,4,5};
    // printf("Mang x : \n");
    // for(int i=0; i<5; i++) {
    //     printf("%d ", x[i]);
    //     printf("%d ", &x[i]);
    // }
    // printf("\nDia chi cua bien x = %p", &x);
    // printf("\nDia chi cua bien x[0] = %p", &x[0]);

    int x[10];
    int n;
    printf("\nNhap so luong phan tu cua mang :");
    scanf("%d", &n);
    printf("Nhap vao cac gia tri cua mang :");
    for(int i=0; i<n; i++) {
        printf("x[%d] = ", i);
        // scanf("%d", &x[i]);  cach 1
        scanf("%d", x+i);
    }
    
    printf("\nGia tri cua mang :");
    for(int i=0; i<n; i++) {
        // printf("%d ", x[i]); cach 1
        printf("%d ", *(x+i));
    }
}