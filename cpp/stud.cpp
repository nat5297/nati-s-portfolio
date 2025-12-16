#include <iostream>
#include <string>
using namespace  std;
struct student{
	int id ;
	string name ;
	double GPA;
}s;
int main(){
	cout<<"ENTER YOUR ID \n";
	cin>>s.id;
	cout<<"ENTER YOUR NAME \n ";
	cin>>s.name;
	cout<<"ENTER YOUR GPA \n";
	cin>>s.GPA;
	
    cout<<"\n STUDENT INFO";
    cout<<"\nID:"<<s.id;
    cout<<"\nNAME:"<<s.name;
    cout<<"\nGRADE:"<<s.GPA;
    return 0;
}
