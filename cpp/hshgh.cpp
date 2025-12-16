#include <iostream>
#include <string>
using namespace std;
struct students{
	string name;
	string sex;
	int id;
	double grde ;
	students *p;
	
	
}stud1,stud2,stud3,stud4;
int main (){
	//stud1 = { "NATOLI","MALE",327328,3.4};
	//stud2 = {"TORPA","MALE" ,326285692,3.3};
	//stud3= { "gete","female",87326742,3.7};
	//stud4={"berke","female",723672,3.0};
	cin<<
	students *first =&stud1;
	stud1.p =&stud2;
	stud2.p=&stud3;
	stud3.p=&stud4;
	stud4.p=NULL;
	students *s=first;
	while(s!=NULL){
		cout<<s->name<< " "<<s->sex<< " "<<s->id<<" "<<s->grde<<endl;
		s=s->p;
	}
	
	
	
}
