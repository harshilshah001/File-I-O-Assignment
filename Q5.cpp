#include<fstream>
#include<iostream>
#include<cstring>
#include <string>
#include <sstream>
using namespace std;

class student
{
	public:
	     int ID; string name;string Location; string Branch;
	     void getdata()
	     {
	     	cout << "Enter Student ID" <<endl;
	     	cin>>ID;
	     	cout << "Enter Student Name" <<endl;
	     	cin>>name;
	     	cout << "Enter Student Location" <<endl;
	     	cin>>Location;
	     	cout<<"Enter Student Branch"<<endl;
	     	cin>>Branch;
	     }
	     void Addrecode()
	     {
	     	fstream f;
	     	student s;
	     	f.open("studentdata.txt", ios::app);
	     	s.getdata();
	     	f << s.ID << "\t" << s.name << "\t" << s.Location << "\t"<< s.Branch << endl;
	     	f.close();
	     }
	     void display()
	     {
	     	int id1;
	     	int count=1;
	     	int flag = 1;
	     	int count1=0;
	     	int num;
	     	string buf,str;
	     	fstream f1;
	     	student s;
	     	cout<< "Enter a student ID:-";
	     	cin >> id1;
	     	f1.open("studentdata.txt", ios::in);
	     	while(getline(f1,buf))
		{
			stringstream ss(buf);
			while(getline(ss,str,'\t'))
	     		{
	     			if(count1 == 0)
	     			{
	     				count1++;
	     				continue;
	     			}
		     		else if(count == 0)
		     		{
		     			  stringstream obj;  
					  obj << str;  
					  obj >> num;  
					  if(num == id1)
					  {
					  	flag = 0;
					  	getline(ss,str,'\t');
					  	cout << "Name:- " << str << "\t";
					  	getline(ss,str,'\t');
					  	cout << "Location:- " << str << "\t";
					  	getline(ss,str,'\t');
					  	cout << "Branch:- " << str << "\t" << endl;
					  	break;
					  }
		     		}
		     		count++;
	     		}
	     		count = 0;
	     	}
	     	if(flag)
	     	{
	     		cout << "Not Found" << endl;
	     	}
	     	f1.close();
	     }
};

int main()
{
	student s1;
	fstream f;
	int choise;
	f.open("studentdata.txt", ios::app);
	while(1)
	{
		cout << "1 : Enter student detail \n2: Find student \n3: Quit\n"; 
		cout << "Enter your choise:- ";
		cin >> choise;
		if(choise == 1)
		{
			s1.Addrecode();
			cout<<"updated!!!"<<endl;
		}
		else if(choise == 2)
		{
			student s2;
			s2.display();
		}		
		else 
		{
			break;
		}
	}
	return 0;
}