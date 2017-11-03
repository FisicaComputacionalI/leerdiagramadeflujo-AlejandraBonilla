\\Tarea Diagrama de Flujo 
\\Alejandra Bonilla

#include<iostream>
using namespace std;

int esprimo(int x){
	int flag=0;
	for(int i=2; i<x;i++){
		if (x%i==0)
		flag=1;
	}
	return flag;}

int main(){

int s=12;
int p=0;
int q=1;
cout<<"Introduce un Numero"<<endl;
cin>>p;
do{
	do{
		if(p%2==0)
		p=p+1;
		cout<<"p="<<p<<endl;
		if(esprimo(p)==1)
		p=p+2;
		cout<<"p="<<p<<endl;
		}
	while(esprimo(p)==1);

	if(esprimo(p)==0);
		if(p<s){
			s=s-p;
		}
		else 
			s=s-1;
			cout<<"s="<<s<<endl;	
		if (s==0){
		break;
		}
		else{
		p=p+2;
	}
	cout<<"p="<<p<<endl;
}

	while(q=1);
	
cout<<"Tu numero final es\n"<<p<<endl;
return 0;
}
     
        
    
