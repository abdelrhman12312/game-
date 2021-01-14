#include<iostream>

using namespace std ;


 int radiation( int health );

int main() {
int health = 80 ;
cout<<" your health is "<<health<<endl;
health = radiation(health);
cout<<" your health is " <<health<<endl;
health = radiation(health);
cout<<" your health is " <<health<<endl;
health = radiation(health);
cout<<" your are dead " <<health<<endl;
return 0 ;

}
inline int radiation(int health ) {

return (health/2);

}
