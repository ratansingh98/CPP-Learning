//mutable permits modification of the class member declared mutable even if the containing object is declared const.
#include <iostream> 
#include <string.h> 

using namespace std;
class Customer 
{ 
    char name[25]; 
    mutable char placedorder[50]; 
    int tableno; 
    mutable int bill; 
public: 
    Customer(char* s, char* m, int a, int p) 
    { 
        strcpy(name, s); 
        strcpy(placedorder, m); 
        tableno = a; 
        bill = p; 
    } 
    void changePlacedOrder(char* p) const
    { 
        strcpy(placedorder, p); 
    } 
    void changeBill(int s) const
    { 
        bill = s; 
    } 
    void display() const
    { 
        cout << "Customer name is: " << name << endl; 
        cout << "Food ordered by customer is: " << placedorder << endl; 
        cout << "table no is: " << tableno << endl; 
        cout << "Total payable amount: " << bill << endl; 
    } 
}; 

int main() 
{ 
    const Customer c1("Pravasi Meet", "Ice Cream", 3, 100); 
    c1.display(); 
    c1.changePlacedOrder("GulabJammuns"); 
    c1.changeBill(150); 
    c1.display(); 
    return 0; 
}