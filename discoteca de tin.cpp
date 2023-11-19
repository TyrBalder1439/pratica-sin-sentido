#include <iostream>

using namespace std;

int main (){
	int edad = 0;
	
	cout<<"ingresa tu edad:";
	cin>>edad;
	
	if (edad<18){
		
		cout<< "no puedes entrar a la discoteca";
	}else{
		cout<<"puedes entrar a la discoteca";
	}
	
	
	
	return 0;
}
