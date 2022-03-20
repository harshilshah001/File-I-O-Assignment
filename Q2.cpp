#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    fstream fin("data1.txt");
    int count=0;
    char ch,c='a';
    while(fin)
    {
        fin>>ch;
        if(ch==c)
            count++;
    }
    cout<<"Occurrence="<<count;
    fin.close(); 
    return 0;
}