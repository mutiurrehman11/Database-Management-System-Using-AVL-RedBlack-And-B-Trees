#pragma once
#include<iostream>
#include"Linked_List.h"
using namespace std;

ListNode* ret=NULL;

template <class T>

struct RBNode {
	T data;
	List obj;
	char color;
	RBNode<T>* parent=NULL;
	RBNode<T>* left=NULL;
	RBNode<T>* right=NULL;

	RBNode(T a)
	{
		data = a;
		color = 'r';
	}

};

template<class T>

class Red_Black_Tree
{
	RBNode<T>* root=NULL;

public:
	Red_Black_Tree()
	{
		root = NULL;
	}

	void rbTransplant(RBNode<T>* u, RBNode<T>* v) {
		if (u->parent == NULL) {
			root = v;
		}
		else if (u == u->parent->left) {
			u->parent->left = v;
		}
		else {
			u->parent->right = v;
		}
		v->parent = u->parent;
	}

	RBNode<T>* successor(RBNode<T>* p)
	{
		RBNode<T>* y = NULL;
		if (p->left != NULL)
		{
			y = p->left;
			while (y->right != NULL)
				y = y->right;
		}
		else
		{
			y = p->right;
			while (y->left != NULL)
				y = y->left;
		}
		return y;
	}

	void deleteNode(RBNode<T>* node, T x)
	{
		if (root == NULL)
		{
			cout << "\nEmpty Tree.";
			return;
		}
		RBNode<T>* p;
		p = root;
		RBNode<T>* y = NULL;
		RBNode<T>* q = NULL;
		int found = 0;
		while (p != NULL && found == 0)
		{
			if (p->data == x)
			{
				ret = p->obj.head;
				found = 1;
				return;
			}
			if (found == 0)
			{
				if (p->data < x)
					p = p->right;
				else
					p = p->left;
			}
		}
		if (found == 0)
		{
			ret = NULL;
			cout << "\nElement Not Found.";
			return;
		}
		else
		{
			if (p->left == NULL || p->right == NULL)
				y = p;
			else
				y = successor(p);
			if (y->left != NULL)
				q = y->left;
			else
			{
				if (y->right != NULL)
					q = y->right;
				else
					q = NULL;
			}
			if (q != NULL)
				q->parent = y->parent;
			if (y->parent == NULL)
				root = q;
			else
			{
				if (y == y->parent->left)
					y->parent->left = q;
				else
					y->parent->right = q;
			}
			if (y != p)
			{
				p->color = y->color;
				p->data = y->data;
			}
			if (y->color == 'b')
			{
				RBNode<T>* s;
				while (p != root && p->color == 'b')
				{
					if (p->parent->left == p)
					{
						s = p->parent->right;
						if (s->color == 'r')
						{
							s->color = 'b';
							p->parent->color = 'r';
							leftRotate(p->parent);
							s = p->parent->right;
						}
						if (s->right->color == 'b' && s->left->color == 'b')
						{
							s->color = 'r';
							p = p->parent;
						}
						else
						{
							if (s->right->color == 'b')
							{
								s->left->color = 'b';
								s->color = 'r';
								rightRotate(s);
								s = p->parent->right;
							}
							s->color = p->parent->color;
							p->parent->color = 'b';
							s->right->color = 'b';
							leftRotate(p->parent);
							p = root;
						}
					}
					else
					{
						s = p->parent->left;
						if (s->color == 'r')
						{
							s->color = 'b';
							p->parent->color = 'r';
							rightRotate(p->parent);
							s = p->parent->left;
						}
						if (s->left != NULL)
						{
							if (s->left->color == 'b' && s->right->color == 'b')
							{
								s->color = 'r';
								p = p->parent;
							}
							else
							{
								if (s->left->color == 'b')
								{
									s->right->color = 'b';
									s->color = 'r';
									leftRotate(s);
									s = p->parent->left;
								}
								s->color = p->parent->color;
								p->parent->color = 'b';
								s->left->color = 'b';
								rightRotate(p->parent);
								p = root;
							}
						}
						
					}
					p->color = 'b';
					root->color = 'b';
				}
			}
		}
	}


	void leftRotate(RBNode<T>* x) {
		RBNode<T>* y = x->right;
		x->right = y->left;
		if (y->left != NULL) {
			y->left->parent = x;
		}
		y->parent = x->parent;
		if (x->parent == nullptr) {
			this->root = y;
		}
		else if (x == x->parent->left) {
			x->parent->left = y;
		}
		else {
			x->parent->right = y;
		}
		y->left = x;
		x->parent = y;
	}
	void rightRotate(RBNode<T>* x) {
		RBNode<T>* y = x->left;
		x->left = y->right;
		if (y->right != NULL) {
			y->right->parent = x;
		}
		y->parent = x->parent;
		if (x->parent == nullptr) {
			this->root = y;
		}
		else if (x == x->parent->right) {
			x->parent->right = y;
		}
		else {
			x->parent->left = y;
		}
		y->right = x;
		x->parent = y;
	}

	RBNode<T>* AssignParent(RBNode<T>* ptr)
	{
		RBNode<T>* temp = NULL;
		RBNode<T>* temp1 = root;

		while (temp1 != NULL) {
			temp = temp1;
			if (ptr->data < temp1->data) {
				temp1 = temp1->left;
			}
			else {
				temp1 = temp1->right;
			}
		}
		ptr->parent = temp;
		if (temp == NULL) {
			root = ptr;
		}
		else if (ptr->data < temp->data) {
			temp->left = ptr;
		}
		else {
			temp->right = ptr;
		}
		return ptr;
	}

	void Insert(T X,string file,int line)
	{
		In(X,file,line, root);
	}
	void Delete(T data) {
		deleteNode(root, data);
	}
	void In(T X,string file,int line, RBNode<T>* ptr)
	{
		if (ptr == NULL)
		{
			ptr = new RBNode<T>(X);
			ptr->obj.insert(line,file);
			ptr = AssignParent(ptr);

			if (ptr->parent == NULL) {
				ptr->color = 'b';
				return;
			}

			if (ptr->parent->parent == NULL) {
				return;
			}

			/*RBNode<T>* Temp;
			RBNode<T>* u;
			while (ptr->parent != NULL && ptr->parent->color == 'r')
			{
				RBNode<T>* g = ptr->parent->parent;
				if (g->left == ptr->parent)
				{
					if (g->right != NULL)
					{
						u = g->right;
						if (u->color == 'r')
						{
							ptr->parent->color = 'b';
							u->color = 'b';
							g->color = 'r';
							ptr = g;
						}
					}
					else
					{
						if (ptr->parent->right == ptr)
						{
							ptr = ptr->parent;
							leftRotate(ptr);
						}
						ptr->parent->color = 'b';
						g->color = 'r';
						rightRotate(g);
					}
				}
				else
				{
					if (g->left != NULL)
					{
						u = g->left;
						if (u->color == 'r')
						{
							ptr->parent->color = 'b';
							u->color = 'b';
							g->color = 'r';
							ptr = g;
						}
					}
					else
					{
						if (ptr->parent->left == ptr)
						{
							ptr = ptr->parent;
							rightRotate(ptr);
						}
						ptr->parent->color = 'b';
						g->color = 'r';
						leftRotate(g);
					}
				}
				root->color = 'b';
			}*/
		}
		else if (ptr->data == X)
		{
			ptr->obj.insert(line,file);
			return;
		}
		else if (X < ptr->data)
		{
			In(X,file,line, ptr->left);
		}
		else if (X > ptr->data)
		{
			In(X,file,line, ptr->right);
		}
	}

	RBNode<T>* GET()
	{
		return root;
	}

	void printHelper(RBNode<T>* root, string indent, bool last) {
		if (root != NULL) {
			cout << indent;
			if (last) {
				cout << "R----";
				indent += "   ";
			}
			else {
				cout << "L----";
				indent += "|  ";
			}

			string sColor;
			if (root->color == 'r')
				sColor = "RED";
			else
				sColor = "BLACK";
			cout << root->data << "(" << sColor << ")" << endl;
			printHelper(root->left, indent, false);
			printHelper(root->right, indent, true);
		}
	}
	void printTree() {
		if (root) {
			printHelper(root, "", true);
		}
	}
};
