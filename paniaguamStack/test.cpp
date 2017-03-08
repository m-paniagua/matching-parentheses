#include "cstack.h"

#include <iostream>

#include <cstring>
using namespace std;



/*

You need to include cstack.h because the driver file refers to the CStack class.

You also need need to include standard header files iostream and cstring because

the driver file uses standard library functions such as cin and cout and C-string functions also

*/

bool isValidExpression(CStack&, char*);

/*

This is the prototype of a function implemented later in this file

(this function is not a member function of any class) that determines

if the expression that is its second parameter is a valid G++ expression

and returns true if the expression is valid, false otherwise. This determination

is made using the CStack class, an instance of which is the first parameter.

That parameter is declared by reference but also could be declared by value.

*/


int main(void)    // The driver file has the main function 
{

	char expression[21];    // allocate memory for user string input

	cout << "Enter an expression: ";
	cin >> expression;

	CStack stack1;    // creates an instance of a stack (stack1) using class constructor

	if (isValidExpression(stack1, expression))



		/* This calls the isValidExpression function (which you still need to write) to

		fill the data array of the stack. The parameter is the stack instance stack1 */



		cout << "\nIt's a valid expression" << endl;
	else
		cout << "\nIt's NOT a valid expression" << endl;

	system("pause");
	return 0;
}



/* This ends the main function. Now we (you) have

to write the isValidExpression function. I'll give you

the function header, and then some hints. */



bool isValidExpression(CStack& stackA, char* strExp)

{
	/*bool isValid = true;*/
	char top[20];
	int h = -1;
	for (int i = 0; i < strlen(strExp); i++)
	{
		/*if (strExp[0] == ')' || strExp[0] == ']' || strExp[0] == '}')
		{
			return false;
		}*/
		if (strExp[i] == '(' || strExp[i] == '{' || strExp[i] == '[')
		{
			stackA.Push(strExp[i]);
			h++;
			top[h] = strExp[i];
			
		}
		else if ((strExp[i] == ']' && top[h] == '[') || (strExp[i] == ')' && top[h] == '(') || (strExp[i] == '}' && top[h] == '{'))
		{
			if (!stackA.IsEmpty())
			{
				stackA.Pop(strExp[i]);
				h--;
			}
			else 
			{
				
				return false;
			}
		}
	}
	/*if (stackA.IsEmpty())
	{
		return true;
	}*/

	
}



// end of driver file