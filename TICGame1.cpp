#include<bits/stdc++.h>
#include<iostream>

using namespace std;

//MacroDefinitions
#define MAX_LENGTH_NAME 50

char board[10]= {'1','2','3','4','5','6','7','8','9'};

int checkOpponent (char choice){
	
//int i =0;
//bool flag = false;
char yourchoice;
 if(choice == 'X'){
	yourchoice ='O';
}
else 
	yourchoice ='X';

	if(board[0] == choice && board[1] == choice /*&& flag == false*/ && board[2]!=yourchoice){
		board[2]=yourchoice;
		return 0;
	
	}
	if (board[2]==choice && board[0] == choice /*&& flag == false*/ && board[1]!=yourchoice ){
		board[1]=yourchoice;
		return 0;
		
	}
	if(board[6]==choice && board[0] == choice /*&& flag == false*/ && board[3]!=yourchoice){
		board[3]=yourchoice;
		return 0;
		
	}
	if(board[3]==choice && board[0] == choice /*&& flag == false*/ && board[6]!=yourchoice){
		board[6]=yourchoice;
		return 0;
	}
	if(board[4]==choice && board[0] == choice /*&& flag == false*/ && board[8]!=yourchoice){
		board[8]=yourchoice;
		return 0;
	}
	if(board[8]==choice && board[0] == choice /*&& flag == false*/ && board[4]!=yourchoice){
		board[4]=yourchoice;
		return 0;
	}
	if(board[1]==choice && board[2] == choice /*&& flag == false*/ && board[0]!= yourchoice){
		board[0] = yourchoice;
		return 0;
	}
	if(board[1]==choice && board[4] == choice /*&& flag == false*/ && board[7]!= yourchoice){
		board[7] = yourchoice;
		return 0;
	}
	if(board[1]==choice && board[7] == choice /*&& flag == false*/ && board[4]!= yourchoice){
		board[4] = yourchoice;
		return 0;
	}
	if(board[2]==choice && board[4] == choice /*&& flag == false*/ && board[6]!= yourchoice){
		board[6] = yourchoice;
		return 0;
	}
	if(board[2]==choice && board[5] == choice /*&& flag == false*/ && board[8] != yourchoice){
		board[8] = yourchoice;
		return 0;
	}
	if(board[2]==choice && board[6] == choice /*&& flag == false*/ && board[4] != yourchoice){
		board[4] = yourchoice;
		return 0;
	}
	if(board[2]==choice && board[8] == choice /*&& flag == false*/ && board[5] != yourchoice){
		board[5] = yourchoice;
		return 0;
	}
	if(board[3]==choice && board[4] == choice /*&& flag == false*/ && board[5] != yourchoice){
		board[5] = yourchoice;
		return 0;
	}
	if(board[3]==choice && board[5] == choice /*&& flag == false*/ && board[4] != yourchoice){
		board[4] = yourchoice;
		return 0;
	}
	if(board[3]==choice && board[6] == choice /*&& flag == false*/ && board[0] != yourchoice){
		board[0] = yourchoice;
		return 0;
	}
	if(board[4]==choice && board[7] == choice /*&& flag == false*/ && board[1] != yourchoice){
		board[1] = yourchoice;
		return 0;
	}
	if(board[4]==choice && board[5] == choice /*&& flag == false*/ && board[3] != yourchoice){
		board[3] = yourchoice;
		return 0;
	}
	if(board[8]==choice && board[5] == choice /*&& flag == false*/ && board[2] != yourchoice){
		board[2] = yourchoice;
		return 0;
	}
	if(board[6]==choice && board[8] == choice /*&& flag == false*/ && board[7] != yourchoice){
		board[7] = yourchoice;
		return 0;
	}
	if(board[4]==choice && board[8] == choice /*&& flag == false*/ && board[0] != yourchoice){
		board[0] = yourchoice;
		return 0;
	}
	if(board[4]==choice && board[6] == choice /*&& flag == false*/ && board[2] != yourchoice){
		board[2] = yourchoice;
		return 0;
	}
	if(board[6]==choice && board[7] == choice /*&& flag == false*/ && board[8] != yourchoice){
		board[8] = yourchoice;
		return 0;
	}
	return 1;
}

int yourRes (char choice){
	
//int i =0;
//bool flag = false;
char yourchoice;
 if(choice == 'X'){
	yourchoice ='O';
}
else 
	yourchoice ='X';

	if(board[0] == yourchoice && board[1] == yourchoice /*&& flag == false*/ && board[2]!= choice){
		board[2]=yourchoice;
		return 0;
	
	}
	if (board[2]==yourchoice && board[0] == yourchoice /*&& flag == false*/ && board[1]!= choice ){
		board[1]=yourchoice;
		return 0;
		
	}
	if(board[6]==yourchoice && board[0] == yourchoice /*&& flag == false*/ && board[3]!= choice){
		board[3]=yourchoice;
		return 0;
		
	}
	if(board[3]==yourchoice && board[0] == yourchoice /*&& flag == false*/ && board[6]!= choice){
		board[6]=yourchoice;
		return 0;
	}
	if(board[4]==yourchoice && board[0] == yourchoice /*&& flag == false*/ && board[8]!= choice){
		board[8]=yourchoice;
		return 0;
	}
	if(board[8]==yourchoice && board[0] == yourchoice /*&& flag == false*/ && board[4]!= choice){
		board[4]=yourchoice;
		return 0;
	}
	if(board[1]==yourchoice && board[2] == yourchoice /*&& flag == false*/ && board[0]!= choice){
		board[0] = yourchoice;
		return 0;
	}
	if(board[1]==yourchoice && board[4] == yourchoice /*&& flag == false*/ && board[7]!= choice){
		board[7] = yourchoice;
		return 0;
	}
	if(board[1]==yourchoice && board[7] == yourchoice /*&& flag == false*/ && board[4]!= choice){
		board[4] = yourchoice;
		return 0;
	}
	if(board[2]==yourchoice && board[4] == yourchoice /*&& flag == false*/ && board[6]!= choice){
		board[6] = yourchoice;
		return 0;
	}
	if(board[2]==yourchoice && board[5] == yourchoice /*&& flag == false*/ && board[8] != choice){
		board[8] = yourchoice;
		return 0;
	}
	if(board[2]==yourchoice && board[6] == yourchoice /*&& flag == false*/ && board[4] != choice){
		board[4] = yourchoice;
		return 0;
	}
	if(board[2]==yourchoice && board[8] == yourchoice /*&& flag == false*/ && board[5] != choice){
		board[5] = yourchoice;
		return 0;
	}
	if(board[3]==yourchoice && board[4] == yourchoice /*&& flag == false*/ && board[5] != choice){
		board[5] = yourchoice;
		return 0;
	}
	if(board[3]==yourchoice && board[5] == yourchoice /*&& flag == false*/ && board[4] != choice){
		board[4] = yourchoice;
		return 0;
	}
	if(board[3]==yourchoice && board[6] == yourchoice /*&& flag == false*/ && board[0] != choice){
		board[0] = yourchoice;
		return 0;
	}
	if(board[4]==yourchoice && board[7] == yourchoice /*&& flag == false*/ && board[1] != choice){
		board[1] = yourchoice;
		return 0;
	}
	if(board[4]==yourchoice && board[5] == yourchoice /*&& flag == false*/ && board[3] != choice){
		board[3] = yourchoice;
		return 0;
	}
	if(board[8]==yourchoice && board[5] == yourchoice /*&& flag == false*/ && board[2] != choice){
		board[2] = yourchoice;
		return 0;
	}
	if(board[6]==yourchoice && board[8] == yourchoice /*&& flag == false*/ && board[7] != choice){
		board[7] = yourchoice;
		return 0;
	}
	if(board[4]==yourchoice && board[8] == yourchoice /*&& flag == false*/ && board[0] != choice){
		board[0] = yourchoice;
		return 0;
	}
	if(board[4]==yourchoice && board[6] == yourchoice /*&& flag == false*/ && board[2] != choice){
		board[2] = yourchoice;
		return 0;
	}
	if(board[6]==yourchoice && board[7] == yourchoice /*&& flag == false*/ && board[8] != choice){
		board[8] = yourchoice;
		return 0;
	}
	return 1;
}

int checkRes (char choice){
	
//int i =0;
//bool flag = false;
char yourchoice;
 if(choice == 'X'){
	yourchoice ='O';
}
else 
	yourchoice ='X';

	if(board[0] == choice && board[1] == choice /*&& flag == false*/ && board[2]== choice){
		return 0;
	}
	if (board[2]==choice && board[0] == choice /*&& flag == false*/ && board[1]== choice ){
		return 0;	
	}
	if(board[6]==choice && board[0] == choice /*&& flag == false*/ && board[3]== choice){
		return 0;
	}
	if(board[3]==choice && board[0] == choice /*&& flag == false*/ && board[6]== choice){
		return 0;
	}
	if(board[4]==choice && board[0] == choice /*&& flag == false*/ && board[8]== choice){
		return 0;
	}
	if(board[8]==choice && board[0] == choice /*&& flag == false*/ && board[4]== choice){
		return 0;
	}
	if(board[1]==choice && board[2] == choice /*&& flag == false*/ && board[0]== choice){
		return 0;
	}
	if(board[1]==choice && board[4] == choice /*&& flag == false*/ && board[7]== choice){
		return 0;
	}
	if(board[1]==choice && board[7] == choice /*&& flag == false*/ && board[4]== choice){
		return 0;
	}
	if(board[2]==choice && board[4] == choice /*&& flag == false*/ && board[6]== choice){
		return 0;
	}
	if(board[2]==choice && board[5] == choice /*&& flag == false*/ && board[8] == choice){
		return 0;
	}
	if(board[2]==choice && board[6] == choice /*&& flag == false*/ && board[4] == choice){
		return 0;
	}
	if(board[2]==choice && board[8] == choice /*&& flag == false*/ && board[5] == choice){
		return 0;
	}
	if(board[3]==choice && board[4] == choice /*&& flag == false*/ && board[5] == choice){
		return 0;
	}
	if(board[3]==choice && board[5] == choice /*&& flag == false*/ && board[4] == choice){
		return 0;
	}
	if(board[3]==choice && board[6] == choice /*&& flag == false*/ && board[0] == choice){
		return 0;
	}
	if(board[4]==choice && board[7] == choice /*&& flag == false*/ && board[1] == choice){
		return 0;
	}
	if(board[4]==choice && board[5] == choice /*&& flag == false*/ && board[3] == choice){
		return 0;
	}
	if(board[8]==choice && board[5] == choice /*&& flag == false*/ && board[2] == choice){
		return 0;
	}
	if(board[6]==choice && board[8] == choice /*&& flag == false*/ && board[7] == choice){
		return 0;
	}
	if(board[4]==choice && board[8] == choice /*&& flag == false*/ && board[0] == choice){
		return 0;
	}
	if(board[4]==choice && board[6] == choice /*&& flag == false*/ && board[2] == choice){
		return 0;
	}
	if(board[6]==choice && board[7] == choice /*&& flag == false*/ && board[8] == choice){
		return 0;
	}
	return 1;
}

int yourmove(char choice){
	int i =0;
//bool flag = false;
char yourchoice;
 if(choice == 'X'){
	yourchoice ='O';
}
else 
	yourchoice ='X';
	
	if(board[4]!= choice && board[4] != yourchoice){
		board[4] = yourchoice;
		return 0;
	}
	if(board[4]== yourchoice){
		if(board[0] == '0'){
			board[0] = yourchoice;
			return 0;
		}
		if(board[2] == '2'){
			board[2] = yourchoice;
			return 0;
		}
		if(board[6] == '6'){
			board[6] = yourchoice;
			return 0;
		}
		if(board[8] == '8'){
			board[8] = yourchoice;
			return 0;
		}
	}
	for(i = 0 ; i<9; i++){
		if(board[i] != 'X' && board[i]!= 'O'){
			board[i] = yourchoice;
			return 0;
		}
	}
	return 1;
}

void drawBoard(char choice,char choice2){
	
	system("cls");
	
	cout<< "you chose: " << choice <<endl;
	cout<<" opponent's choice: "<<choice2<<endl;
 	
	cout << "BOARD" <<endl << endl ;
	
	cout << "| "<< board[0] << " | " << board[1] << " | " << board[2] << " | "<<endl;
	cout << "| "<< board[3] << " | " << board[4] << " | " << board[5] << " | "<<endl;
	cout << "| "<< board[6] << " | " << board[7] << " | " << board[8] << " | "<<endl;
	
}

void gameOptions(){
	cout << "options: "<<endl;
	cout << "1 - Single Player "<<endl;
	cout << "2 - Multi Player"<<endl;
}

int singleplayer(){

	string player1;
	char choice, choice2;
	bool flag = true;
	int mv,k,res,count= 0;
	
	cout<< "Enter the player name : ";
	//cin.getline(name,MAX_LENGTH_NAME);
	cin>>player1;
	
	cout<<"Hi "<<player1<<" !"<<endl;
	
	cout<<"Choose your coin X or O "<<endl;
	cin>>choice;
	
	cout<<"You have choosen: "<<choice << endl;
	if(choice == 'X')
		{
			choice2 == 'O';
			//cout<<choice2 << " is for "<<player2<<endl;
		}
		else {
			choice2 == 'X';
			//cout<<choice2 << " is for "<<player2<<endl;
		}
	
	drawBoard(choice,choice2);
	while(flag){
	cout << " Enter Your move: "<<endl;
	cin>> mv;
	
	k =  mv-1;
	
	board[k] = choice;
	drawBoard(choice,choice2);
	res = checkRes(choice);
	if(res == 0){
		return 0;		
	}
	cout <<endl<< "Computer's Turn" << endl;
	res = yourRes(choice);
	if(res == 0){
		drawBoard(choice,choice2);
		return 1;
	}
	res = checkOpponent(choice);
	if(res == 1){
	res = yourmove(choice);
	drawBoard(choice,choice2);
	}
	else{
		drawBoard(choice,choice2);
	}
	count = 0;
	for(int i = 0; i<9; i++){
		if(board[i] == 'O' || board[i] == 'X')
		count++;
	//	cout<<count<<endl;
	}
	if(count == 9){
	//	cout<<"FALSE";
		flag = false;
		return -1;
	}
	}
}

int multiplayer(){
	
	string player1,player2;
	char choice1,choice2;
	bool flag = true;
	int mv,k,res,count= 0;
	
	cout<<"Enter Player1 Name: "<<endl;
	cin>>player1;
	cout<<"Hi "<<player1<<endl;
	
	cout<<"Enter Player2 Name: "<<endl;
	cin>>player2;
	cout<<"HI "<<player2<<endl;
	

		/*cout<<"Hi "<<player1<<" ,please enter your choice X or O: ";
		cin>>choice1;
		cout<<endl<<"you have choosen: "<<choice1;*/
		choice1 = 'X';
		choice2 = 'O';
	/*	if(choice1 == 'X')
		{
			choice2 == 'O';
			cout<<choice2 << " is for "<<player2<<endl;
		}
		else {
			choice2 == 'X';
			cout<<choice2 << " is for "<<player2<<endl;
		}*/
		drawBoard(choice1,choice2);
	while(flag){	
		cout<<player1 << ", Please Enter your move: ";
		cin>>mv;
		board[mv-1] = choice1;
		drawBoard(choice1,choice2);
		res = checkRes(choice1);
		if(res == 0){
			return 0;		
		}
		cout<<player2 << ", please Enter your move: ";
		cin>>mv;
		board[mv-1] = choice2;
		drawBoard(choice1,choice2);
		res = checkRes(choice2);
		if(res == 0){
			return 1;		
		}
		count = 0;
		for(int i = 0; i<9; i++){
			if(board[i] == 'O' || board[i] == 'X')
				count++;
			//	cout<<count<<endl;
		}
		if(count == 9){
			//	cout<<"FALSE";
			flag = false;
			return -1;
		}
		
	}
	
}

int main(){
	//char choice[2];
	//string player1, player2;
	int Opt , result;
	
	cout<<"Welcome to Tik Tac Toe!!!"<<endl;
	cout << "Game Loading !!"<<endl;
	
	gameOptions();
	
	cout<<"choose your option:"<<endl;
	cin>>Opt;
	
	if(Opt == 1){
		result = singleplayer();
		if(result == 0){
			cout<< "YOU HAVE WON THE MATCH"<<endl;
		}
		else if (result == 1){
			cout << " OOPS!!.....YOU HAVE LOST THIS MATCH :-( "<<endl;
		}
		else {
			cout << " MATCH DRAW !!"<<endl;
		}
	}
	else if(Opt ==2){
		result = multiplayer();
		if(result == 0){
			cout<< "Player1 has WON THE MATCH"<<endl;
		}
		else if (result == 1){
			cout << " Player2 has WON THE MATCH"<<endl;
		}
		else {
			cout << "MATCH DRAW !!"<<endl;
		}
	}
	else
	cout<<"Please enter a valid option"<<endl;

	return 0;

}
