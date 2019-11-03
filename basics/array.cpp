#include <iostream>

using namespace std;

int main(){
    int num = 10;
    int arr[num];
    cout<<"Enter "<<num<<" numbers"<<endl;
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<"You have entered"<<endl;
    for(int i=0;i<num;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}