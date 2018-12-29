#include"iostream"
using namespace std;
main(){
//	tong mang
	int array[7];
	int sum = 0;
	cout <<"nhap vao pt cua mang"<<endl;
	for(int i=0; i<7; i++){
		cin >> array[i];
		sum=sum+array[i];
	}
	cout <<"tong cua mang la : "<<endl;
	cout<<sum;

}
	

