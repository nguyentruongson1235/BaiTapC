#include"iostream"
using namespace std;
main(){
	// nhap vao so nguyen , in ra tat ca cac uoc so
	int n;
	do{
		cout<<"nhap vao so nguyen n :";
		cin>>n;
	}
	while(n<0);
	cout<<"uoc so cua " << n << " la: ";
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<" "<<i;
		}
	}
}
