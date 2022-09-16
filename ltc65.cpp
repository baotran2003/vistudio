#include<stdio.h>
// Dao nguoc gia tri 2 tham so voi truyen tham chieu
void swap_1(int &a, int &b) {
    int temp = a;
    a=b;
    b=temp;
}

// Dao nguoc gia tri 2 tham so voi con tro
void swap_2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b=temp;
}

int main() {
    int a = 18;
    int b = 10;
    printf("Ham truoc khi swap 1 : a = %d va b = %d", a, b);
    swap_1(a,b);
    printf("\nHam sau khi swap 1 : a = %d va b = %d", a, b);

    printf("\nHam truoc khi swap 2 : a = %d va b = %d", a, b);
    swap_2(&a, &b);
    printf("\nHam sau khi swap 2 : a = %d va b = %d", a, b);
}