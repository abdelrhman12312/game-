#include<iostream>
#include<string>
  using namespace std ;

int main() {
string word1 ="game"; // diffrent ways to deal with string init
string word2("Over ");
string word3(3,'!');
 string phrase = word1 + " " +  word2 + word3 ; //making a phrase from a diffrent words

 cout<< " the phrase is " << phrase <<"\n";
 cout<< " the phrase has " << phrase.size()<<endl; //phrase size object

 for( unsigned int i = 0 ; i<phrase.size(); i++)
    cout<< " the phrase chars are " << phrase[i]<<endl;

    cout<<"the over  siquace begins at location : "<<endl;
    cout<<phrase.find("over");

    if(phrase.find("eggbutt")== string::npos) //if the string dont exist 
        cout<<"\n the word u looked for is not here "<<endl;
    else cout<<"  \n am here " ;
    phrase.erase(4,5); //erasing  5 chars starts from the 4th char
    cout<<phrase<<endl;
    phrase.erase(4); //erase every thing up from the 4th char
    cout<<phrase<<endl;
    phrase.erase(); // erase all the phrase
    if(phrase.empty()) // checks if the phrase is more
        cout<<" the phrase is no more "<<endl;
}
