#include<iostream>
using namespace std;

char grid[10] = {'0','1','2','3','4','5','6','7','8','9'};

void board();
int checker();


int main(){
	
	int i, player=1, choice;
	char mark;
	
	do{
		board();
		if(player%2)
	player = 1;
		else
	player = 2;
	
	cout<<"player "<<player<<", enter a number: ";
	cin>>choice;
	
	if(player == 1)
	mark = 'X';
	else
	mark = 'O';
	
	
	//statements to mark user input for player 1 and 2.
	if(choice == 1 && grid[1]=='1')
	grid[1]=mark;
	
	else if(choice == 2 && grid[2]=='2')
	grid[2]=mark;
	
	else if(choice == 3 && grid[3]=='3')
	grid[3]=mark;
	
	else if(choice == 4 && grid[4]=='4')
	grid[4]=mark;
	
	else if(choice == 5 && grid[5]=='5')
	grid[5]=mark;
	
	else if(choice == 6 && grid[6]=='6')
	grid[6]=mark;
	
	else if(choice == 7 && grid[7]=='7')
	grid[7]=mark;
	
	else if(choice == 8 && grid[8]=='8')
	grid[8]=mark;
	
	else if(choice == 9 && grid[9]=='9')
	grid[9]=mark;	
	
	else{
		cout<<"invalid move! Please only use a number shown in the box";
		player--;
		cin.ignore();
	cin.get();
	}
	
	i=checker();
	player++;
} while(i==-1);
board();
if(i==1)		//check to see which player wins
cout<<"player "<< --player <<" wins!"<<endl;
else			//if value of i is anything other than 1 the game is a draw
cout<<"The game is a draw! "<<endl;
cin.ignore();
	cin.get();
return 0;	
	}


int checker(){
	if(grid[1]==grid[2] && grid[2]==grid[3])		//first line across
	return 1;
	
	else if(grid[4]==grid[5] && grid[5]==grid[6])		//second line across
	return 1;
	
	else if(grid[7]==grid[8] && grid[8]==grid[9])		//third line across	
	return 1;
	
	else if(grid[1]==grid[4] && grid[4]==grid[7])			//first column
	return 1;
	
	else if(grid[2]==grid[5] && grid[5]==grid[8])			//second column
	return 1;
	
	else if(grid[3]==grid[6] && grid[6]==grid[9])			//third column
	return 1;
	
	else if(grid[1]==grid[5] && grid[5]==grid[9])		 	//left to right diagonal
	return 1;
	
	else if(grid[3]==grid[5] && grid[5]==grid[7])			//right to left diagonal
	return 1;
	
	else if(grid[1] != '1' && grid[2] != '2' && grid[3] != '3' && grid[4] != '4' && grid[5] != '5' && grid[6] != '6' && grid[7] != '7' && grid[8] != '8' && grid[9] != '9')
	return 0;				//error check
	
	else			//value if it is a draw
	return -1;
}

void board(){
	system("cls");
	
	cout<<"Tic Tac Toe"<<endl;
	
	cout<<"player 1 = X"<<endl;
	cout<<"player 2 = O"<<endl<<endl;
	
	cout << "     |     |     " << endl;
	cout << "  " << grid[1] << "  |  " << grid[2] << "  |  " << grid[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << grid[4] << "  |  " << grid[5] << "  |  " << grid[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << grid[7] << "  |  " << grid[8] << "  |  " << grid[9] << endl;

	cout << "     |     |     " << endl << endl;
	
}
