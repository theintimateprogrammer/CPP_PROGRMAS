#include<iostream>
using namespace std;
main(){
	
	char a[100]= "HeLLo ";
	int i;
	cout<<"your string before toggle :"<<a<<endl;
	
	for(i=0;a[i]!='\0';i++){
	   if(a[i]>='A'&&a[i]<='z'){
	   	a[i]=a[i]+32;
	   }
		else if(a[i]>='a'&& a[i]<='z'){
		a[i]=a[i]-32;
		}
	}
	cout<<"your string after toggle :"<<a[i];
	
}
	
	
	
	
	
	
	
	
	
	
	
	

