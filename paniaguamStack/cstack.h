// cstack.h, the code for specification file for stack class

class CStack {



	/*

	class is a keyword telling C++ a class is being defined.

	CStack is the name of the class. Any legal name will do,

	though the name should describe the class. The open curly

	brace starts the body of the class, just as it does a structure

	*/



public:



	/*

	Public is keyword meaning accessible from outside the class.

	Class members, whether variables or functions, are private

	unless specifically declared otherwise. The following member

	functions are public, so the public keyword is necessary

	*/



	/*

	Now we start defining the member functions.

	Note that they are prototypes only; none have a body.

	The body is supplied in the implementation file

	*/



	CStack();		// Constructor. Always public
	

	bool IsEmpty();  // this function could be private

	bool IsFull();      // ditto



						// here you would continue to define (prototype) the additional member functions

	void Push(char);
	void Pop(char);
	int Top();

private:



	/*

	Private is a keyword meaning not accessible from outside the class.

	Member variables almost always are private.

	Next, the member variables are declared

	*/



	int top;

	char data[21];

};
