#include<iostream>
using namespace std;

int main()
{ 
	int n;
	int x;
	string name;
	int marks[50];
	cout<<"Enter the number of students: "<<endl;
cin>>n;
for(int j=0;j<n;j++)
{ 
cout<<"Enter the name of student "<<j+1<<endl;
cin>>name;
cout<<"Enter number of subjects: "<<endl;
cin>>x;

marks[x];
cout<<"Enter the marks of student"<<endl;
for(int i=0;i<x;i++)
{ 	
	cin>>marks[i];
} 
	int min = marks[0];
	for(int i=0;i<x;i++)
	{ 
		if(marks[i] < min)
		{ 
			min = marks[i];
		}
	}
	cout<<"The lowest marks is: "<<min<<endl;

	int max;
	max = marks[0];
	for(int i=0;i<x;i++)
	{ 
		if(marks[i] > max)
		{ 
			max = marks[i];
		}
	}
	cout<<"The highest marks is: "<<max<<endl;

	 int average;
	 int sum = 0;
	 for(int i=0;i<x;i++)
	 { 	
	 	sum = sum + marks[i];
	 }
	 average = sum/x;
	 cout<<"The average marks is: "<<average<<endl;

}	
	return 0;
}


