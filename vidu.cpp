#include<stdio.h>
#include<string.h>
#include<math.h>
void soDaoNguoc(int n) {
    int soNghichDao = 0;
    do {
        soNghichDao = soNghichDao * 10 +n %10;
    }while(n/=10);
}
void nhapMang(int x[], int &n) {
    printf("\nNhap so luong phan tu :");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        printf("x[%d]", i);
        scanf("%d", &x[i]);
    }
}
void xuatMang(int x[], int n) {
    printf("\nMang: ");
    for(int i=0; i<n; i++) {
        printf("%d", x[i]);
    }
}
int tinhTongSoLe(int x[], int n) {
    if (n==0)
        return 0;
    else {
        if(x[n-1]%2!=0)
            return tinhTongSoLe(x, n-1) + x[n-1];
        else 
            return tinhTongSoLe(x, n-1);    
    }    
}
void vietHoa(char x[]) {
    for(int i=0; i<strlen(x); i++) {
        if(x[i]>'A' && x[i]<'Z')
            x[i]=x[i]+32;
    }
    for(int i=0; i<strlen(x); i++) {
        if(x[i]!=' ' && x[i+1]=' ')
            x[i] = x[i] -32;
    }
}
int main() {
    int n;
    int k; int a[100];
    printf("\nNhap so can nghich dao :");
    scanf("%d", &k);
    getchar();
    soDaoNguoc(k);
    nhapMang(a,n);
    xuatMang(a,n);
    printf("Tong cac so le trong mang = %d", tinhTongSoLe(a,n));
    char s[100];
    printf("\nnhap ten :");
    gets(s);
    printf("Chuoi : %s", s);
}