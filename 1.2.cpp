#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main (){
	
	float peso = 0;
	float altura = 0;
	float resultado = 0;
	cout<<"calculadora de indice de masa corporan (IMC)\n";
	cout<<"ingrese su peso en kilogramos:";
	cin>>peso;
	cout<<"ingrese su altura en metros";
	cin>>altura;
	//calculado el IMC 
	resultado = peso / pow(altura,2);
	cout<<"su IMC es:"<<setprecision(4)<<resultado<<"kg/m";
	
	
	return 0;
}
	
