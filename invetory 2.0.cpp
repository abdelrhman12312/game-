#include<iostream>
#include<string>
#include<vector>
        using namespace std ;
int main() {
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shiled");
    cout<<" you have " << inventory.size() <<" items "<<endl;
    cout<< " you have : \n";
    for( int i =0; i<inventory.size(); i++)
        cout<<inventory[i]<<endl;
    cout<<" u trade ur sword with axe"<<endl;
    inventory[0] = "axe";
    for(int i =0 ; i<inventory.size(); i++)
        cout<<inventory[i]<<endl;

    cout << "\nYour shield is destroyed in a fierce battle.\n";
    inventory.pop_back();
    cout<<" your items now "<<endl;
    for(int i = 0 ; i<inventory.size(); i++)
        cout<<inventory[i]<<endl;
        cout << "\nYou were robbed of all of your possessions by a thief.";
    inventory.clear();
    if (inventory.empty())
    {
    cout << "\nYou have nothing.\n";
    }
    else
    {
cout << "\nYou have at least one item.\n";
        }
    return 0;

}
