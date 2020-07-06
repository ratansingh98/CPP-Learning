#include<iostream>
#include<string>

using namespace std;

class Phone{
    string _name = "";
    string _os ="";
    int _price =0;

    public:
        Phone(); //Default Constructor
        Phone(const string &name,const string &os, const int &price); //Constructor with parameter
        Phone (const Phone &); //Copy constructor
        string getOs(){return _os;};

        ~Phone(); //destructor
};


// Overriding default constructor
Phone::Phone() : _name(),_os("Android"),_price(){
    puts("Default constructor");
}

// Overriding parameter constructor
Phone::Phone(const string &name,const string &os, const int &price): _name(name),_os(os),_price(price){
    puts("This is parameter constructor");
}

// Overriding copy constructor
Phone::Phone(const Phone & values) {
    puts("Overwrite copy constructor");
    _name = values._name;
    _os = "Skinned-"+values._os;
    _price = values._price;
}

Phone::~Phone(){
    printf("Destructor called for %s\n",_os.c_str());
}
int main()
{
    Phone samsungA71;
    cout<<samsungA71.getOs()<<endl;


    Phone samsungA51("Samsung A51","Android 10",799);
    cout<<samsungA51.getOs()<<endl;

    Phone OnePlus = samsungA51; //Calls copy constructor
    cout<<OnePlus.getOs()<<endl;

    return 0;
    
} 