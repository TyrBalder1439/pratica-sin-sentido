#include <iostream>

using namespace std;

int main(){
	
	int horas;
	cout<<"por favor ingresa cuantas horas trabajaste:\n";
	cin>>horas;
	
	if (horas <5){
		cout<<"tu ganancia es de 10 dolares";
		
	}else if(horas >5 && horas <11){
		cout<<"tu gaanancia es de 20 dolares";
	}else if(horas >10){
	    cout<<"tu gaanancia es de 300 dolares";
	}
	
	
	
	return 0;
	
	
}
