#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

 int main() {
   int score = 0 ; // each time u guess it rihgt a 5 is increased
   enum feilds{ WORD , HINT , NUM_FILEDS};
   const int num_words = 5;
   const string words[num_words][NUM_FILEDS] = {

    {"wall","Do you feel you’re banging your head against something?"} ,
    {"glasses", "These might help you see the answer."},
    {"labored", "Going slowly, is it?"},
    {"persistent", "Keep at it."},
    {"jumble", "It’s what the game is all about."}
   };
  //Next, I pick a random word from my choices.
  srand(static_cast<unsigned int >(time(0)));
  int choice = (rand()%num_words);
  string theWord = words[choice][WORD];
  string theHint = words[choice][HINT];
  // creating the jumbled word
  string jumble = theWord ;
  int length = jumble.size();
  for(int i =0 ; i<length; i++) {
    int index1 = (rand() % length);
    int index2 = (rand() % length);
    char temp = jumble[index1];
    jumble[index1] = jumble[index2];
    jumble[index2] = temp;
  }
    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter ’ hint ’ for a hint.\n";
    cout << "Enter ’ quit ’ to quit the game.\n\n";
    cout << "The jumble is: " << jumble;
    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;
    while((guess!= theWord) && (guess!= " quit "))
        {
            if(guess == "hint") {
               cout<<theHint;
               
             }
            else
              cout<<" Sorry thats a wrong gusess "<<endl;
        cout<<" your guess is " <<endl;
        cin>>guess;
    }
if (guess == theWord)
    {
    cout << "\nThat’s it! You guessed it!\n";
    }
    cout << "\nThanks for playing.\n";
    return 0;
    }
