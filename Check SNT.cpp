#include<iostream>
#include<math.h>
using namespace std;
main(){
	int n, dem = 0;
	do{
		cout<<"nhap vao n:";
		cin>>n;
		if(n<0){
			cout<<"vui nhap lai n > 0";				
		}		
	}
	while(n<0);
	if(n<2){
		cout << n << " khong phai la so nguyen to ";
	}
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				dem++;
			}
		}
		if(dem == 0){
			cout << n << " la so nguyen to";
		}
		else{
			cout << n << " khong la so nguyen to";
		}
	}
}
