#include"iostream"
using namespace std;
float ptbac1(float a, float b)
{
	if (a == 0)
    {
        if (b == 0)
        {
            cout<< "Phuong trinh vo so nghiem";
        }
        else
        {
            cout<< "Phuong trinh vo nghiem";
        }
    }
    else
    {
        float x = float (-b / a);
        cout<< "Phuong trinh co nghiem duy nhat x ="<<x;
    }
}


main(){
	float x, y;
	cin>>x>>y;
	float kq = ptbac1(x, y);
//	cout<<kq;
	
	
}
