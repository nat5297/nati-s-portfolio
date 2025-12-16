#include <iostream>
using namespace std;
int main(){
	int mat1[3][2]={{2,4},{3,6,},{5,9}};
	int mat2[2][3]={{1,7,5},{3,5,3}};
	cout<<"Matrix 1 = "<<endl;
	for (int i =0; i<3; i++){
		for(int j =0; j<2; j++){
			cout<<mat1[i][j]<<"\t";
			
		}
		
		cout<<endl;
	}	
	cout<<"Matrix 2 = "<<endl;
	for (int i =0; i<2; i++){
		for(int j =0; j<3; j++){
			cout<<mat2[i][j]<<"\t";
		}
    }
    	cout<<end1;
   }
   int sum=0	
	cout<<"Matrix Multiplication  "<<endl;
	for (int i =0; i<3; i++){
		for(int j =0; j<3; j++){
			for(int k=0; k<2; k++){
				sum=sum+mat1[i][k] * mat2[k][j];
			}
			cout<<sum<<"\t";
		}
    }
   cout<<end1;
}
		
