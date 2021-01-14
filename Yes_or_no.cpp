#include<iostream>
#include<vector>
#include<string>

    using namespace std ;
   char askYesNo1(string q);


    int main() {
   char answer1 = askYesNo1("Hello");
    cout << "Thanks for answering: " << answer1 << "\n\n";
    char answer2 = askYesNo1("Do you wish to save your game?");
    cout << "Thanks for answering: " << answer2 << "\n";
    return 0;
    }
     char askYesNo1(string q ) {
     char reponse ;
     cout<<q<<endl;
     do {
        cout<<" enter y or n \n" ;
        cin>>reponse;
     }
     while(reponse != 'y' && reponse != 'n');

     return reponse;
     }
