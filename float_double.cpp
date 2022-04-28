//Float a double
#include<iostream>
#include<string>
#include<math.h>
using namespace std; 

int entero_bit(int parte_entero,string &entero){  
	if (parte_entero==0){
		return 0;}
	entero_bit(parte_entero/2,entero);
	char temp =(parte_entero%2)+48;
	entero=entero + (temp);
}
void flotante_bit(float parte_float,string &flotante,int n){
	char temp;
	for(int i=0;i<n;i++){
		parte_float=parte_float*2;
		temp=int(parte_float)+48;
		flotante=flotante+temp;
		parte_float=parte_float-int(parte_float);
							
	}}
void flot (int numero,string enterobit,string &flotante,int n){
	int nunm_cadena= enterobit.length();
	if (numero!=0)
		nunm_cadena--;
	string agrega=""; 
	if (numero!=0)
		agrega=enterobit.substr(1,nunm_cadena);
	agrega = agrega+ flotante;
	flotante=agrega;
	flotante=flotante.substr(0,n);
		
}
void biased1(string enterobit,string &entero,int n){
	int nunm_cadena= enterobit.length();
	nunm_cadena--;
	int biased=(pow(2, n-1)-1)+nunm_cadena;
	//cout<<biased<<"\n";
	entero="";
	entero_bit(biased,entero);
}
void float_double(string &double_1,string &flotante){
	double_1=flotante;
	for (int i=24;i<=52;i++)
		double_1=double_1+"0";
	
}
int main(){
	float numero;
	cout<< "Ingrese el numero 'Double': ";
	cin>>numero;
	int parte_entero;
	float parte_float;
	string enterobit="";
	string entero=""; 
	string flotante="";
	string double_1="";
	char signo=' ';
	if (numero==0)
		signo='x';
	else if (numero<0){
		signo='1';
		numero=numero*(-1);
}
	else
		signo='0';
	
	parte_entero=numero;
	parte_float=numero-parte_entero;
	entero_bit(parte_entero,enterobit);
	flotante_bit(parte_float,flotante,23);
	flot (numero,enterobit,flotante,23);
	biased1(enterobit,entero,8);
	cout<<"\n Float\n";
	cout<<signo<<" "<<entero<<" "<<flotante<<"\n";
	biased1(enterobit,entero,11);
	float_double(double_1,flotante);
	cout<<"\n Double\n";
	cout<<signo<<" "<<entero<<" "<<double_1;
	return 0;
}
