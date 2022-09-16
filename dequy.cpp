#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
int a[100];
int e;
void nhapPhimBatKy();
int tinhTong(int n);
int giaiThua(int n);
int Fibonaci(int n);
int USCLN(int a, int b);
int chuyenDiaThapHaNoi(int n, char cotNguon, char cotTrungGian, char cotDich); // n : đĩa
void soNhiPhan(int x);
void doiGiaySangGioPhut(int giay);  // n: Giây
void tinhTongCacChuSo(int n);
void xuatNguocCacChuSo(int n);
void daoNguocChuoi(char x[]);
int kiemTraSNT(int n);

void nhapMang(int x[], int &e);
void xuatMang(int x[], int e);
float tongCacPhanTuCuaMang(int x[], int n);
int maxMang(int x[], int n);

void timUocSo(int n);
int tichCacSoLe(int n);
int tongCacSoLe(int n);
int tinhTong_17(int n);
int tinhTong_18(int n);
int tinhTong_19(int n);
int tinhTong_20(int n);
int tinhTong_21(int n);
int tinhTong_22(int n);
int tinhTong_23(int n);

int main() {
    int n;
    int luaChon;
    do {
        printf("\n1. Tinh tong 1+2+3+...n : \n");
        printf("2. Tinh n! : \n");
        printf("3. Tim so hang thu k cua day Fibonaci : \n");
        printf("4. Uoc so chung lon nhat cua 2 so duong : \n");
        printf("5. Giai bai toan thap HaNoi : \n");
        printf("6. Bieu dien so nhi phan n : \n");
        printf("7. Doi tu giay => gio : phut : giay : \n");
        printf("8. Tinh tong cac chu so cua N : \n");
        printf("9. Xuat nguoc cac chu so cua so N : \n");
        printf("10. In dao nguoc chuoi x : \n");
        printf("11. kiem tra N co phai la SO NGUYEN TO khong ? \n");
        printf("12, Nhap mang : \n");
        printf("13. Xuat mang : \n");
        printf("14. Tinh tong n phan tu trong mang 1 chieu : \n");
        printf("15. Tim phan tu MAX trong mang 1 chieu : \n");
        printf("16. In tat ca uoc so nguyen duong cua n : \n");
        printf("17. Tính P(n) = 1.2.3....(2n+1) \n");
        printf("18. Tinh S(n) = 1+3+5+...+(2n+1) : \n");
        printf("19. Tinh S(n) = 1-2+3-4+...+(-1)^n+1 : \n");
        printf("20. Tinh S(n) = 1+ 1.2 +1.2.3 +...+ 1.2.3...n : \n");
        printf("21. Tinh S(n) = 1^2 + 2^2 + 3^2 +...+ n^2 : \n");
        printf("22. Tinh S(n) = 1 + 1/2 + 1/3 +...+ 1/n : \n");
        printf("23. Tinh S(n) = 1 + 1/(1+2) + 1/(1+2+3) +...+ 1/(1+2+3+...+n) : \n");
        printf("24. Tinh P(x,y) = x^y : \n");
        printf("25. Tinh S(n) = 1 + (1+2) +(1+2+3) +...+ (1+2+3+...+n) : \n");
        printf("26. NHAP 0 KET THUC PHAN 1 : \n");
        printf("Nhap n ="); scanf("%d", &n);
        printf("\nNhap lua chon cua ban : ");
        scanf("%d", &luaChon);
            if(luaChon==1) {
                printf("\n1.Tong 1+2+3+...+n = %d", tinhTong(n));
                nhapPhimBatKy();
            }else if(luaChon==2) {
                printf("2.Tinh n! : ");  
                printf("%d! = %d", n, giaiThua(n));  
                nhapPhimBatKy();
              
            }else if(luaChon==3) {
                printf(" \nTim so hang thu k cua day Fibonaci = %d", Fibonaci(n));
                nhapPhimBatKy();
            }else if(luaChon==4) {
                int a, b;
                printf("\nNhap 2 so a,b");
                scanf("%d %d", &a, &b);
                printf("\nUoc so chung lon nhat cua %d va %d = %d", a, b, USCLN(a,b));
                nhapPhimBatKy();
            }else if(luaChon==5) {
                char cotNguon = 'A', cotTrungGian = 'B', cotDich = 'C';
                int soDia;
                printf("Nhap so dia :");    scanf("%d", &soDia);
                printf("\nBai toan chuyen dia thap HaNoi :" );
                chuyenDiaThapHaNoi(soDia, 'A', 'B', 'C');
                nhapPhimBatKy();
            }else if(luaChon==6) {
                int x;
                printf("Nhap so x :");  scanf("%d", &x);
                printf("chuyen doi so nhi phan: ");
                soNhiPhan(x);
                nhapPhimBatKy();
            }else if(luaChon==7) {
                int q;
                printf("\nNhap so giay :");scanf("%d", &q);
                printf("7. doi giay sang GIO: PHUT : GIAY ");
                doiGiaySangGioPhut(q);  
                nhapPhimBatKy();
            }else if(luaChon==8) {
                printf("8. Tinh tong cac chu so n =");
                tinhTongCacChuSo(n);
                nhapPhimBatKy();
            }else if(luaChon==9) {
                printf("9. Xuat nguoc cac chu so cua x :");
                xuatNguocCacChuSo(n);
                nhapPhimBatKy();
            }else if(luaChon==10) {
                printf("10. In dao nguoc chuoi: s ");
                char s[50] ;
                printf("\nNhap chuoi s :");
                scanf("%s", &s);    // fgets(s, sizeof(s), stdin);
                printf("\nchuoi ban dau : %s", s);
                daoNguocChuoi(s);
                printf("\nChuoi sau khi dao nguoc : %s", s);   
                nhapPhimBatKy();
            }else if(luaChon==11) {
                printf("\n11. Kiem tra so nguyen to :");
                int w;
                printf("\nNhap so can kiem tra :"); scanf("%d", &w);
                int kt = kiemTraSNT(w);
                if(kt==0) {
                    printf("\n%d Khong phai la so nguyen to !", w);
                }else {
                    printf("\n%dLa So Nguyen To !", w);
                }
                nhapPhimBatKy();
            }else if(luaChon==12 || luaChon==13 || luaChon==14 || luaChon==15) {
                printf("12. Nhap mang : \n");
                printf("13. Xuat mang : \n");
                printf("14. Tinh tong n phan tu trong mang 1 chieu : \n");
                printf("15. Tim phan tu MAX trong mang 1 chieu : \n");   
                nhapMang(a,e);
                xuatMang(a,e);
                printf("\nTong cac phan tu trong mang = %.2f", tongCacPhanTuCuaMang(a,e));
                printf("\nPhan tu MAX trong mang 1 chieu = %d", maxMang(a,e));
                nhapPhimBatKy();
            }else if(luaChon==16) {
                printf("\n16. In tat ca uoc so nguyen duong cua n :");
                timUocSo(n);
                nhapPhimBatKy();
            }else if(luaChon==17) {
                printf("\n17. Tinh P(n) = 1.3.5...(2n+1) N>=0 :");
                printf("\nTich = %d", tichCacSoLe(n));
                nhapPhimBatKy();
            }else if(luaChon==18) {
                printf("\n18. Tinh S(n) = 1+3+5+...+(2n+1) : ");
                printf("\nTong cac so le = %d", tongCacSoLe(n));
                nhapPhimBatKy();
            }else if(luaChon==19) {
                printf("\n19. Tinh S(n) = 1-2+3-4+...+(-1)^n+1 :");
        
                nhapPhimBatKy();
            }else if(luaChon==20) {
                printf("\n20. Tinh S(n) = 1+ 1.2 +1.2.3 +...+ 1.2.3...n :");

                nhapPhimBatKy();
            }else if(luaChon==21) {
                printf("\n21. Tinh S(n) = 1^2 + 2^2 + 3^2 +...+ n^2 :");

                nhapPhimBatKy();
            }else if(luaChon==22) {
                printf("\n22. Tinh S(n) = 1 + 1/2 + 1/3 +...+ 1/n : ");

                nhapPhimBatKy();
            }else if(luaChon==23) {
                printf("\n23. Tinh S(n) = 1 + 1/(1+2) + 1/(1+2+3) +...+ 1/(1+2+3+...+n) : ");

                nhapPhimBatKy();
            }else if(luaChon==24) {
                printf("\n24. Tinh P(x,y) = x^y : ");

                nhapPhimBatKy();
            }else if(luaChon==25) {
                printf("\n25. Tinh S(n) = 1 + (1+2) +(1+2+3) +...+ (1+2+3+...+n) : ");

                nhapPhimBatKy();
            }else if(luaChon==26) {
                printf("\nNhap lua chon de ket thuc :");

                nhapPhimBatKy();
            }
    }while(n!=0);
}
void nhapPhimBatKy() {
    printf("\nNhap phim bat ki de tiep tuc :");
    getch();
}

int tinhTong(int n) {
    if(n==1)
        return 1;
    return tinhTong(n-1) + n;    
}
int giaiThua(int n) {
    if(n==1)
        return 1;
    return giaiThua(n-1)*n;    
}
int Fibonaci(int n) {
    if(n==1 || n==2)
        return 1;
    return Fibonaci(n-1) + Fibonaci(n-2);    
}
int USCLN(int a, int b) {
    if(a==0 || b==0) {
       return a+b;
    }else {
        while(a!=b) {
            if(a>b) {
                a=a-b;
            }else {
                b=b-a;
            }
        }
    }  
}
int chuyenDiaThapHaNoi(int n, char cotNguon, char cotTrungGian, char cotDich) {
    if(n==1)    
        printf("\n%c -> %c\n", cotNguon, cotDich);
    else {
        chuyenDiaThapHaNoi(n-1, cotNguon, cotDich, cotTrungGian);
        chuyenDiaThapHaNoi(1, cotNguon, cotTrungGian, cotDich);
        chuyenDiaThapHaNoi(n-1, cotTrungGian, cotNguon, cotDich);
    }    
}
void soNhiPhan(int x) {
    if(x==0)
        return ;
    else {
        int r =x%2;
        soNhiPhan(x/2);
        printf("%d", r);
    }    
}
void doiGiaySangGioPhut(int giay) { 
        int gio = giay/3600;
        int phut = giay/60 % 60;
        int giayConLai = giay%60;
        printf("%dh : %dp : %ds", gio, phut, giayConLai);
}
void tinhTongCacChuSo(int n) {
    int sum = 0;
    while(n>0) {
        sum = sum +n%10;
        n = n/10;
    }
    printf("\nTong cac chu so = %d", sum);
}
void xuatNguocCacChuSo(int n) {
    int soDu;
    int nghichDao = 0;
    while(n>0) {
        soDu = n%10;
        nghichDao = nghichDao*10+soDu;
        n = n/10;
    }
    printf("Số sau khi nghịch đảo là : %d", nghichDao);
}
void daoNguocChuoi(char x[]) {
    size_t len = strlen(x);
	for(int i=0; i<len/2; i++){
		char temp = x[i];
		x[i]=x[len-i-1];
		x[len-i-1] = temp;
	}
}
int kiemTraSNT(int n) {
    if(n<=1)
        return 0;
    for(int i=2; i<n-1; i++) {
        if(n%i==0)
            return 0;
    }
    return 1;    
}
void nhapMang(int x[], int &n) {
    for(int i=0; i<n; i++) {
        printf("Nhap x[%d]= ", i);
        scanf("%d", &x[i]);
    }
}
void xuatMang(int x[], int n) {
    printf("\nNhap mang :");
    for(int i=0; i<n; i++) {
        printf("%d", x[i]);
    }
}
float tongCacPhanTuCuaMang(int x[], int e) {
    int tong = 0;
    for(int i=0; i<e; i++) {
        tong = tong+x[i];
    }
    return tong;
}
int maxMang(int x[], int e) {   // 1 9 5 3 1
    int max = x[0];
    for(int i=1; i<e; i++) {
        if(max < x[i])
            max = x[i];
    }
    return max;
}
void timUocSo(int n) {
    printf("\nNhap so can tim uoc :");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            printf("\nUoc so nguyen duong cua n : %d", i);
        }
    }
}
int tichCacSoLe(int n) {
    printf("Nhap n = ");
    scanf("%d", &n);
    int tich =1;
    for(int i=1; i<=n; i++) {
          if(i%2 != 0)
            tich = tich * i;  
    }
    return tich;
}
int tongCacSoLe(int n) {
    printf("Nhap n = ");
    scanf("%d", &n);
    int tong = 0;
    for(int i=0; i<=n; i++) {
        if(i%2!=0)
            tong =tong + i;
    }
    return tong;
}






