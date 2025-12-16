#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream outfile("nati.text");
	if (!outfile){
		cout<<"oopss there is no file named nti.text   first create  the file  "<<endl;
	
		
	}
	outfile<<"HELLO EVERY ONE MY NAME IS NATOLI DERESE. "<<endl;
	outfile<<"AND I AM ADAMA SCIENCE AND TECHNOLOGY UNIVERSITY STUDENT. "<<endl;
	outfile<<"WHAT CAN I HELP YOU?  ANTE BEDATAM "<<endl;
	if(outfile.good()){
		cout<<"DATA IS SUCCESSFULLY WRITTEN "<<endl;
		
	}
	else if (outfile.bad()){
		cout<<"error. the data has't written "<<endl;
		
	}
	outfile.close();
	return 0;
}
