#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std ;
int main() {
  int numberOfTries;
  int guess ;
  srand(static_cast<unsigned int>(time(0))); //making a random seed
  int randomNumber = rand();
  randomNumber = (randomNumber % 100) + 1;  //making a range between 1-100
  cout<<" enter a number "<<endl;

    while(randomNumber != guess ) {  //making a while loop until finding the right number
   cin>>guess;
    if(randomNumber < guess)
        cout<<"too hight"<<endl;
    else if(randomNumber > guess)
    cout<<" too low "<<endl;
       else
        cout<<" that is the number "<< randomNumber<<endl;
    numberOfTries++;
    }
    cout<<" number of tries "<<numberOfTries<<endl;
  return 0 ;
  }
