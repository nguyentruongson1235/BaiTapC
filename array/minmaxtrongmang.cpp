#include"iostream"
using namespace std;
main(){
	//so chan lon nhat, so le lon nhat trong mang

	int a[8];
	cout <<"nhap vao pt cua mang"<<endl;	
	for(int i=0; i<8; i++){
		cin >> a[i];		
	}
	int max1=a[0];
	int max2=a[0];
	for(int i=0;i<8;i++)
	{
		if(a[i]%2==0) 
		{
			if(max1<a[i])
			{
				max1=a[i];
			}
				
		}
		else{
				if(max2<a[i])
				{
					max2=a[i];
				}
				
		}
		
	}
	cout<<"So chan lon nhat trong mang la "<<max1<<endl;
	cout<<"So le lon nhat trong mang la "<<max2<<endl;



}
