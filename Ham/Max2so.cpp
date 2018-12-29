#include"iostream"
using namespace std;
int Max(int a, int b){
	int max = a;
	if(max < b){
		max = b;
	}
	return max;
	
}
int main(){
	int x, y;
	cout<<"nhap vao a va b"<<endl;
	cin >> x >> y;
	int kq_Max = Max(x,y);
	cout << "max trong 2 so la:"<<kq_Max;
	
}
