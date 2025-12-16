#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream infile("nati.text");
	if(!infile){
		cout<<"opps the file does't exist ."<<endl;
		}
	string line;
	cout<<"file content: "<<endl;
	while (getline(infile,line)){
		cout<<line<<endl;
		
	}
	infile.close();
	return 0;
}

