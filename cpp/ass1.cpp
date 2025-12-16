#include <iostream>
#include <string>
using namespace std;
struct studentDetails{
	string name ;
	int id;
	string sex;
	int year;
	double grade;
	
};
int main(){
	studentDetails students[4];
	for(int i =0;i<4;i++){
		cout<<"ENTER DETAIL INFORMATION ABOUT STUDENT :"<< i + 1<<":\n";
		cout<<"NAME: ";
		cin>>students [i].name;
		cout<<"ID: ";
		cin>>students[i].id;
		cout<<"SEX: ";
		cin>>students[i].sex;
		cout<<"YEAR: ";
		cin>>students[i].year;
		cout<<"GRADE: ";
		cin>>students[i].grade;
		cout<<"----------------------------------------------\n";
	}
	int topIndex =0;
	for(int i =1;i<4;i++){
		if(students[i].grade>students[topIndex].grade){
			topIndex=i;
		}
	}                  
	cout<<"\nSTUDENT WITH THE HIGHEST GRADE:\n";
	cout<<"NAME: "<<students[topIndex].name<<endl;
    cout<<"ID: "<<students[topIndex].id<<endl;
	cout<<"SEX: "<<students[topIndex].sex<<endl;
	cout<<"GRADE: "<<students[topIndex].grade<<endl;
	return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
}

