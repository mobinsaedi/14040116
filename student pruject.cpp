#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	int nationalcode;
	string fathername;
	string ferstname;
	string lastname;
	string  adres;
};

	
	int main()
	{
		student st;
	
		int number;
		cout<<"please enter number of students"<<endl;
		cin>>number;
		
		for (int i=0; i<number; i++)
		{
			cout<<"please enter nationalcode"<<endl;
			cin>>st.nationalcode;
			cout<<"please enter ferstname"<<endl;
			cin>>st.ferstname;
			cout<<"please enter lastname"<<endl;
			cin>>st.lastname;
			cout<<"please enter adres"<<endl;
			cin>>st.adres;
			cout<<"please enter fathername"<<endl;
			cin>>st.fathername;
		
		cout<<"nationalcode:"<<st.nationalcode<<endl;
			
			cout<<"ferstname:"<<st.ferstname<<endl;
			
			cout<<"lastname:"<<st.lastname<<endl;
			
			cout<<"adres:"<<st.adres<<endl;
			
			cout<<"fathername"<<st.fathername<<endl;
		}
			return 0;
	}


