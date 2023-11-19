#include <iostream>
#include <math.h>
using namespace std;

int main (){
	
	
	int a = 0;
	int b = 0;
	int res = -1;
	
	cout<<"ingrese a:"<<endl;
	cin>>a;
	cout<<"ingrese b:"<<endl;
	cin>>b;
	
	res= a+b;
	cout<<res<<endl;
	
	if (a>b){
		cout<<"a es mayor que b ";
	}else {
		cout<<"b es mayor que a";
	}	
	
	
	return 0;
}
