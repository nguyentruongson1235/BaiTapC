#include"iostream"
using namespace std;
main(){
	//tinh tong binh phuong cac so le tu 1-n
	int n, s=0;
	cout<<"nhap n:";
	cin>>n;
	for(int i = 1; i <=n ; i+=2 ){
		s+=i;
	}
	cout<<s*s;
}
