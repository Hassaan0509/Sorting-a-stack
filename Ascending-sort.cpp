#include "pch.h"
#include "Stack.h"

bool stack::AscendingSort(stack& s)
{
	stack s1;
	int x = 0;
	while (!isEmpty())
	{
		x = s.chktop();
		s.pop();
		while (!s1.isEmpty() && x > s1.chktop())
		{
			s.push(s1.chktop());
			s1.pop();
		}
		s1.push(x);
	}
	s = s1;
	return true;
}