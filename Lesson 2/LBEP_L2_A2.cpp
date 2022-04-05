#include <stdio.h>
#include <math.h>
int main(){
	int m, d;
	printf("input month: ");
	scanf("%d",&m);
	printf("input day: ");
	scanf("%d",&d);
	
	int dateno;
	
	if ((m==1)&&(d>=1)&&(d<=31)){
		dateno=d;
	}else{
		if (m==2&&d>=1&&d<=28){
			dateno=31*1+d;	
		}else{
			if (m==3&&d>=1&&d<=31){
				dateno=31*1+28+d;
			}else{
				if (m==4&&d>=1&&d<=30){
					dateno=31*2+28+d;
				}else{
					if (m==5&&d>=1&&d<=31){
						dateno=31*2+30*1+28+d;	
					}else{
						if (m==6&&d>=1&&d<=30){
							dateno=31*3+30*1+28+d;	
						}else{
							if (m==7&&d>=1&&d<=31){
								dateno=31*3+30*2+28+d;	
							}else{
								if (m==8&&d>=1&&d<=31){
									dateno=31*4+30*2+28+d;	
								}else{
									if (m==9&&d>=1&&d<=30){
										dateno=31*5+30*2+28+d;
									}else{
										if (m==10&&d>=1&&d<=31){
											dateno=31*5+30*3+28+d;
										}else{
											if (m==11&&d>=1&&d<=30){
												dateno=31*6+30*3+28+d;
											}else{
												if (m==12&&d>=1&&d<=31){
													dateno=31*6+30*4+28+d;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if(dateno>=1 && dateno<=365){
		int a=dateno%7+2;
		if(a<=8 and a>=2) {
			if (a>=2 && a<=7) {
				printf("day la thu %d, ngay thu %d trong nam\n", a, dateno);
			}else{
				printf("day la chu nhat, ngay thu %d trong nam\n", dateno);
			}
		}
	}
}
