// Static make variable and call accessable by any functions or methods.
#include<iostream>

using namespace std;

int lifeUp(){
    static int life =3;
    return life += 1;
}


int lifeUp1(){
    int nonstatic_life =3;
    return nonstatic_life += 1;
}


int main(){ 

    int life= 3;
    int nonstatic_life= 3;

    cout<<"Your starting game life is "<<life<<endl;
    cout<<"Your starting game nonstatic_life is "<<nonstatic_life<<endl;

    life = lifeUp();
    nonstatic_life = lifeUp1();
    printf("Your updated game life is %d\n",life);
    printf("Your updated game nonstatic_life is %d\n",nonstatic_life);
    
    life = lifeUp();
    nonstatic_life = lifeUp1();
    printf("Your updated game life is %d\n",life);
    printf("Your updated game nonstatic_life is %d\n",nonstatic_life);

    return 0;
    
}