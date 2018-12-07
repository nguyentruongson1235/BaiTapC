#include"iostream"
using namespace std;
main(){
//	int i,n;float s=0;
//    cout<<"nhap vao so n";
//    cin>>n;
//    for(i=1;i<=n;i++)
//    {
//    	s=s+1.0/i;
//    }
//   cout<<"tong s la: "<<s;

	//tong s= 1*1/2*1/3*....*1/n
	int i, n; float s = 1;
	cout << "nhap n:";
	cin>>n;
	for(i=1;i<=n;i++){
		s=s*(float)1.0/i;
	}
	cout<<s;
}
