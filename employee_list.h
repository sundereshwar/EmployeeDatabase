//employee class

class Employee
{
Node *head;
public:
Employee() { head = NULL; };
void Print();
int Count();
void Add(int emp_number, string last_name, string first_name, int emp_year_of_service);
void Delete(int emp_number, string last_name, string first_name, int emp_year_of_service);
};

//print command
void Employee::Print()
{

//temporary pointer
Node *tmp = head;

//if empty
if (tmp == NULL)
{
cout << "EMPTY" << endl;
return;
}

//one node in list
if (tmp->Next() == NULL)
{
cout << "Employee #:" << tmp->return_emp_no() << ", Last Name: " << tmp->return_last_name() << ", First Name: " << tmp->return_first_name() << ", Years of Service: " << tmp->year_of_service() << " year(s).";
cout << endl;
cout << "";
}
else

{

//print the list
do
{
cout << "Employee #:" << tmp->return_emp_no() << ", Last Name: " << tmp->return_last_name() << ", First Name: " << tmp->return_first_name() << ", Years of Service: " << tmp->year_of_service() << " year(s).";
cout << endl;
cout << "";
tmp = tmp->Next();
}
while (tmp != NULL);
cout << "\nEnd of Line - Null" << endl;
}
}

//count command
int Employee::Count()
{
//temporary pointer
Node *tmp = head;
int i = 0;
//if empty << "years.";
if (tmp == NULL)
{
cout << "EMPTY" << endl;
return i;
}

//one node in list
if (tmp->Next() == NULL)
{
return 1;
}
else
{

//print the list
do
{
i++;
tmp = tmp->Next();
}
while (tmp != NULL);
return i;
}
}

//add node to the linked list
void Employee::Add(int emp_number, string last_name, string first_name, int year_of_service)
{

//create new node
Node* newNode = new Node();
newNode->SetData(emp_number, last_name, first_name, year_of_service);
newNode->SetNext(NULL);

//create tempoary pointer
Node *tmp = head;
if (tmp != NULL)
{

//if nodes already present move to end of list
while (tmp->Next() != NULL)
{
tmp = tmp->Next();
}

//point last to new
tmp->SetNext(newNode);
}
else
{

//first node in list
head = newNode;
}
}

//delete node from the list
void Employee::Delete(int emp_number, string last_name, string first_name, int emp_year_of_service)
{

//create tempoary pointer
Node *tmp = head;

//no nodes
if (tmp == NULL)
return;

//first node of the list
if (tmp->return_emp_no() == emp_number && last_name.compare(tmp->return_first_name()) == 0 && first_name.compare(tmp->return_last_name()) == 0 && tmp->year_of_service() == emp_year_of_service)
{
head = tmp->Next();
delete tmp;
}
else
{

//move thru the nodes
Node *prev = NULL;
do
{
if (tmp->return_emp_no() == emp_number && last_name.compare(tmp->return_first_name()) == 0 && first_name.compare(tmp->return_last_name()) == 0 && tmp->year_of_service() == emp_year_of_service) break;
prev = tmp;
tmp = tmp->Next();
}
while (tmp != NULL);

//adjust pointers
prev->SetNext(tmp->Next());

//delete current node
delete tmp;
}
}
