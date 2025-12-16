#include <iostream>
using namespace std;
int main(){
	int studentGrades[]= { 90, 80,76,99,78};
	cout<<&(studentGrades[0])<< endl;
	cout<<studentGrades<< endl;
	cout<<sizeof (studentGrades)/sizeof(studentGrades[0]);
	cout<<sizeof (studentGrades) <<endl;
	
	

}
