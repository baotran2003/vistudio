#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	//cau 1: 1d
	char *hoten;
	hoten=new char[50];	
	printf("nhap hoten:");gets(hoten);
	printf("xuat ho va ten: %s",hoten);
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
