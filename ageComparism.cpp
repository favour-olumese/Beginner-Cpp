/*
Write a program that sets up Date structure (integer for month, day, and year) and a Person structure
(name and birthday using the Date struct). The program should have a function (FillPerson) that asks the user to enter
all the name and birthday information

You should also have a function called WritePerson that writes out all the person information.

Your program should haven two Person variables. it should fill these two variables and then call a function called 
WhoIsOlder, which is sent booth Person variables. The function determines who is older and writes the age status to the screen.

*/

#include <iostream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

struct Person
{
	char name[20];
	Date birthday;		// Creating a variable with type Date
};


// PROTOTYPE
Person FillPerson();
void WritePerson(Person, Person);
void WhoIsOlder(Person, Person);


// MAIN FUNCTION
int main()
{
	Person firstData, secondData;

	firstData = FillPerson();
	secondData = FillPerson();
	
	WritePerson(firstData, secondData);
	WhoIsOlder(firstData, secondData);

	system("pause");
	return 0;
};


Person FillPerson()		// Function to request user's details
{
	Person data;
	cout<<"Please, enter your first name: ";
	cin.getline(data.name, 20);
	cout<<"Please, enter your birthday information \n";
	cout<<"Day: ";
	cin>>data.birthday.day;
	cout<<"Month: ";
	cin>>data.birthday.month;
	cout<<"Year: ";
	cin>>data.birthday.year;
	cin.ignore();

	return data;
};

void WritePerson(Person firstData, Person secondData)		// Function to write out user's details
{
	cout<<"First Person Data \n";
	cout<<"Name: "<<firstData.name<<endl;
	cout<<"Birth month: "<<firstData.birthday.month<<endl;
	cout<<"Birth day: "<<firstData.birthday.day<<endl;
	cout<<"Birth year: "<<firstData.birthday.year<<endl;

	cout<<"Second Person Data \n";
	cout<<"Name: "<<secondData.name<<endl;
	cout<<"Birth month: "<<secondData.birthday.month<<endl;
	cout<<"Birth day: "<<secondData.birthday.day<<endl;
	cout<<"Birth year: "<<secondData.birthday.year<<endl;
};


void WhoIsOlder(Person firstData, Person secondData)		// Function to check who is older
{

	// Year Comparism
	if(firstData.birthday.year < secondData.birthday.year)
	{
		cout<<firstData.name<<" is older"<<endl;
	}

	else if(firstData.birthday.year > secondData.birthday.year)
	{
		cout<<secondData.name<<" is older"<<endl;
	}

	else
	{
		// Month Comparism if year is same
		if(firstData.birthday.month < secondData.birthday.month)
		{
			cout<<firstData.name<<" is older"<<endl;
		}

		else if(firstData.birthday.month > secondData.birthday.month)
		{
			cout<<secondData.name<<" is older"<<endl;
		}

		else
		{
			// Day Comparism if month is same
			if(firstData.birthday.day < secondData.birthday.day)
			{
				cout<<firstData.name<<" is older"<<endl;
			}

			else if(firstData.birthday.day > secondData.birthday.day)
			{
				cout<<secondData.name<<" is older"<<endl;
			}

			else
			{
				cout<<"Both of you share the same birthday \n";
			}
		}
	}

}
