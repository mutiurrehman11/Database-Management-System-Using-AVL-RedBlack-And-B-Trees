#pragma once
#include<iostream>
using namespace std;

struct ListNode
{
	int line;
	string file;
	ListNode* next=NULL;
};

class List {

public:

	ListNode* head;

	List()
	{
		head = NULL;
	}
	void insert(int a,string b)
	{
		if (head == NULL)
		{
			head = new ListNode;
			head->line = a;
			head->file = b;
		}
		else
		{
			ListNode* curr = head;
			while (curr->next != NULL)
			{
				curr = curr->next;
			}
			curr->next = new ListNode;
			curr = curr->next;
			curr->line = a;
			curr->file = b;
		}
	}
	void print()
	{
		ListNode* cur = head;
		int i = 1;
		while (cur)
		{
			cout << "Data At " << i << " Node : " << cur->line << endl;
			cur = cur->next;
			i++;
		}
	}
	bool isEmpty()
	{
		if (head == NULL)
			return true;
		return false;
	}
	void Delete()
	{
		if (head == NULL)
			return;
		else if (head->next == NULL)
		{
			head = NULL;
			return;
		}
		else
		{
			ListNode* curr = head->next;
			ListNode* prev = head;

			while (curr->next != NULL)
			{
				curr = curr->next;
				prev = prev->next;
			}
			prev->next = NULL;
			delete curr;
		}
	}

	void MakeNULL()
	{
		while (!isEmpty())
		{
			Delete();
		}
	}
	~List()
	{
		MakeNULL();
	}

};
