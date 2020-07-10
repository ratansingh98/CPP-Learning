//Reading and writing into file
#include<iostream>

constexpr int maxbuffer =1024;
using namespace std;

int main(){
    const char * filename = "myfile.txt";
    const char * information = "lorem ipsum dolor sit amet\n";

    FILE * fh =fopen(filename,"w"); //Open file handler in write mode
    for(int i=0; i<50;i++){
        fputs(information,fh);
    }
    fclose(fh);

    FILE * fh1 =fopen(filename,"a"); //Open file handler in append mode
    for(int i=0; i<50;i++){
        fputs(information,fh1);
    }
    fclose(fh1);

    char buf[maxbuffer];
    FILE *fh2 =fopen(filename,"r"); //Open file handler in read mode
    while(fgets(buf,maxbuffer,fh)){

        fputs(buf,stdout);
    }
    fclose(fh);
    return 0;
}