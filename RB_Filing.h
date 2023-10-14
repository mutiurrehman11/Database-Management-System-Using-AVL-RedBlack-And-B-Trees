#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Queue.h"
#include"Red_Black_Tree.h"
#include"Filing_AVL.h"
using namespace std;

Queue<int> RBFiles;

void RB_WriteToFile_string(Red_Black_Tree<string> obj)
{
	ofstream filer;
	string Address = "D:/University/3rd Semester/Data Structures/Project/RB/";
	string Storing = Address + "Head.txt";

	bool head = true;

	Queue<RBNode<string>*> ob;
	ob.Enqueue(obj.GET());

	string t = "";
	int l = 1;
	int count = 1;
	while (!ob.isEmpty())
	{
		RBNode<string>* tem = ob.front();
		t += to_string(count);
		t += " ";
		t += "string=";
		t += tem->data;
		t += "; ";
		t += "left=";
		if (tem->left != NULL)
		{
			ob.Enqueue(tem->left);
			l++;
			RBFiles.Enqueue(l);
			t += to_string(l);
			t += " ";
		}
		else
		{
			t += "-";
			t += " ";
		}
		t += "right=";
		if (tem->right != NULL)
		{
			ob.Enqueue(tem->right);
			l++;
			RBFiles.Enqueue(l);
			t += to_string(l);
			t += " ";
		}
		else
		{
			t += "-";
			t += " ";
		}
		t += "List=";
		ListNode* curr = tem->obj.head;
		while (curr)
		{
			t += to_string(curr->line);
			t += ",";
			t += curr->file;
			t += "|";
			curr = curr->next;
		}
		t += ";";
		if (head == true)
		{
			filer.open(Storing);
			filer << t << endl;
			head = false;
			filer.close();
		}
		else
		{
			Storing = Address;
			Storing += "n";
			Storing += to_string(count);
			Storing += ".txt";
			filer.open(Storing);
			filer << t << endl;
			filer.close();
		}
		t = "";
		count++;
		ob.Dequeue();
	}

}
void RB_WriteToFile_float(Red_Black_Tree<float> obj)
{
	ofstream filer;
	string Address = "D:/University/3rd Semester/Data Structures/Project/RB/";
	string Storing = Address + "Head.txt";

	bool head = true;

	Queue<RBNode<float>*> ob;
	ob.Enqueue(obj.GET());

	string t = "";
	int l = 1;
	int count = 1;
	while (!ob.isEmpty())
	{
		RBNode<float>* tem = ob.front();
		t += to_string(count);
		t += " ";
		t += "float=";
		t += to_string(tem->data);
		t += "; ";
		t += "left=";
		if (tem->left != NULL)
		{
			ob.Enqueue(tem->left);
			l++;
			RBFiles.Enqueue(l);
			t += to_string(l);
			t += " ";
		}
		else
		{
			t += "-";
			t += " ";
		}
		t += "right=";
		if (tem->right != NULL)
		{
			ob.Enqueue(tem->right);
			l++;
			RBFiles.Enqueue(l);
			t += to_string(l);
			t += " ";
		}
		else
		{
			t += "-";
			t += " ";
		}
		t += "List=";
		ListNode* curr = tem->obj.head;
		while (curr)
		{
			t += to_string(curr->line);
			t += ",";
			t += curr->file;
			t += "|";
			curr = curr->next;
		}
		t += ";";
		if (head == true)
		{
			filer.open(Storing);
			filer << t << endl;
			head = false;
			filer.close();
		}
		else
		{
			Storing = Address;
			Storing += "n";
			Storing += to_string(count);
			Storing += ".txt";
			filer.open(Storing);
			filer << t << endl;
			filer.close();
		}
		t = "";
		count++;
		ob.Dequeue();
	}

}
void RB_WriteToFile_int(Red_Black_Tree<int> obj)
{

	ofstream filer;
	string Address = "D:/University/3rd Semester/Data Structures/Project/RB/";
	string Storing = Address + "Head.txt";

	bool head = true;

	Queue<RBNode<int>*> ob;
	ob.Enqueue(obj.GET());

	string t = "";
	int l = 1;
	int count = 1;
	while (!ob.isEmpty())
	{
		RBNode<int>* tem = ob.front();
		t += to_string(count);
		t += " ";
		t += "int=";
		t += to_string(tem->data);
		t += "; ";
		t += "left=";
		if (tem->left != NULL)
		{
			ob.Enqueue(tem->left);
			l++;
			RBFiles.Enqueue(l);
			t += to_string(l);
			t += " ";
		}
		else
		{
			t += "-";
			t += " ";
		}
		t += "right=";
		if (tem->right != NULL)
		{
			ob.Enqueue(tem->right);
			l++;
			RBFiles.Enqueue(l);
			t += to_string(l);
			t += " ";
		}
		else
		{
			t += "-";
			t += " ";
		}
		t += "List=";
		ListNode* curr = tem->obj.head;
		while (curr)
		{
			t += to_string(curr->line);
			t += ",";
			t += curr->file;
			t += "|";
			curr = curr->next;
		}
		t += ";";
		if (head == true)
		{
			filer.open(Storing);
			filer << t << endl;
			head = false;
			filer.close();
		}
		else
		{
			Storing = Address;
			Storing += "n";
			Storing += to_string(count);
			Storing += ".txt";
			filer.open(Storing);
			filer << t << endl;
			filer.close();
		}
		t = "";
		count++;
		ob.Dequeue();
	}

}

void RB_Read_From_File(int a)
{

	string Storing = "D:/University/3rd Semester/Data Structures/Project/";
	string address = "D:/University/3rd Semester/Data Structures/Project/";
	string arr[10];
	arr[0] = "United_States_1.csv";
	arr[1] = "United_States_2.csv";
	arr[2] = "United_States_3.csv";
	arr[3] = "United_States_4.csv";
	arr[4] = "United_States_5.csv";
	arr[5] = "United_States_6.csv";
	arr[6] = "United_States_7.csv";
	arr[7] = "United_States_8.csv";
	arr[8] = "United_States_9.csv";
	arr[9] = "United_States_10.csv";

	int ID;
	int Year;
	string Cause;
	string Cause113;
	string State;
	int Death;
	float age;

	string temp;
	string tem = "";

	if (a == 1)
	{
		Red_Black_Tree<int> obj1;
		for (int j = 0; j < 10; j++)
		{
			int line = 2;
			string fileName = address + arr[j];
			ifstream obj;
			obj.open(fileName);
			getline(obj, temp);
			while (getline(obj, temp))
			{
				int i = 0;
				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				ID = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Year = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ',' || temp[i + 1] == ' '; i++)
				{
					if (temp[i] == '(')
					{
						while (temp[i] != ')')
						{
							tem += temp[i];
							i++;
						}
						tem += temp[i];
					}
					else
						tem += temp[i];
				}
				Cause113 = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Cause = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				State = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Death = stoi(tem);
				tem = "";

				i++;

				for (i; i < temp.length(); i++)
				{
					tem += temp[i];
				}
				//cout << tem << endl;
				age = stof(tem);
				tem = "";

				i++;

				//cout << ID << endl;
				//cout << Year << endl;
				//cout << Cause113 << endl;
				//cout << Cause << endl;
				//cout << State << endl;
				//cout << Death << endl;
				//cout << age << endl;

				obj1.Insert(ID, arr[j], line);
				line++;
			}
			obj.close();
		}
		RB_WriteToFile_int(obj1);
	}
	else if (a == 2)
	{
		Red_Black_Tree<int> obj1;
		for (int j = 0; j < 10; j++)
		{
			int line = 2;
			string fileName = address + arr[j];
			ifstream obj;
			obj.open(fileName);
			getline(obj, temp);
			while (getline(obj, temp))
			{
				//cout << temp << endl;

				int i = 0;
				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				ID = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Year = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ',' || temp[i + 1] == ' '; i++)
				{
					if (temp[i] == '(')
					{
						while (temp[i] != ')')
						{
							tem += temp[i];
							i++;
						}
						tem += temp[i];
					}
					else
						tem += temp[i];
				}
				Cause113 = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Cause = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				State = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Death = stoi(tem);
				tem = "";

				i++;

				for (i; i < temp.length(); i++)
				{
					tem += temp[i];
				}
				if (tem == "939.7")
				{
					cout << tem << endl;
				}
				//cout << tem << endl;
				//age = stof(tem);
				tem = "";

				i++;

				obj1.Insert(Year, arr[j], line);
				line++;
			}
			obj.close();
		}
		RB_WriteToFile_int(obj1);
	}
	else if (a == 5)
	{
		Red_Black_Tree<int> obj1;
		for (int j = 0; j < 10; j++)
		{
			int line = 2;
			string fileName = address + arr[j];
			ifstream obj;
			obj.open(fileName);
			getline(obj, temp);
			while (getline(obj, temp))
			{
				//cout << temp << endl;

				int i = 0;
				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				ID = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Year = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ',' || temp[i + 1] == ' '; i++)
				{
					if (temp[i] == '(')
					{
						while (temp[i] != ')')
						{
							tem += temp[i];
							i++;
						}
						tem += temp[i];
					}
					else
						tem += temp[i];
				}
				Cause113 = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Cause = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				State = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Death = stoi(tem);
				tem = "";

				i++;

				for (i; i < temp.length(); i++)
				{
					tem += temp[i];
				}
				//cout << tem << endl;
				age = stof(tem);
				tem = "";

				i++;

				//cout << ID << endl;
				//cout << Year << endl;
				//cout << Cause113 << endl;
				//cout << Cause << endl;
				//cout << State << endl;
				//cout << Death << endl;
				//cout << age << endl;

				obj1.Insert(Death, arr[j], line);
				line++;
			}
			obj.close();
		}
		RB_WriteToFile_int(obj1);
	}
	else if (a == 3)
	{
		Red_Black_Tree<string> obj1;
		for (int j = 0; j < 10; j++)
		{
			int line = 2;
			string fileName = address + arr[j];
			ifstream obj;
			obj.open(fileName);
			getline(obj, temp);
			while (getline(obj, temp))
			{
				//cout << temp << endl;

				int i = 0;
				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				ID = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Year = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ',' || temp[i + 1] == ' '; i++)
				{
					if (temp[i] == '(')
					{
						while (temp[i] != ')')
						{
							tem += temp[i];
							i++;
						}
						tem += temp[i];
					}
					else
						tem += temp[i];
				}
				Cause113 = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Cause = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				State = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Death = stoi(tem);
				tem = "";

				i++;

				for (i; i < temp.length(); i++)
				{
					tem += temp[i];
				}
				age = stof(tem);
				tem = "";

				i++;

				obj1.Insert(Cause, arr[j], line);
				line++;
			}
			obj.close();
		}
		RB_WriteToFile_string(obj1);
	}
	else if (a == 4)
	{
		Red_Black_Tree<string> obj1;
		for (int j = 0; j < 10; j++)
		{
			int line = 2;
			string fileName = address + arr[j];
			ifstream obj;
			obj.open(fileName);
			getline(obj, temp);
			while (getline(obj, temp))
			{
				//cout << temp << endl;

				int i = 0;
				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				ID = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Year = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ',' || temp[i + 1] == ' '; i++)
				{
					if (temp[i] == '(')
					{
						while (temp[i] != ')')
						{
							tem += temp[i];
							i++;
						}
						tem += temp[i];
					}
					else
						tem += temp[i];
				}
				Cause113 = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Cause = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				State = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Death = stoi(tem);
				tem = "";

				i++;

				for (i; i < temp.length(); i++)
				{
					tem += temp[i];
				}
				//cout << tem << endl;
				age = stof(tem);
				tem = "";

				i++;

				//cout << ID << endl;
				//cout << Year << endl;
				//cout << Cause113 << endl;
				//cout << Cause << endl;
				//cout << State << endl;
				//cout << Death << endl;
				//cout << age << endl;

				obj1.Insert(State, arr[j], line);
				line++;
			}
			obj.close();
		}
		RB_WriteToFile_string(obj1);
	}
	else if (a == 6)
	{
		Red_Black_Tree<float> obj1;
		for (int j = 0; j < 10; j++)
		{
			int line = 2;
			string fileName = address + arr[j];
			ifstream obj;
			obj.open(fileName);
			getline(obj, temp);
			while (getline(obj, temp))
			{
				//cout << temp << endl;

				int i = 0;
				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				ID = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Year = stoi(tem);
				tem = "";

				i++;

				for (i; temp[i] != ',' || temp[i + 1] == ' '; i++)
				{
					if (temp[i] == '(')
					{
						while (temp[i] != ')')
						{
							tem += temp[i];
							i++;
						}
						tem += temp[i];
					}
					else
						tem += temp[i];
				}
				Cause113 = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Cause = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				State = tem;
				tem = "";

				i++;

				for (i; temp[i] != ','; i++)
				{
					tem += temp[i];
				}
				Death = stoi(tem);
				tem = "";

				i++;

				for (i; i < temp.length(); i++)
				{
					tem += temp[i];
				}
				//cout << tem << endl;
				age = stof(tem);
				tem = "";

				i++;


				obj1.Insert(age, arr[j], line);
				line++;
			}
			obj.close();
		}
		RB_WriteToFile_float(obj1);
	}

}

void RB_RemoveFiles()
{
	string Address = "D:/University/3rd Semester/Data Structures/Project/RB/";
	string Store = Address;
	Store += "Head.txt";
	remove(Store.c_str());
	while (!RBFiles.isEmpty())
	{
		int f = RBFiles.front();
		Store = Address;
		Store += "n";
		Store += to_string(f);
		Store += ".txt";
		remove(Store.c_str());
		RBFiles.Dequeue();
	}
}


void Delete_int_RB(int data)
{
	Queue<int> obj;
	ifstream filer;
	Red_Black_Tree<int> tree;
	string Storing = "D:/University/3rd Semester/Data Structures/Project/RB/";
	string he = "Head.txt";
	string Address = Storing + he;
	obj.Enqueue(0);
	while (!obj.isEmpty())
	{
		filer.open(Address);
		string text;
		getline(filer, text);
		filer.close();

		int i = 0;
		string tem = "";
		while (text[i] != ' ')
		{
			i++;
		}
		i++;
		i += 4;
		while (text[i] != ';')
		{
			tem += text[i];
			i++;
		}
		int d = stoi(tem);
		i += 2;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem != "-")
		{
			int left = stoi(tem);
			obj.Enqueue(left);
		}
		i++;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem != "-")
		{
			int right = stoi(tem);
			obj.Enqueue(right);
		}
		i++;
		i = i + 5;

		bool flag = true;
		tem = "";
		int l;
		string f;
		while (flag)
		{
			tem = "";
			while (text[i] != ',')
			{
				tem += text[i];
				i++;
			}
			l = stoi(tem);
			tem = "";
			i++;
			while (text[i] != '|')
			{
				tem += text[i];
				i++;
			}
			f = tem;
			i++;

			tree.Insert(d, f, l);

			if (text[i] == ';')
				flag = false;
		}
		obj.Dequeue();
		const char* delfil = Address.c_str();
		remove(delfil);
		if (obj.isEmpty())
			break;
		int next = obj.front();
		Address = Storing;
		Address += "n";
		Address += to_string(next);
		Address += ".txt";
	}

	tree.Delete(data);
	if (ret == NULL)
		return;
	delete_Files(ret);

}
void Delete_float_RB(float data)
{
	Queue<int> obj;
	ifstream filer;
	Red_Black_Tree<float> tree;
	string Storing = "D:/University/3rd Semester/Data Structures/Project/RB/";
	string he = "Head.txt";
	string Address = Storing + he;
	obj.Enqueue(0);
	while (!obj.isEmpty())
	{
		filer.open(Address);
		string text;
		getline(filer, text);
		filer.close();

		int i = 0;
		string tem = "";
		while (text[i] != ' ')
		{
			i++;
		}
		i++;
		i += 6;
		while (text[i] != ';')
		{
			tem += text[i];
			i++;
		}
		int d = stof(tem);
		i += 2;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem != "-")
		{
			int left = stoi(tem);
			obj.Enqueue(left);
		}
		i++;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem != "-")
		{
			int right = stoi(tem);
			obj.Enqueue(right);
		}
		i++;
		i = i + 5;

		bool flag = true;
		tem = "";
		int l;
		string f;
		while (flag)
		{
			tem = "";
			while (text[i] != ',')
			{
				tem += text[i];
				i++;
			}
			l = stoi(tem);
			tem = "";
			i++;
			while (text[i] != '|')
			{
				tem += text[i];
				i++;
			}
			f = tem;
			i++;

			tree.Insert(d, f, l);

			if (text[i] == ';')
				flag = false;
		}
		obj.Dequeue();
		const char* delfil = Address.c_str();
		remove(delfil);
		if (obj.isEmpty())
			break;
		int next = obj.front();
		Address = Storing;
		Address += "n";
		Address += to_string(next);
		Address += ".txt";
	}

	tree.Delete(data);
	if (ret == NULL)
		return;
	delete_Files(ret);
}
void Delete_string_RB(string data)
{
	Queue<int> obj;
	ifstream filer;
	Red_Black_Tree<string> tree;
	string Storing = "D:/University/3rd Semester/Data Structures/Project/RB/";
	string he = "Head.txt";
	string Address = Storing + he;
	obj.Enqueue(0);
	while (!obj.isEmpty())
	{
		filer.open(Address);
		string text;
		getline(filer, text);
		filer.close();

		int i = 0;
		string tem = "";
		while (text[i] != ' ')
		{
			i++;
		}
		i++;
		i += 7;
		while (text[i] != ';')
		{
			tem += text[i];
			i++;
		}
		string d = tem;
		i += 2;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem != "-")
		{
			int left = stoi(tem);
			obj.Enqueue(left);
		}
		i++;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem != "-")
		{
			int right = stoi(tem);
			obj.Enqueue(right);
		}
		i++;
		i = i + 5;

		bool flag = true;
		tem = "";
		int l;
		string f;
		while (flag)
		{
			tem = "";
			while (text[i] != ',')
			{
				tem += text[i];
				i++;
			}
			l = stoi(tem);
			tem = "";
			i++;
			while (text[i] != '|')
			{
				tem += text[i];
				i++;
			}
			f = tem;
			i++;

			tree.Insert(d, f, l);

			if (text[i] == ';')
				flag = false;
		}
		obj.Dequeue();
		const char* delfil = Address.c_str();
		remove(delfil);
		if (obj.isEmpty())
			break;
		int next = obj.front();
		Address = Storing;
		Address += "n";
		Address += to_string(next);
		Address += ".txt";
	}

	tree.Delete(data);
	if (ret == NULL)
		return;
	delete_Files(ret);
}
