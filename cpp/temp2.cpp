#include <iostream>
using namespace std;
double temp(double celsious){
	return (celsious *9.0/5.0)+32;
}
int main(){
	double celsious;
	cout<<"ENTER TEMPERATURE IN CELSIOUS :";
	cin>>celsious;
	double farhanite = temp(celsious);
	cout<<"TEMPERATURE IN FARHANITE IS :"<<farhanite;
	return 0;
	
}

