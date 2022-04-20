//1.S=x^y
int powVar(int x, int y){
	int s=x;
	for (int i=1;i<y;i++){
		s*=x;
	}
	return s;
}
//2.so nguyen to nho nhat lon hon mo gia tri trong mang
 //check so nguyen to
 bool checkPrime(int n){
 	bool f=true;
 	if (n<2) f=false;
 	for (int i=2; i<=n/2;i++){
 		if (n%i==0){
 			f=false;
 			break;
		}
	}
	 return f;
 }
 //check max cua mang
 int maxArray(int arr[], int n){
 	int max=arr[0];
 	for (int i=1;i<n;i++){
 		if (max<arr[i]) max=arr[i];
	 }
	 return max;
 }
 //tim so nguyen to nho nhat lon hon gia tri trong mang
 int minPrime(int arr[], int n){
 	for (int i=maxArray(arr,n); ;i++){
 		if (checkPrime(i)) return i;
	 }
 }
//3. UCLN cua tat ca cac phan tu trong mang
 //check min cua mang
  int minArray(int arr[], int n){
 	int min=arr[0];
 	for (int i=1;i<n;i++){
 		if (min>arr[i]) min=arr[i];
	 }
	 return min;
 }

//UCLN cua mang
int hcfArray (int arr[], int n){
	//loop tu min de tim uoc
	for (int i=minArray(arr,n); i>0; i--){
		bool f=true;
		//loop mang de test uoc
			for (int j=0;j<n;j++){
				//dao co neu sai
				if (arr[j]%i!=0){
					f=false;
					break;
				}
			}
			//ngat function neu dung
			if (f) return i;
		}
	}


//4.BCNN cua tat ca cac phan tu trong mang
//BCNN cua mang
int lcmArray (int arr[], int n){
	//loop tu max de tim boi
	for (int i=maxArray(arr,n); ; i++){
		bool f=true;
		//loop mang de test boi
			for (int j=0;j<n;j++){
				//dao co neu sai
				if (i%arr[j]!=0){
					f=false;
					break;
				}
			}
			//ngat function neu dung
			if (f) return i;
		}
	}

