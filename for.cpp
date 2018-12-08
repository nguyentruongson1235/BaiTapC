#include<iostream>
using namespace std;
main(){
	int n, s = 1;
	cout<<"nhap n:";
	cin>>n;
	cout<<"tong cac so le tu 1 den " << n << " la ";
	for(int i=1;i<=n;i++){
		s=s+i;
	}
	cout << s;
    
}
