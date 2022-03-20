#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    fstream fin("data1.txt");
    int count=0;
    char ch[20],c='a';
    while(fin)
    {
        fin>>ch;
        if(ch[0]=='e')
        count++;
    }
    cout<<"Occurrence="<<count;
    fin.close(); //closing file
    return 0;
}