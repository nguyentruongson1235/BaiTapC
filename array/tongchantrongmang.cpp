#include"iostream"
using namespace std;
main(){
	//tinh tong cac phan tu so chan trong mang

	int a[7];
	int sumchan=0;
	cout <<"nhap vao pt cua mang"<<endl;	
	for(int i=0; i<7; i++){
		cin >> a[i];		
	}
	cout << "tong phan tu chan trong mang la:";

	for(int i=0;i<7;i++){
		if(a[i]%2==0) //a[i]%2 != 0 la so le
		{
			sumchan+=a[i];						
		}
	}
	cout<<sumchan;


}
