/*
  this a turnover now the computer guess the the numbers

  you are playing with skynet be creative!!!


*/

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std ;
int main() {
  int numberOfTries;
  int guess ;
  int theSercretNumber ;
  srand(static_cast<unsigned int>(time(0)));
  bool condition = true ;
 cout<< " enter the secret number "<<endl;
 while(true) {
     cin>>theSercretNumber;
    if(theSercretNumber > 0 &&  100 > theSercretNumber)
      break ;
      else cout<< " fault try a number between 1-100 "<<endl;
  }
     while(guess != theSercretNumber) {
         guess = (guess%100) + 1; //computer guess //constrain skynet guess between 1-100
       numberOfTries++;
       if(guess > theSercretNumber)
          cout<<" too high computer "<<endl;
       if(guess < theSercretNumber)
          cout<<" too low skynet " <<endl;
     }
     cout<<" number of tries "<<numberOfTries<<endl;
     cout<<" i found the number and its "<< guess;
}
