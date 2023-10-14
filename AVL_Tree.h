#pragma once
#include<iostream>
#include"Queue.h"
#include"Linked_List.h"
using namespace std;

ListNode* returner = NULL;

template<class T>

struct Node
{
	T data;
	List obj;
	int Height;
	Node<T>* Left = NULL;
	Node<T>* Right = NULL;
};

template<class T>
class AVL
{
	Node<T>* root;
public:
	AVL()
	{
		root = NULL;
	}
	int getHeight(Node<T>* P)
	{
		if (P == NULL)
			return -1;
		else
			return P->Height;
	}
	int Max(int a, int b)
	{
		if (a > b)
			return a;
	}



	Node<T>* LL(Node<T>* ptr)
	{
		Node<T>* K2;
		K2 = ptr->Right;
		ptr->Right = K2->Left;
		K2->Left = ptr;
		ptr->Height = Max(getHeight(ptr->Left), getHeight(ptr->Right)) + 1;
		K2->Height = Max(getHeight(K2->Right), ptr->Height) + 1;
		return K2;
	}
	Node<T>* RR(Node<T>* ptr)
	{
		Node<T>* K2;
		K2 = ptr->Left;
		ptr->Left = K2->Right;
		K2->Right = ptr;
		ptr->Height = Max(getHeight(ptr->Left), getHeight(ptr->Right)) + 1;
		K2->Height = Max(getHeight(K2->Right), ptr->Height) + 1;
		return K2;
	}
	Node<T>* LR(Node<T>* ptr)
	{
		ptr->Right = RR(ptr->Right);
		return LL(ptr);
	}
	Node<T>* RL(Node<T>* ptr)
	{
		ptr->Left = LL(ptr->Left);
		ptr = RR(ptr);
		return ptr;
	}

	void Insert(T a,string f,int l)
	{
		root = Add(f,l,a, root);
	}
	Node<T>* Add(string f,int l,T X, Node<T>* ptr) {
		if (ptr == NULL)
		{
			ptr = new Node<T>;
			ptr->data = X;
			ptr->obj.insert(l, f);
		}
		else if (ptr->data == X)
		{
			ptr->obj.insert(l, f);
			return ptr;
		}
		else if (X < ptr->data)
		{
			ptr->Left = Add(f,l,X, ptr->Left);
			if (getHeight(ptr->Left) - getHeight(ptr->Right) == 2)
				if (X < ptr->Left->data)
					ptr = RR(ptr);
				else
					ptr = RL(ptr);

		}
		else if (X > ptr->data)
		{
			ptr->Right = Add(f,l,X, ptr->Right);
			if (getHeight(ptr->Right) - getHeight(ptr->Left) == 2)
				if (X > ptr->Right->data)
					ptr = LL(ptr);
				else
					ptr = LR(ptr);
		}
		ptr->Height = Max(getHeight(ptr->Left), getHeight(ptr->Right)) + 1;
		return ptr;
	}

	void Delete(T a)
	{
		root = Remove(a, root);
	}
	Node<T>* Remove(T x, Node<T>* ptr)
	{
		if (ptr == NULL)
		{
			returner = NULL;
			return ptr;
		}
		if (ptr->data == x)
		{
			Node<T>* temp = ptr;
			returner = ptr->obj.head;
			if (ptr->Left == NULL && ptr->Right == NULL)
			{
				ptr = NULL;
				return ptr;
			}
			else if (ptr->Left == NULL&&ptr->Right!=NULL)
			{
				return ptr->Right;
			}
			else if (ptr->Right == NULL)
			{
				return ptr->Left;
			}
			else
			{
				temp = ptr->Right;
				if (temp->Left == nullptr)
				{
					temp->Left = ptr->Left;
					return temp;
				}
				while (temp->Left->Left != nullptr)
				{
					temp = temp->Left;
				}
				Node<T>* tem = temp->Left;
				temp->Left = NULL;
				tem->Left = ptr->Left;
				tem->Right = ptr->Right;
				return tem;
			}
		}
		else if (x < ptr->data)
		{
			ptr->Left = Remove(x, ptr->Left);
			if (getHeight(ptr->Left) - getHeight(ptr->Right) == 2)
				if (x < ptr->Left->data)
					ptr = RR(ptr);
				else
					ptr = RL(ptr);
		}
		else if (x > ptr->data)
		{
			ptr->Right = Remove(x, ptr->Right);
			if (getHeight(ptr->Right) - getHeight(ptr->Left) == 2)
				if (x > ptr->Right->data)
					ptr = LL(ptr);
				else
					ptr = LR(ptr);
		}
		ptr->Height = Max(getHeight(ptr->Left), getHeight(ptr->Right)) + 1;
		return ptr;
	}

	void Display()
	{
		Node<T>* ptr = root;
		Queue<Node<T>*> obj;
		obj.Enqueue(ptr);

		while (!obj.isEmpty())
		{
			Node<T>* a = obj.Dequeue();
			cout << a->data << " ";
			if (a->Left != NULL)
			{
				obj.Enqueue(a->Left);
			}
			if (a->Right != NULL)
			{
				obj.Enqueue(a->Right);
			}
		}
	}

	Node<T>* GET()
	{
		return root;
	}
	~AVL()
	{

	}
};