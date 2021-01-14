#include<iostream>
#include <cstdlib>
#include<ctime>

  using namespace std ;

  int main() {

srand(static_cast<unsigned int>time(0))); //makeing a seed for the   random function
int random_number = rand(); // reand returns a random number
int die = (random_number%6) + 1 ; // 
cout<<" the Roller die is " << die <<std;

return 0 ;

  }
