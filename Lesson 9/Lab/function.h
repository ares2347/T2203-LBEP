void menuSection(){
	char title[20]="TINH TOAN";
	printf("%15s\n",title);
	for (int i=0;i<20;i++){
		printf("=");
	}
	printf("\n1.Nhap so\n");
	printf("2.Tinh tong\n");
	printf("3.Tinh hieu\n");
	printf("4.Tinh tich\n");
	printf("5.Tinh thuong\n");
	printf("6.Thoat\n");
	for (int i=0;i<20;i++){
	printf("=");
	}
	printf("\nChon: ");
}

int sumFx(int a, int b){
	return a+b;
}
int subFx(int a, int b){
	return a-b;
}
int mulFx(int a, int b){
	return a*b;
}
float divFx(int a, int b){
	if(b==0){
		printf("khong the chia cho 0\n");
		do{
		printf("nhap lai b: ");
		scanf("%d",&b);
		}while(b==0);
	}
	return (float)a/b;
	}

