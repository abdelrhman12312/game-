#include<iostream>
#include<vector>
#include<string>
using namespace std ;

void display(const vector<string>& inventory );

int main() {
    vector<string> inventory ;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shiled");
    display(inventory);

}
void display(const vector<string>& inventory ) {

    cout<<" your items " <<endl;
    for(vector<string>::const_iterator itr = inventory.begin() ;
        itr <inventory.end(); itr++) {
                cout<<*itr<<endl;
    }
}
