#include <iostream>
#include "Tqueue.h"

using namespace std;

int main()
{
	
	Tqueue<int> s;
	Tqueue<int> a(15);
	for(int i = 0 ; i < 10 ; i++)
	{
		a.push(i + 10);
	}
	for(int i = 0 ; i < 10 ; i++)
	cout << a.pop() << endl;

	cout << "hello" << endl;
	system("pause");
}