#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    fstream fin("data1.txt");
    int count=0;
    char ch[20],c[20];
    strcpy(c,"the");
    while(fin)
    {
        fin>>ch;
        if(strcmp(ch,c)==0)
        count++;
    }
    cout<<"Occurrence="<<count;
    fin.close(); 
    return 0;
}