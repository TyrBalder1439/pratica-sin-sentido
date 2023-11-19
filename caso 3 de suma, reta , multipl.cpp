#include <iostream>
using namespace std;

int main(){
	 
	 int opcion = 0;
	 int a,b;
	 
	 cout<<"opcion 1:suma \nopcion 2:resta \nopcion 3:meltiplicación \n";
	 
	 cout<<"\ningresa una opción:";
	 cin>>opcion;
	 
	 
	 switch (opcion){
	 	case 1:
	 		cout<<"ingresa un numero \n";
	 		cin>>a;
	 		cout<<"ingresa un numero \n";
	 		cin>>b;
	 		
	 		cout<<a+b;
	 		break;
	 		case 2:
	 			cout<<"ingresa un numero \n";
	 		cin>>a;
	 		cout<<"ingresa un numero \n";
	 		cin>>b;
	 		
	 		cout<<a-b;
	 			break;
	 			case 3:
	 				cout<<"ingresa un numero \n";
	 		cin>>a;
	 		cout<<"ingresa un numero \n";
	 		cin>>b;
	 		
	 		cout<<a*b;
	 				
	 }
	
	
	
	return 0;
}
