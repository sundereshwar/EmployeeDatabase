#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;

#include "node.h"
#include "employee_list.h"

int main()
{
//new list
Employee list;

//append nodes to list
string line;
ifstream fin;

//reading the data from file Employee.txt
fin.open("Employee.txt");
if (fin.is_open())
{
while (getline(fin, line))
{
stringstream ss(line);
int emp_number, emp_year_of_service;
string first_name, last_name;
ss >> emp_number;
ss >> last_name;
ss >> first_name;
ss >> emp_year_of_service;

//loading three records from the file employee.txt to the list
list.Add(emp_number, last_name, first_name, emp_year_of_service);
}
}

//command utility
string command;
cout << "Enter desired command -> Add, Remove, Count, Print, Quit: ";
cin >> command;
while (command != "Quit")
{

//print
if (command == "Print")list.Print();

//add
if (command == "Add")
{
int emp_number, emp_year_of_service;
string first_name, last_name;
cout << "Enter Employee Number: ";
cin >> emp_number;
cout << "Enter Last Name: ";
cin >> last_name;
cout << "Enter First Name: ";
cin >> first_name;
cout << "Enter Year of Service: ";
cin >> emp_year_of_service;
list.Add(emp_number, first_name, last_name, emp_year_of_service);
}

//remove
if (command == "Remove")
{
int emp_number, emp_year_of_service;
string first_name, last_name;
cout << "Enter Employee Number: ";
cin >> emp_number;
cout << "Enter Last Name: ";
cin >> last_name;
cout << "Enter First Name: ";
cin >> first_name;
cout << "Enter Year of Service: ";
cin >> emp_year_of_service;
list.Delete(emp_number, first_name, last_name, emp_year_of_service);
}

//count
if (command == "Count")cout << "\nThe Number of employees in the list is: " << list.Count() << "\n";

//enter command again
cout << "\nEnter desired command -> Add, Remove, Count, Print, Quit: ";
cin >> command;
}
}
