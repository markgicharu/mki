#include<iostream>
using namespace std;


//   Creating a NODE Structure
struct node
{
	int data;
	struct node *next;
};

// Creating a class STACK
class stack
{
	struct node *top;
public:
	stack() // constructure
	{
		top = NULL;
	}
	void push(); // to insert an element
	void pop();  // to delete an element
	void show(); // to show the stack
};
// PUSH Operation
void stack::push()
{
	int value;
	struct node *ptr;
	cout << "nPUSH Operationn"<<endl;
	cout << "Enter a number to insert: "<<endl;
	cin >> value;
	ptr = new node;
	ptr->data = value;
	ptr->next = NULL;
	if (top != NULL)
		ptr->next = top;
	top = ptr;
	cout << "nNew item is inserted to the stack!!!"<<endl;

}

// POP Operation
void stack::pop()
{
	struct node *temp;
	if (top == NULL)
	{
		cout << "nThe stack is empty!!!"<<endl;
	}
	temp = top;
	top = top->next;
	cout << "nPOP Operation........nPoped value is " << temp->data;
	delete temp;
}

// Show stack
void stack::show()
{
	struct node *ptr1 = top;
	cout << "nThe stack isn"<<endl;
	while (ptr1 != NULL)
	{
		cout << ptr1->data << " ->";
		ptr1 = ptr1->next;
	}
	cout << "NULLn";
}

// Main function
int main()
{
	stack s;
	int choice;
	while (1)
	{
		
		cout << "nttSTACK USING LINKED LISTnn"<<endl;
		cout << "1:PUSH\n 2:POP\n 3:DISPLAY STACK\ n4:EXIT"<<endl;
		cout << "nEnter your choice(1-4): "<<endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			s.push();
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.show();
			break;
		case 4:
			return 0;
			break;
		default:
			cout << "Please enter correct choice(1-4)!!";
			break;
		}
	}
	return 0;
}
