#include"iostream"
using namespace std;
main(){

	int array[7];
	int s=0, s1=0;
	cout <<"nhap vao pt cua mang"<<endl;	
	for(int i=0; i<7; i++){
		cout << "nhap a["<<i<<"] :";
		cin >> array[i];		
	}
	
	for(int i=0;i<7;i++){
		if(array[i]%2==0) // if(array[i]%2!=0) la in pt so le trong mang
		{
			s+=array[i];			
		}
		else{
			s1+=array[i];
		}
	}
	cout<<"tong so le trong mang la: "<<s<<endl;
	cout<<"tong so chan trong mang la: "<<s1;


}
