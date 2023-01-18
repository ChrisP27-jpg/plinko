#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


int main(int argc, char* argv[]) {
	string setGates = argv[1];
	string ballValues = argv[2];
	
	int x1;
	bool x2;
	bool x3;
	bool x4;
	char answer;
	
	cout << setGates << " " << ballValues << endl;
	cout << setGates;
	
	//Part 1 set the initial gate values
	if (setGates[0] == 'L'){x1 = 1;}
	if (setGates[0] == 'C'){x1 = 2;}
	if (setGates[0] == 'R'){x1 = 3;}
	
	if (setGates[1] == 'L'){x2 = true;}
	else{x2 = false;}
	
	if (setGates[2] == 'L'){x3 = true;}
	else{x3 = false;}
	
	if (setGates[3] == 'L'){x4 = true;}
	else{x4 = false;}
	
	//Part 2 have the balls drop through
	for (int i = 0; i < ballValues.size(); i++){
		
		
		if(x1==1){
			if (x2==true){x2=false; setGates[1]='R'; answer='B';}
			else {x2=true; setGates[1]='L'; answer ='C';}
		}
		else if (x1==2){
			if (x3==true){x3=false; setGates[2]='R'; answer='C';}
			else {x3=true; setGates[2]='L'; answer ='D';}
		}
		else {
			if (x4==true){x4=false; setGates[3]='R'; answer='D';}
			else {x4=true; setGates[3]='L'; answer ='E';}
		}
		
		if (ballValues[i] == '1'){x1--;}
		else{x1++;}
		
		if (x1==4){x1=1;}	
		if (x1==0){x1=3;}
		if (x1 == 1){setGates[0] = 'L';}
		if (x1 == 2){setGates[0] = 'C';}
		if (x1 == 3){setGates[0] = 'R';}
		cout << "->" << setGates;
	}
	cout << " " << answer << endl << endl;
	
	return 0;

}


