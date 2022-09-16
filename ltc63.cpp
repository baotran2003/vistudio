#include<stdio.h>
int main() {
    int var;
    printf("Nhap var = ");
    scanf("%d", &var);
    printf("\nGia tri cua var = %d", var);
    printf("\nDia chi cua bien var = %p", &var);
    
    int *pc, c;
    c=5;
    pc = &c;
    printf("\nGia tri cua pc = %d", *pc);
    printf("\nDia chi cua bien p = %p", pc);

    *pc=1;
    printf("\nGia tri cua bien c = %d", *pc);
    printf("\nDia chi cua bien c = %p", pc);

}