#include <iostream>
#include <string>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){}
    
    friend class Superman;
    friend class Spiderman;
    
protected:
    Man(const string & name, const int & age)
    : _name(name), _age(age){}
    void run(){puts("I can run");}
    int getAge(){return _age;}
    
public:
    void sayName() const;
};

void Man::sayName() const {
    cout << "My name is: " << _name << " and age is: " << _age << endl;
}

//superman

class Superman : public Man{
    bool flight;
public:
    Superman(string name) : Man(name, 26){}
    void run(){printf("I can run at light speed %d\n", _age);}
};

//sipderman

class Spiderman : public Man{
    bool webbing;
public:
    Spiderman(string name) : Man(name, 19){}
    void run(){printf("I can run at light speed %d\n", _age);}
};

int main()
{
    
    Superman clark("Kent");
    clark.sayName();
    clark.run();
    
    
    Spiderman peter("peter");
    peter.sayName();
    peter.run();
    return 0;
}
