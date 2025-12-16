#include <iostream>
using namespace std;
int  a=10;
int main(){
	int a=1,i=1;
	int b=8;
	a=b*a;
	do{
		cout<<"a :"<<a<<endl;
		cout<<"a+b: "<<a+b;
		i++;
		
	}
	while(a%5==0&&i<a);
	return 0;
}
