#include<iostream>
using namespace std;
int main() {

int rows = 3 ;
int coloms = 3 ;

char board[rows][coloms] =  { {'o' , 'x' , 'o'},
                           {' ' , 'x' , 'x'} ,
                           {'x' , 'o' , 'o'} } ;

cout<<" here is the tic toc board" <<endl;
 for(int i = 0; i<rows; i++) {
      for(int j = 0; j<coloms; j++)
            cout<<board[i][j];
            cout<<endl;
    }
    cout<<" now x goes to (1,0) "<<endl;
    board[1][0] = 'x';

    for(int i = 0; i<rows; i++) {
      for(int j = 0; j<coloms; j++)
            cout<<board[i][j];
            cout<<endl;

     }
 }
