#include<iostream>
#include<string>
#include<vector>

using namespace std;
struct  Corners{
    float a,b,c,d;
};


ostream& operator<<(ostream& stream,const Corners& corner){
    stream<<corner.a<<" "<<corner.b<<" "<<corner.c<<" "<<corner.d;
    return stream;
}

int main(){
    vector<int> inty;  //It is dynamic array
    inty.push_back(2);
    inty.push_back(3);
    inty.push_back(4);
    inty.push_back(5);

    for (auto i = inty.begin(); i != inty.end(); i++)
    {
        cout<<*i<<endl;
    }
    cout<<endl;
    vector<Corners> corners; //Structure is used as template, class can also be defined here
    corners.push_back({1,2,3,4});
    corners.push_back({5,6,7,8});

    for(int i=0;i<corners.size();i++){
        cout<<corners[i]<<endl;
    }

    return 0;
}