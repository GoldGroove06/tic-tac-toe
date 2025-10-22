#include<iostream>
using namespace std;


class Game{
	char board[3][3] = {{' ' , ' ' , ' '},{' ' ,' ', ' '},{' ' , ' ' , ' '}};

	public:
		int empty = 9;
		int display(){
			for (int i = 0; i<=2; i++){
                       		for (int j = 0; j <= 2; j++){
					if (j== 2){
						cout <<board[i][j];
					}
					else{
                        			cout << board[i][j] << '|';
                        		}
				}
                        	cout << endl;
				if (i!=2){
                        		cout << "-----";
                        		cout << endl;
				}
                	}
			return 0;
		}

		int insert(char xo, int locx, int locy){
			if (board[locx][locy] == ' '){
				board[locx][locy]=xo;
				empty--;
			}
			else{
				cout << "enter again";
			}
			return 0;
		}
		int checkGame(){
			for (int i; i<=2; i++){
				if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' '){
					empty = 0;
					cout << board[i][0] << "won the game";
				}
			}
			for (int j; j<=2; j++){
				if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' '){
                                        empty = 0;
                                        cout << board[j][0] << "won the game";
                                }
			}
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' '){
                                        empty = 0;
                                        cout << board[0][0] << "won the game";
                                }
			if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' '){
                                        empty = 0;
                                        cout << board[0][2] << "won the game";
                                }
		}





};

int main(){
	Game g1;
	g1.display();
	bool isX = true;
	while(g1.empty >0 ){
		char input;
		int x;
		int y;
		isX ? input = 'X' : input = 'O';
		isX ? cout << "X turn" : cout << "O turn";
		cout << endl << "enter x";
		cin >> x;
		cout << endl << "enter y";
		cin >> y;
		g1.insert(input,x,y);
		g1.display();
		isX = !isX;
		g1.checkGame();
	}
	g1.display();
	return 0;
}
