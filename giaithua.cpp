#include"iostream"
using namespace std;
main(){
	// tinh giai thua cua n nhap tu ban phim 
	int n, s=1;
	cout<<"nhap n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		s*=i;
	}
	cout<<s;
	
}
