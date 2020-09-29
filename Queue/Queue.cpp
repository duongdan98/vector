#include "Queue.h"
int main()
{
	Queue q;
	q.push(5);
	q.push(3);
	int temp = q.pop();
	q.print();
	return 0;
}
