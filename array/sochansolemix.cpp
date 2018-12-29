#include"iostream"
using namespace std;
main(){
	int n;
	cout << "nhap so phan tu trong mang"<<endl; 
	cin >> n;
	int a[n];
	int i;
	
	for (i = 0; i < n ; i ++)
	{
		cout << "a["<<i<<"]=";
		cin>>a[i];
	}
	int min1 = 10000;
	int min2 = 10000;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0) 
			{
				if(min1>a[i])
				{
					min1=a[i];
				}
					
			}
			else{
					if(min2>a[i])
					{
						min2=a[i];
					}
					
			}
			
		}
		cout << "so chan nho nhat: "<<min1<<endl;
		cout << "so le nho nhat: "<<min2;
}
