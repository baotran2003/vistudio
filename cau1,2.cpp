#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void nhapMang(int *&a, int &n);
void xuatMang(int *a, int n);
void hieu_a_b(int *a, int n, int *b, int m);
int main(int argc, char *argv[]) {
    int *a, *b, m, n;
    nhapMang(a,n);
    nhapMang(b,m);
    xuatMang(a,n);
    xuatMang(b,m);
}
void nhapMang(int *&a, int &n) {
    do {
        printf("Nhap so luong phan tu : ");
        scanf("%d", &n);
    }while(n<=0);
    a = new int[n];
    for(int i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", (a+i));
    }
}
void xuatMang(int *a, int n) {
    printf("\nMang : \n");
    for(int i=0; i<n; i++) {
        printf("%d\t", *(a+i));
    }
}

// DEC solutions has recently finished their new "DEC E Suite" - basically a file encryption package. We have a file that we want to look at that's been locked by this encryption.
I've thrown a copy of it up on our crossroads server (a non-secure dumping ground fo all CSES users) as "e_source.dec." is the file extension this new encryption generates, by the way.

You might want to take a look at the file itself first. The company's website is pretty barren of anything useful, but if you dig a bit you might find something to help. Once you're in, try scanning to see if the network goes deeper.