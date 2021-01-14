#include<iostream>
#include<string>

using namespace std ;

int main()  {

  const int max_items = 10 ;
  string inventory[max_items];
  int numOfitems = 0 ;
  inventory[numOfitems++] = "sword";
  inventory[numOfitems++] = "armor";
  inventory[numOfitems++] =  "shiled";

  for(int i = 0 ; i<numOfitems; i++)
    cout<<" you got a "<< inventory[i]<<endl;

 cout<<" you trade your sword with a pickaxe."<<endl;
 inventory[0] = "pickaxe";

  for(int i = 0 ; i<numOfitems; i++)
    cout<<" you got a "<< inventory[i]<<endl;

    cout<<" you found a healing jar" <<endl;
    if(numOfitems < max_items)
        inventory[numOfitems++] = " healin jar ";
    else
      cout<<" your items are full " <<endl;
}
