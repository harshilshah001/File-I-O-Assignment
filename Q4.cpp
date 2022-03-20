#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    fstream fin("data1.txt");
    int count=0;
    char ch[20];
    while(fin)
    {
        fin>>ch;
        int l = strlen(ch);
        if(ch[l-1]=='s')  
            count++;
    }
    cout<<"Occurrence="<<count;
    fin.close();
    return 0;
}