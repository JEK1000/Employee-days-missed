//Jason Kildare



#include <iostream>

using namespace std;


void GetNumEmployees(int&); 


int TotalDaysMissed(int&); 


float AverageDaysMissed(int,int); 





int main()
{
	
	
	int employees = 0, totalDaysMissed = 0, daysMissed=0, missedDays=0;
	float average=0.0;
	
	
	
	
GetNumEmployees(employees);
	
	
	
 missedDays = TotalDaysMissed(employees);
	
		cout<<"The total number of employees missed "<<missedDays<<" days of work in the past year."<<endl;
	
	average = AverageDaysMissed(employees,missedDays); 
	
cout<<"\nthe average is "<<average<<endl;
	
	
	return 0;
}




void GetNumEmployees(int &NumOfEmp)
{
	do
	{
	
	cout<<"\nEnter the amount of employees in the company. ";
	cin>>NumOfEmp;
	if (NumOfEmp < 5 || NumOfEmp > 300)
		cout<<"\nPlease enter a number greater than 5 or a number less than 100.\n";

		}
		while (NumOfEmp < 5 || NumOfEmp > 300);
	
}


int TotalDaysMissed(int &daysMissed)
{
	
	int totalMissed = 0;
	
	 for (int i=1; i<= daysMissed; i++)
	 {
	 
	 do
	 {
	 
	
		cout<<"\nHow many days did employee "<<i<<" miss last year ? ";
	 	cin>>daysMissed;
	 	cout<<endl;
	 	
	 		if (daysMissed < 0 || daysMissed > 100)
		cout<<" Please enter a number greater than 0 or a number less than 100.\n";

		}
		while (daysMissed < 0 || daysMissed > 100);
	
	
	totalMissed += daysMissed;
	}

	
	
	return totalMissed;
}


float AverageDaysMissed(int a,int b)
{

	
	return b/a;
	
}
