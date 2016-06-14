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
	cout << "PUSH Operation"<<endl;
	cout << "Enter a number to insert: "<<endl;
	cin >> value;
	ptr = new node;
	ptr->data = value;
	ptr->next = NULL;
	if (top != NULL)
		ptr->next = top;
	top = ptr;
	cout << "New item is inserted to the stack!!!"<<endl;

}

// POP Operation
void stack::pop()
{
	struct node *temp;
	if (top == NULL)
	{
		cout << "The stack is empty!!!"<<endl;
	}
	temp = top;
	top = top->next;
	cout << "POP Operation........\n Poped value is " << temp->data;
	delete temp;
}

// Show stack
void stack::show()
{
	struct node *ptr1 = top;
	cout << "The stack is"<<endl;
	while (ptr1 != NULL)
	{
		cout << ptr1->data << " ->";
		ptr1 = ptr1->next;
	}
	//cout << "NULL\n";
}

// Main function
int main()
{
	stack s;
	int choice;
	while (1)
	{
		
		cout << "\n\t\tSTACK USING LINKED LIST\t\n"<<endl;
		cout << "\t1:PUSH\n\t2:POP\n\t3:DISPLAY STACK\n\t4:EXIT"<<endl;
		cout << "Enter your choice(1-4): "<<endl;
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
