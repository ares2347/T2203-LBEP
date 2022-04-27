void reverseArray(int ary[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			int tmp=ary[j];
			ary[j]=ary[j+1];
			ary[j+1]=tmp;
		}
	}
}
