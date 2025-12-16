#include <iostream>
using namespace std ;
int calculateage(int birthyear = 2000){
	int currentyear = 2017;
	return currentyear - birthyear;
}
int main(){
	int birthyear;
	char choice;
	cout<<"DO YOU WANT TO ENTER TOU'R BIRTH YEAR ?(Y/N):";
	cin>>choice;
	
	if (choice =='y'||choice=='Y'){
		cout<<"ENTER YOU BIRTH YEAR :";
		cin>>birthyear;
		cout<<"YOU'R AGE IS :"<<calculateage(birthyear);
	}
	else {
		cout<< "YOUR AGE IS:"<<calculateage();
	}
	return 0;

}

