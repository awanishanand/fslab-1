//============================================================================
// Name        : fslab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
#include<sstream>
using namespace std;
class student{
	int semester;
	string name;
	string usn;
	string branch;
public:
	string buffer;
	void read()
	{
		cout<<"enter name";
		cin>>name;
		cout<<"enter usn";
		cin>>usn;
		cout<<"enter sem";
		cin>>semester;
		cout<<"enter branch";
		cin>>branch;
	}
	void pack()
	{
		string str1,temp;
		stringstream out;
		out<<semester;
		str1=out.str();

		string buffer;
		temp+=usn+'|'+name+'|'+branch+'|'+str1;
		for(int i=buffer.length();i<100;i++)
			temp+='$';
			buffer+=temp;
		cout<<buffer;
		fstream fp;
		fp.open("data1.txt",ios::out|ios::app);
		fp<<buffer;
		fp.close();
	}
	void write()
	{
		cout<<"\n from write";
	}
};
int main() {
	student ob;
	int choice;
	cout<<"1.insert 2.search 3.delete 4.modification"<<endl;
	cout<<"choice";
	cin>>choice;
	switch(choice)
	{
	case 1:
		   ob.read();
		   ob.pack();
		   ob.write();
		   break;
	}

	return 0;
}
