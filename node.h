//node class

class Node
{
int emp_number;
string emp_last_name;
string emp_first_name;
int emp_year_of_service;
Node* next;

public:
//constructor
Node() {};

//assigning employees details
void SetData(int e_no, string last_name, string first_name, int year_of_service)
{
emp_number = e_no;
emp_last_name = last_name;
emp_first_name = first_name;
emp_year_of_service = year_of_service;
};

//setting the next node
void SetNext(Node* aNext)
{
next = aNext;
};

//returning the data in the node
int return_emp_no() { return emp_number; };
string return_last_name() { return emp_last_name; };
string return_first_name() { return emp_first_name; };
int year_of_service() { return emp_year_of_service; };
Node* Next() { return next; };
};
