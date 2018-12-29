#include"iostream";
using namespace std;
int hamHonHop(int a,int b, char c){
	switch(c){
		case '+':
			return a+b;
			break;
		case '-':
			return a-b;
			break;
		case '*':
			return a*b;
			break;
		case '/':
			return a/b;
			break;
			
			default:
				return c;
				break;
	}
}
int main(){
	int x, y;
	char z;
	cin>>x>>y>>z;
	int klq=hamHonHop(x, y, z);
	if(klq){
		cout<<klq<<endl;
	}
		
}
