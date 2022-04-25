#include <string.h>
void selectMenu (){
	printf("\n");
	printf("STUDENT MANAGEMENT PROGRAM\n");
	for(int i =0; i<20;i++){
		printf("=");
	}
	printf("\n1. Nhap so luong sinh vien");
	printf("\n2. Nhap danh sach sinh vien ");
	printf("\n3. Sap xep danh sach sinh vien");
	printf("\n4. In danh sach sinh vien");
	printf("\n5. Thoat\n");
		for(int i =0; i<20;i++){
		printf("=");
	}
	printf("\n");
}
int nhapSo(int n){
	printf("\nNhap so luong sinh vien: ");
	scanf("%d",&n);
	return n;
}
void nhapTen(char arr[][50],int n){
	for (int i=0;i<n;i++){
		printf("\nNhap ten sinh vien: ");
		scanf("%s",arr[i]);
	}
}
void sapXep(char arr[][50],int n){
	for (int i=0; i<n-1; i++){
		for (int j=i; j<n-i-1; j++){
			if (strcmp(arr[j],arr[j+1])>0){
				char tmp[50];
				strcpy(tmp, arr[j]);
				strcpy(arr[j], arr[j+1]);
				strcpy(arr[j+1], tmp);
			}
		}
	}
}
void inDanhSach (char arr[][50],int n){
		for(int i=0; i<n;i++){
		printf("%s\n",arr[i]);
	}
}
