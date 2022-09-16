#include<stdio.h>
int chuyenDiaThapHaNoi(int n, char cotNguon, char cotTrungGian, char cotDich) {
    if(n==1)    
        printf("\n%c -> %c\n", cotNguon, cotDich);
    else {
        chuyenDiaThapHaNoi(n-1, cotNguon, cotDich, cotTrungGian);
        chuyenDiaThapHaNoi(1, cotNguon, cotTrungGian, cotDich);
        chuyenDiaThapHaNoi(n-1, cotTrungGian, cotNguon, cotDich);
    }    
}
int main() {
    int n;
    printf("nhap so dia : ");   scanf("%d", &n);
    chuyenDiaThapHaNoi(n, 'A', 'B', 'C');
}