#include <iostream>
using namespace std;
struct student{
	string name ;
	int age ;
	double salary;
	student *p ;
}s1 , s2, s3, s4;
int main(){
	s1 ={"Natoli " , 19 , 20000};
	s2 ={"Tolosa " , 19 , 2000};
 	s3 ={"beqele " , 20 , 2000}	;
 	s4 ={"kasu " , 21 , 20000};
 	student *first =&s1;
 	s1.p=&s2;
 	s2.p=&s3;
 	s3.p=&s4;
 	s4.p=NULL;
 	student *s=first;
while (s!= NULL){
 	cout<<s->name<< " " <<s->age<< " "<<s->salary<<" "<<endl;
 	s=s->p;
}
}

