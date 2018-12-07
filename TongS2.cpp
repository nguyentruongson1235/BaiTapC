#include"iostream"
using namespace std;
main(){
	//tong s=1+(1*2)+(1*2*3)+ ( 1 + 2 + 3 + ... + n)
//	int n, t=1,s=0;
//	cout<<"nhap n:";
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		t=t*i;
//		s=s+t;
//	}
//	cout << s;
		int n, t=0,s=1;
	cout<<"nhap n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		t=t+i;
		s=s*t;
	}
	cout << s;
}
