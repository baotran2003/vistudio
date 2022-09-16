#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
	//cau 1: 1d
	char *hoten;
	hoten=new char[50];	
	printf("nhap hoten:");gets(hoten);
	printf("xuat hoten:%s",hoten);
	//tach ten: 1d
//	xoa_trang_thua(hoten);
	int j=0;
	char ten[10];
	int i=strlen(hoten)-1;
	while(hoten[i]!=' '){
		ten[j]=hoten[i];
		i--;
		j++;
	}
	ten[j]='\0';
	printf("\nxuat ten:");
	for(int i=strlen(ten)-1;i>=0;i--)
		printf("%c",ten[i]);			
	return 0;
}
#include <stdio.h>
void nhap_mang(int *&a,int &n);
void xuat_mang(int *a,int n);
void hieu_a_b(int *a,int n,int *b,int m);
int main(int argc, char *argv[])
{
	int *a,*b,n,m;
	nhap_mang(a,n);
	nhap_mang(b,m);
	xuat_mang(a,n);
	xuat_mang(b,m);
	hieu_a_b(a,n,b,m);
	return 0;
}
void nhap_mang(int *&a,int &n){
	do{
		printf("nhap so phan tu:");scanf("%d",&n);
	}while(n<=0);
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		printf("nhap a[%d]=",i);scanf("%d",(a+i));
	}
}
void xuat_mang(int *a,int n){
	for(int i=0;i<n;i++)
		printf("%d ",*(a+i));
}
void hieu_a_b(int *a,int n,int *b,int m)
{
	printf("\nhieu cua a va b la:");
	for(int i=0;i<n;i++){
		int kt=1;
		for(int j=0;j<m;j++)
			if(*(a+i)==*(b+j))
				kt=0;
		if(kt==1)
			printf("%d ",*(a+i));
	}

}
#include <stdio.h>
int dem_chi_het_cho_3(int a[],int n){
	if(n==0)
		return 0;
	else
		if(a[n-1]%3==0)
			return 1+dem_chi_het_cho_3(a,n-1);
		else
			return dem_chi_het_cho_3(a,n-1);			
}
float tinh_s(int x,int n){
	if(n==1)
		return x;
	return tinh_s(x,n-1)+pow(x,n)/n;
}
int main(int argc, char *argv[])
{
	
	return 0;
}
#include <stdio.h>
typedef 	struct 
{	
	char ma_nv[12];//mã nhân viên
	char ten_nv[60];//tên nhân viên
	char don_vi[200];//??n v? công tác c?anhân viên
	float hs_luong;// l??ng
}NHANVIEN;
void xoa_nv(NHANVIEN ds[],int n,char manv[]){
	int kt=0;
	for(int i=0;i<n;i++)
		if(strcmp(ds[i].ma_nv,manv)==0){
			xoa_vt(ds,n,i);	
			kt=1;
		}
	if(kt==0)
		printf("khong tim thay");
	else
		printf("da xoa");
}
void xoa_vt(NHANVIEN ds[],int &n,int vt){
	for(int i=vt;i<n-1;i++)
		ds[i]=ds[i+1];
	n--;
}
void them_nv(NHANVIEN ds[],int &n,NHANVIEN a){
	ds[n]=a;
	n++;
}
float tb_luong(NHANVIEN ds[],int n){
	for(int i=0;i<n;i++)
		tong+=ds[i].float hs_luong;
	return tong/n;
}
void in_thongtin_luong(NHANVIEN ds[],int n){
	float tbl=tb_luong(ds,n);
	for(int i=0;i<n;i++)
		if(ds[i].float hs_luong<tbl)
			xuat_1_nv(ds[i]);
			// Su dung cap p
}
int main(int argc, char *argv[])
{
	NHANVIEN ds[1000],a;
	nhap_1_nv(a);
	them_nv(ds,n,a);
	return 0;
}