#include<iostream>
using namespace std;


class Game{
	char board[3][3] = {{' ' , ' ' , ' '},{' ' ,' ', ' '},{' ' , ' ' , ' '}};
	

	public:
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
			board[locx][locy]=xo;
			return 0;
		}



};

int main(){
	Game g1;
	g1.display();
	g1.insert('X',2,2);
	g1.display();
	return 0;
}
