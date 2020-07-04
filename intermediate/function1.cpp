// Call by value, Here a copy of variable is passed as parameter
#include<iostream>

using namespace std;

void lifeUp(int life){
    ++life;
    cout<<life<<endl;

}

int main(){
    int life =3;
    lifeUp(life);
    cout<<life<<endl;
    return 0;
}