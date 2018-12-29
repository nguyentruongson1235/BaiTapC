#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "nhap so phan tu trong mang"<<endl; 
	cin >> n;
	int a[n];
	int i;	
	for (i = 0; i < n ; i ++)
	{
		cout << "nhap a["<<i<<"]= ";
		cin>>a[i];
	}
	cout<<"Mang cua ban sau khi nhap la : ";
	for (i = n-1; i >=0  ; i --)
	{
		cout << a[i];
	}

}

