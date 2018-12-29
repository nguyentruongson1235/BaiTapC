#include"iostream"
using namespace std;
int tinhtong(int a, int b
	
	return a+b;
}
int tinhhieu(int a, int b{
	return a-b;
}
int tinhtich(int a, int b{
	return a*b;
}
float tinhthuong(float a, float b){
	return (float)a/b;
}
int main(){
	int x, y;
	int kq;
	int kq_hieu;
	int kq_tich;
	int kq_thuong;
	cin>>x>>y;	
	
	kq = tinhtong(x,y);
	cout << kq << endl;
	kq_hieu = tinhhieu(x,y);
	cout << kq_hieu << endl;
	kq_tich =tinhtich(x,y);
	cout <<kq_tich<<endl;
	kq_thuong =tinhthuong(x,y);
	cout << float(kq_thuong);
	
	
}
//hoac:

//int tinhtong(){
//	int a,b;
//	cin>>a>>b;
//	cout<<a+b;
//}
//int main(){
//	tinhtong();
//}
