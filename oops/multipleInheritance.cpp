// Modifying method of base class in derived class.

#include<iostream>

using namespace std;

class Money{
    public:
        void gotMoney(){puts("Got 5K USD in my account");};
};

class Man{
    string _name;
    int _age;
    Man(){};

    protected:
        Man(const string & name, const int &age)
        :_name(name),_age(age){}

        void run(){puts("I can run");}
    public:
        void sayName() const;
};

void Man::sayName() const{
    cout<<"My name is : "<<_name<<"\nand age is: "<<_age<<endl;
}


//Superman derived class inherited from Man base class
class Superman: public Man{
    bool flight;
    public:
        Superman(string name, int age ): Man(name,age){};
        void run(){puts("I can run at light speed");}
};

//Spiderman derived class inherited from Man and Money base class
class Spiderman: public Man,public Money{
    bool webbing;
    public:
        Spiderman(string name, int age ): Man(name,age){};
        void run(){puts("I can run at normal speed");}
};

int main(){
    //Man ratan("ratan",22); // Cannot create instance of base class Man as it is protected
    

    Superman clark("Kent",26);// Created instance of derived class Superman
    clark.sayName();
    clark.run();
    cout<<endl;

    Spiderman peter("Peter",19);// Created instance of derived class Spiderman
    peter.sayName();
    peter.run();
    peter.gotMoney(); //Got from second inherited class


    return 0;
}