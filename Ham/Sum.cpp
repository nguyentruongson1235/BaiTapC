#include"iostream"
using namespace std;
int TinhTong(int n){
	int s = 0;
	for(int i=1;i<=n;i++){
		s+=i;
	}
	return s;
}
main(){
	int x;
	cout <<"nhap vao n: ";
	cin >> x;
	int ketqua=TinhTong(x);
	cout<<ketqua;
	
}
