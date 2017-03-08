// cstack.cpp, the code for implementation file for stack class

#include "cstack.h"
#include <iostream>
using namespace std;
/*

You need to include cstack.h to supply the prototypes.

You also may need to include standard header files such as

iostream if your implementation of the member functions

use standard library functions such as cin and cout

*/

CStack::CStack()
{
	top = -1;
}

bool CStack::IsEmpty()
{
	return (top == -1);
}

bool CStack::IsFull()
{
	return (top ==  20);
}

int CStack::Top()
{
	return data[top];
}

void CStack::Push(char userInput)
{
	if (IsFull())
	{
		cout << "Stack is full\n";
	}
	else
	{
		top++;
		data[top] = userInput;
	}
}

void CStack::Pop(char userInput)
{
	if (IsEmpty())
		cout << "Stack is empty\n";
	else
	{
		top--;
		//if ((userInput == ']' && data[top] == '[') || (userInput == '}' && data[top] == '{') || (userInput == ')' && data[top] == '('))
		//{
		//	//cout << Top() << " deleted " << endl;
		//	top--;
		//}
		/*else
		{
			top = -1;
		}*/
	}
}
