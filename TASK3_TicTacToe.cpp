#include <iostream>
using namespace std;
char board [3][3] ={
{' ',' ', ' '},
{' ',' ',' ',},
{' ',' ',' ',},
};void displayboard() {
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | "; 
        }
        cout << endl;
        if (i < 2) cout << "---+---+---" << endl; 
    }
    cout << endl;
}

    bool checkwin(char player){
     for(int i=0;i<3;i++){
         if((board[i][0]==player && board[i][1] == player && board[i][2] == player)||
           (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;
     }
           if((board[0][0]==player && board[1][1] == player && board[2][2] == player)||
           (board[0][2] == player && board[1][1] == player && board[2][0] == player))
             return true;
          return false;
    }
         bool checkDraw(){
             for(int i=0;i<3;i++)
               for(int j=0;j<3;j++)
                 return false;
         return true;
         }
int main(){
          char currentplayer ='X';
int position;
char playAgain;
do{
        for(int i=0; i<3; i++)
          for(int  j=0; j<3; j++)
            board[i][j] = ' ';
while(true){
      displayboard();
          cout<<"player"<<currentplayer<<", enter position(1-9):";
          cin>>position;

  if(position < 1|| position >9){
   cout<<"invalid position try again.\n";
   continue;
  }
      int row =(position-1)/3;
      int col =(position-1)%3;
if(board[row][col] != ' '){
       cout<<"Position already taken! try again.\n";
       continue;
}
       board[row][col] = currentplayer;

        if(checkwin(currentplayer)){
         displayboard();
            cout<< "player" <<currentplayer <<" win!\n";
             break;
        }
          if(checkDraw()){
          displayboard();
          cout<<"It's a draw!\n";
        break;
          }
             currentplayer =(currentplayer == 'X')?'0':'X';
}
     cout<<"playAgain? (y/n)";
       cin>> playAgain;
} while( playAgain == 'y'|| playAgain == 'y');
return 0;
}
              
