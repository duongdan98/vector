#include "Stack.h"
int main()
{
	stack s;
	s.push(5);
	s.push(3);
	int temp = s.pop();
	s.print();
	return 0;
}