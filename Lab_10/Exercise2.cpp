#include <iostream>
#include "Stack_char.h"

using namespace std;

int main() {
	Stack_char cstack;		//new stack of chars
	cout << "Function call\t" << "Output\t" << "Stack Contents" << endl; //Top print statement tabbing the titles
	cout << "isEmpty()\t";
	if (cstack.isEmpty()==1)	//print true for empty, false if not.
		cout << "true\t";
	else if (cstack.isEmpty()==0)
		cout << "false\t";
	cstack.print();
	cout << endl;
	cout << "push(A)\t";
	cstack.push('A');			//Stack operations with tabs seperating them
	cout << "\t\t";
	cstack.print();
	cout << endl;				//new line after each operation
	cout << "push(Y)\t";
	cstack.push('Y');
	cout << "\t\t";
	cstack.print();
	cout << endl;
	cout << "size()\t";
	cout << "\t";
	cout << cstack.size();
	cout << "\t";
	cstack.print();
	cout << endl;
	cout << "pop()\t\t";
	cout << cstack.pop();
	cout << "\t";
	cstack.print();
	cout << endl;
	cout << "isEmpty()\t";
	if (cstack.isEmpty()==1)
		cout << "true\t";
	else if (cstack.isEmpty()==0)
		cout << "false\t";
	cstack.print();
	cout << endl;
	cout << "push(D)\t";
	cstack.push('D');
	cout << "\t\t";
	cstack.print();
	cout << endl;
	cout << "top()\t\t";
	cout << cstack.top();
	cout << "\t";
	cstack.print();
	cout << endl;
	cout << "push(T)\t";
	cstack.push('T');
	cout << "\t\t";
	cstack.print();
	cout << endl;
	cout << "pop()\t\t";
	cout << cstack.pop();
	cout << "\t";
	cstack.print();
	cout << endl;
	return 0;
}