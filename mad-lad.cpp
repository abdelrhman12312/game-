#include<iostream>
#include<string>

using namespace std ;

string AskText( string propmot) ;
int AaskNumber( string Propmat );
void tellStory( string name  ,  string noun , int number , string bodyPart , string verb);
int main() {

    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";
    string name = AskText("Please enter a name: ");
    string noun = AskText("Please enter a plural noun: ");
    int number =AaskNumber("Please enter a number: ");
    string bodyPart = AskText("Please enter a body part: ");
    string verb = AskText("Please enter a verb: ");
    tellStory(name, noun, number, bodyPart, verb);
return 0;
}
string AskText(string promot)

    {
    string text ;
    cout<<promot;
    cin>>text;
    return text ;
    }
int AaskNumber( string promot)

    {

    int num;
    cout<<promot;
    cin>>num;
    return num ;
    }
void tellStory(string name, string noun, int number, string bodyPart,
string verb)
{
cout << "\nHere’s your story:\n";
cout << "The famous explorer ";
cout << name;
cout << " had nearly given up a life-long quest to find\n";
cout << "The Lost City of ";
cout << noun;
cout << " when one day, the ";
cout << noun;
cout << " found the explorer.\n";
cout << "Surrounded by ";
cout << number;
cout << " " << noun;
cout << ", a tear came to ";
cout << name << "’s ";
cout << bodyPart << ".\n";
cout << "After all this time, the quest was finally over. ";
cout << "And then, the ";
cout << noun << "\n";
cout << "promptly devoured ";
cout << name << ". ";
cout << "The moral of the story? Be careful what you ";
cout << verb;
cout << " for.";
}
