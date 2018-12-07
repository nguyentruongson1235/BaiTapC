#include"iostream"
using namespace std;
main(){
	int n, t=0,s=0;
	cout<<"nhap n:";
	cin>>n;
	for(int i=1;i<=n;i++){
		t=t+i;
		s=s+t;
	}
	cout << s;
}

