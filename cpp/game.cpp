#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
void delay (int ms){
	Sleep (ms);
	
}
int main(){
	srand(time(0));
	string lanes[3]= {"LEFT" , "CENTER" , "RIGHT"};
	int playerLane = 1;
	int score = 0;
	char move;
	cout<<"===WELLCOME NATI'S GAME ==="<<endl;
	cout<<"Avoid the falling number by switching lanes!"<<endl;
	cout<<"Use  A (Left), D (Right), S (Stay)."<<endl;
	while(true){
		int dangerLane = rand() %3;
		cout<<"\nNumber is falling.........."<<endl;
		delay(1000);
		cout<<"Danger in : "<<lanes[dangerLane]<<"Lane!"<<endl;
		cout<<"Your move (A = Left, D = Right, S= Stay): ";
		cin>>move;
		if(move =='a' ||move=='A'){
			if (playerLane>0){
				playerLane--;
			}
		}
		else if (move == 'd'||move =='D'){
			if(playerLane<2){
				playerLane++;
			}
	}
		else if (move!='s'&& move !='S'){
			cout<<"Invalid input . You stayed in your lane."<<endl;
		}
		cout<<"You are now in: "<<lanes[playerLane]<<" lane."<<endl;
		if(playerLane == dangerLane){
			cout<<"ohh no! you got hit by the number!"<<endl;
			break;
		}else{
			cout<<"Nice job !you dodged it."<<endl;
			score++;
		}
	}
	cout<<"\nGAME OVER======"<<endl;
	cout<<"YOUR FINAL SCORE :"<<score<<endl;
	return 0;	
}
