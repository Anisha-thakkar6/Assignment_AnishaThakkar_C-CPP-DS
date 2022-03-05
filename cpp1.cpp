#include<iostream>
using namespace std;
class Employee{
	double sal;
	int hrs;
public:
	Employee() {}
	void getinfo(){
		cout<<"Enter the salary : ";cin>>sal;
		cout<<"Enter the number of hours: ";cin>>hrs;
	}
	void AddSal(){
		if(sal<500) sal+=10;
	}
	void AddWork(){
		if(hrs>6) sal+=5;
	}
	void disp(){
		cout<<sal;
	}
};

int main()
{
	int n;
	cout<<"Enter the number of employees: ";
	cin>>n;
	Employee* emp=new Employee[n];
	for (int i=0;i<n;i++){
		emp[i].getinfo();
		emp[i].AddSal();
		emp[i].AddWork();
	}
	for (int i=0;i<n;i++){
		cout << "\nThe final salary of employee "<<i+1<<" is:";
		emp[i].disp();
	}
}
