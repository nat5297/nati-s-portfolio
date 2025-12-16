#include <iostream>
#include<cmath>
using namespace std;
int main(){
	char grade ;
	cout<<"ENTER THE GRADE :\n";
	cin>>grade;
	switch (grade){
		case 'A':
			cout<<"EXELLENT\n";
			break;
		case 'B':
			cout<<"VERY GOOD\n";
			break;
		case  'C':
			cout<<"GOOD\n";
			break;
		case 'D':
			cout<<"POOR\n";
			break;
	}
	return 0;
}
