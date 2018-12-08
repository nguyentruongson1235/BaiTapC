#include"iostream"
using namespace std;
main(){
	//max trong 3 so nguyen
	int a,b,c;
	cout<<"nhap vao lan luot a , b, c \n";
	cin>>a>>b>>c;
//	int max=a;
//	if(max<b)
//	{
//		max=b;
//	}
//	if(max<c){
//		max=c;
//	}
//	cout<<"max in 3 number is:"<<max;
	
	//min trong 3 so nguyen
	int min =a;
	if(min>b){
		min=b;
	}
	if(min>c){
		min=c;
	}
	cout << "min in 3 number is: "<<min;
	
}
