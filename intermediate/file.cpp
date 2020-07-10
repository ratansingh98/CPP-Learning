//Create, Rename and Delete file
#include<iostream>

using namespace std;

int main(){

    static const char* orignalfile= "orginalFile.txt";
    static const char* edittedfile= "editedFile.txt";

    FILE * fh= fopen(orignalfile,"w"); //Open File
    fclose(fh); //close File

    rename(orignalfile,edittedfile); //Rename file
    
    remove(edittedfile);  //remove file
    //Remove file
    return 0;
}