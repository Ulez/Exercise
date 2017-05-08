#include<iostream> 
#include<string>
#include<stdio.h>
using namespace std;
//42*42;
int main(){
	int i=42;
	int *p1=&i;
	*p1=*p1**p1;
	cout<<"result="<<*p1;
	getchar();
	return 0;	
}
