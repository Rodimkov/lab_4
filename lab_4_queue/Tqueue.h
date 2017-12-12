#pragma once

template <class T>
class Tqueue
{
private:
	int first;
	int last;
	int size;
	int Maxsize;
	T *mas;
public:
	Tqueue(int s=100);
	~Tqueue(void);
	bool isempty();
	bool isfull();
	void push(T elem);
	T pop();
	T top();
};

template <class T>
Tqueue<T>::Tqueue(int s)
{
	Maxsize = s;
	mas = new T[s];
	first = 0;
	last = -1;
	size = 0;
}

template <class T>
Tqueue<T>::~Tqueue(void)
{
	delete []mas;
}

template <class T>
bool Tqueue<T>::isempty()
{
	return size == 0;
}

template <class T>
bool Tqueue<T>::isfull()
{
	return size == Maxsize; 
}

template <class T>
void Tqueue<T>::push(T elem)
{
	if(isfull()) 
		throw -1;
	last = ++last % Maxsize;
	mas[last] = elem;
	size++;
}


template <class T>
T Tqueue<T>::pop()
{
	if(isempty())
		throw -1;
	T tmp = mas[first];
	first = ++first % Maxsize;
	size--;
	return tmp;
}

template <class T>
T Tqueue<T>::top()
{	
	if(isempty())
		throw -1;
	return mas[first];
}
