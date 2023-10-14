#pragma once
#include<iostream>
using namespace std;


template<class T>
struct node
{
	T data;
	node<T>* next = NULL;
};


template<class T>
class Queue
{

public:
	node<T>* Front = NULL;
	node<T>* Rear = NULL;
	Queue()
	{
		Front = NULL;
		Rear = NULL;
	}
	bool isEmpty()
	{
		if (Front == NULL)
			return true;
		else
			return false;
	}
	void Enqueue(T a)
	{
		if (Front == NULL)
		{
			Front = new node<T>;
			Front->data = a;
			Rear = Front;
		}
		else
		{
			Rear->next = new node<T>;
			Rear = Rear->next;
			Rear->data = a;
		}
	}
	T Dequeue()
	{
		T d;
		if (Front == NULL)
			return 0;
		else if (Front->next == NULL)
		{
			d = Front->data;
			Front = NULL;
			Rear = NULL;

		}
		else
		{
			node<T>* tem = Front;
			Front = Front->next;
			d = tem->data;
			tem = NULL;
			delete tem;
		}
		return d;
	}
	T front()
	{
		if (Front == NULL)
			return 0;
		else
		{
			return Front->data;
		}
	}

};