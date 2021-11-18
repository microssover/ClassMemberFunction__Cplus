#include <iostream>

using namespace std;

class Student{
	public:
	double number;
	double midterm;
	double final;
	double homework;
	
	double stdAverage(void);
	void stdMidterm(double mid);
	void stdFinal(double fin);
	void stdHomework(double hom);
};
    
  double Student::stdAverage(void)
  {
  	return (midterm+final+homework) / 2;
  };
  
  void Student::stdHomework(double hom)
  {
  	homework = hom;
  };
  
  void Student::stdMidterm(double mid)
  {
  	midterm = mid;
  };
  
  void Student::stdFinal(double fin)
  {
  	final = fin;
  };

int main()
{
	Student student;
	
	cout<<"---WELCOME TO STUDENT NUMBER SYSTEM---"<<endl;
	
	cout<<"Enter your student number : ";
	cin>>student.number;
	
	cout<<"Enter your midterm : ";
	cin>>student.midterm;
	
	cout<<"Enter your final : ";
	cin>>student.final;
	
    cout<<"Enter your homework : ";
	cin>>student.homework;
	
	cout<<"Midterm : "<<student.midterm<<endl;
	cout<<"Final : "<<student.final<<endl;
	cout<<"Homework : "<<student.homework<<endl;
	
	double average = student.stdAverage();
	
	cout<<"Your average grade is : "<<average<<endl;
	
	
	
	if(average<=99 && average>90)
	{
		cout<<"Your grade is A.";
	} else if(average<90 && average>80)
	{
		cout<<"Your grade is B.";
    } else if(average<80 && average>70)
    {
    	cout<<"Your grade is C";
	} else if(average<70 && average>60)
	{
		cout<<"Your grade is D";
	} else if(average<60 && average>50)
	{
		cout<<"Your grade is E";
	} else if(average<50)
	{
		cout<<"Your grade is F. You failed.";
	}
	
	
	return 0;
}
