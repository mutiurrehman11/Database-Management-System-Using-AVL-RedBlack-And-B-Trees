#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Queue.h"
#include"AVL_Tree.h"
using namespace std;

Queue<int> AVLFiles;

void WriteToFile_string(AVL<string> obj)
{
	ofstream filer;
	string Address = "D:/University/3rd Semester/Data Structures/Project/AVL/";
	string Storing = Address + "Head.txt";

	bool head = true;

	Queue<Node<string>*> ob;
	ob.Enqueue(obj.GET());

	string t = "";
	int l = 1;
	int count = 1;
	while (!ob.isEmpty())
	{
		Node<string>* tem = ob.front();
		t += to_string(count);
		t += " ";
		t += "string=";
		t += tem->data;
		t += "; ";
		t += "left=";
		if (tem->Left != NULL)
		{
			ob.Enqueue(tem->Left);
			l++;
			AVLFiles.Enqueue(l);
			t += to_string(l);
			t += " ";
		}
		else
		{
			t += "-";
			t += " ";
		}
		t += "right=";
		if (tem->Right != NULL)
		{
			ob.Enqueue(tem->Right);
			l++;
			AVLFiles.Enqueue(l);
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
void WriteToFile_float(AVL<float> obj)
{
	ofstream filer;
	string Address = "D:/University/3rd Semester/Data Structures/Project/AVL/";
	string Storing = Address + "Head.txt";

	bool head = true;

	Queue<Node<float>*> ob;
	ob.Enqueue(obj.GET());

	string t = "";
	int l = 1;
	int count = 1;
	while (!ob.isEmpty())
	{
		Node<float>* tem = ob.front();
		t += to_string(count);
		t += " ";
		t += "float=";
		t += to_string(tem->data);
		t += "; ";
		t += "left=";
		if (tem->Left != NULL)
		{
			ob.Enqueue(tem->Left);
			l++;
			AVLFiles.Enqueue(l);
			t += to_string(l);
			t += " ";
		}
		else
		{
			t += "-";
			t += " ";
		}
		t += "right=";
		if (tem->Right != NULL)
		{
			ob.Enqueue(tem->Right);
			l++;
			AVLFiles.Enqueue(l);
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
void WriteToFile_int(AVL<int> obj)
{

	ofstream filer;
	string Address = "D:/University/3rd Semester/Data Structures/Project/AVL/";
	string Storing = Address + "Head.txt";

	bool head = true;

	Queue<Node<int>*> ob;
	ob.Enqueue(obj.GET());

	string t = "";
	int l = 1;
	int count = 1;
	while (!ob.isEmpty())
	{
		Node<int>* tem = ob.front();
		t += to_string(count);
		t += " ";
		t += "int=";
		t += to_string(tem->data);
		t += "; ";
		t += "left=";
		if (tem->Left != NULL)
		{
			ob.Enqueue(tem->Left);
			l++;
			AVLFiles.Enqueue(l);
			t += to_string(l);
			t += " ";
		}
		else
		{
			t += "-";
			t += " ";
		}
		t += "right=";
		if (tem->Right != NULL)
		{
			ob.Enqueue(tem->Right);
			l++;
			AVLFiles.Enqueue(l);
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

void Read_From_File(int a)
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

	string StFile = Storing + "AVL.txt";

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
		AVL<int> obj1;
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
		WriteToFile_int(obj1);
	}
	else if (a == 2)
	{
		AVL<int> obj1;
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
				//age = stof(tem);
				tem = "";

				i++;

				//cout << ID << endl;
				//cout << Year << endl;
				/*cout << Cause113 << endl;
				cout << Cause << endl;
				cout << State << endl;*/
				//cout << Death << endl;
				//cout << age << endl;

				obj1.Insert(Year, arr[j], line);
				line++;
			}
			obj.close();
		}
		WriteToFile_int(obj1);
	}
	else if (a == 5)
	{
		AVL<int> obj1;
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
		WriteToFile_int(obj1);
	}
	else if (a == 3)
	{
		AVL<string> obj1;
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
		WriteToFile_string(obj1);
	}
	else if (a == 4)
	{
		AVL<string> obj1;
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
		WriteToFile_string(obj1);
	}
	else if (a == 6)
	{
		AVL<float> obj1;
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

				obj1.Insert(age, arr[j], line);
				line++;
			}
			obj.close();
		}
		WriteToFile_float(obj1);
	}

}

void Line_Display(string file, int line)
{
	string Storing = "D:/University/3rd Semester/Data Structures/Project/";
	string Address;
	ifstream filer;
	string temp;
	string tem = "";

	int ID;
	int Year;
	string Cause;
	string Cause113;
	string State;
	int Death;
	float age;

	Address += Storing + file;
	filer.open(Address);
	int i = 1;
	while (i != line)
	{
		getline(filer, temp);
		i++;
	}
	getline(filer, temp);

	i = 0;
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

	cout <<"ID       : " << ID << endl;
	cout <<"Year     : " << Year << endl;
	cout <<"Cause113 : " << Cause113 << endl;
	cout <<"Cause    : " << Cause << endl;
	cout <<"State    : " << State << endl;
	cout <<"Death    : " << Death << endl;
	cout <<"Age      : " << age << endl;

	filer.close();
}
void Display(string file)
{
	
	ifstream filer;
	string text;
	
	filer.open(file);
	getline(filer, text);
	int i = 0;
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	while (text[i] != ';')
	{
		i++;
	}
	i+=2;
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	if (text[i] == ';')
		return;
	i += 5;

	bool flag = true;
	string tem = "";
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

		Line_Display(f, l);

		if (text[i] == ';')
			flag = false;
	}
	cout << endl;
	cout << "---------------------------------" << endl;
	
}

void Point_Search_string(string year,string ff)
{
	string Storing = "D:/University/3rd Semester/Data Structures/Project/";
	Storing += ff;
	string he = "Head.txt";
	string text;
	ifstream filer;
	string Address = Storing + he;
	filer.open(Address);
	getline(filer, text);
	string data;

	bool flag = true;
	int i = 0;
	string tem = "";

	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	i += 7;
	int next;
	while (text[i] != ';')
	{
		tem += text[i];
		i++;
	}
	data = tem;
	if (data == year)
	{
		Display(Address);
		return;
	}
	else if (year < data)
	{
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
		if (tem == "-")
			return;
		next = stoi(tem);
	}
	else if (year > data)
	{
		i += 2;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			i++;
		}
		i++;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem == "-")
			return;
		next = stoi(tem);
	}


	filer.close();
	if (flag == true)
	{
		bool fla = true;
		while (fla)
		{
			i = 0;
			tem = "";
			Address = Storing;
			Address += "n";
			Address += to_string(next);
			Address += ".txt";
			filer.open(Address);
			getline(filer, text);
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
			data = tem;
			if (data == year)
			{
				Display(Address);
				return;
			}
			else if (year < data)
			{
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
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			else if (year > data)
			{
				i += 2;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				tem = "";
				while (text[i] != ' ')
				{
					i++;
				}
				i++;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				while (text[i] != ' ')
				{
					tem += text[i];
					i++;
				}
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			filer.close();
		}
	}
}
void Point_Search_float(float year,string ff)
{
	string Storing = "D:/University/3rd Semester/Data Structures/Project/";
	Storing += ff;
	string he = "Head.txt";
	string text;
	ifstream filer;
	string Address = Storing + he;
	AVL<float> obj;
	filer.open(Address);
	getline(filer, text);
	float data;

	bool flag = true;
	int i = 0;
	string tem = "";

	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	i += 6;
	int next;
	while (text[i] != ';')
	{
		tem += text[i];
		i++;
	}
	data = stof(tem);
	if (data == year)
	{
		Display(Address);
		return;
	}
	else if (year < data)
	{
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
		if (tem == "-")
			return;
		next = stoi(tem);
	}
	else if (year > data)
	{
		i += 2;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			i++;
		}
		i++;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem == "-")
			return;
		next = stoi(tem);
	}


	filer.close();
	if (flag == true)
	{
		bool fla = true;
		while (fla)
		{
			i = 0;
			tem = "";
			Address = Storing;
			Address += "n";
			Address += to_string(next);
			Address += ".txt";
			filer.open(Address);
			getline(filer, text);
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
			data = stof(tem);
			if (data == year)
			{
				Display(Address);
				return;
			}
			else if (year < data)
			{
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
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			else if (year > data)
			{
				i += 2;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				tem = "";
				while (text[i] != ' ')
				{
					i++;
				}
				i++;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				while (text[i] != ' ')
				{
					tem += text[i];
					i++;
				}
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			filer.close();
		}
	}
}
void Point_Search_int(int year,string ff)
{
	string Storing = "D:/University/3rd Semester/Data Structures/Project/";
	Storing += ff;
	string he = "Head.txt";
	string text;
	ifstream filer;
	string Address = Storing + he;
	AVL<int> obj;
	filer.open(Address);
	getline(filer, text);
	int data;

	bool flag = true;
	int i = 0;
	string tem = "";
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	i += 4;
	int next;
	while (text[i] != ';')
	{
		tem += text[i];
		i++;
	}
	data = stoi(tem);
	if (data == year)
	{
		Display(Address);
		return;
	}
	else if (year < data)
	{
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
		if (tem == "-")
			return;
		next = stoi(tem);
	}
	else if (year > data)
	{
		i += 2;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			i++;
		}
		i++;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem == "-")
			return;
		next = stoi(tem);
	}


	filer.close();
	if (flag == true)
	{
		bool fla = true;
		while (fla)
		{
			i = 0;
			tem = "";
			Address = Storing;
			Address += "n";
			Address += to_string(next);
			Address += ".txt";
			filer.open(Address);
			getline(filer, text);
			while (text[i] != ' ')
			{
				i++;
			}
			i++;
			i = i + 4;
			while (text[i] != ';')
			{
				tem += text[i];
				i++;
			}
			data = stoi(tem);
			if (data == year)
			{
				Display(Address);
				return;
			}
			else if (year < data)
			{
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
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			else if (year > data)
			{
				i += 2;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				tem = "";
				while (text[i] != ' ')
				{
					i++;
				}
				i++;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				while (text[i] != ' ')
				{
					tem += text[i];
					i++;
				}
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			filer.close();
		}
	}

}

void Range_Search(int year1, int year2)
{
	for (int i = year1; i <= year2; i++)
	{
		Point_Search_int(i,"AVL/");
	}
}

void AVL_RemoveFiles()
{
	string Address = "D:/University/3rd Semester/Data Structures/Project/AVL/";
	string Store = Address;
	Store += "Head.txt";
	remove(Store.c_str());
	while (!AVLFiles.isEmpty())
	{
		int f = AVLFiles.front();
		Store = Address;
		Store += "n";
		Store += to_string(f);
		Store += ".txt";
		remove(Store.c_str());
		AVLFiles.Dequeue();
	}
}

void Update_File(ListNode* curr,string ne,string prev,int ne1,int prev1,float ne2,float prev2,int a)
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

	string Storing2 = address;

	int ID;
	int Year;
	string Cause;
	string Cause113;
	string State;
	int Death;
	float age;


	for (int j = 0; j < 10; j++)
	{
		int li = 1;
		bool flag = true;
		string temp;
		ofstream filer;
		Storing = address;
		Storing += "temp.csv";
		filer.open(Storing);

		ifstream fi;
		Storing2 = address;
		Storing2 += arr[j];
		fi.open(Storing2);
		while (flag)
		{
			string tem = "";
			if (curr == NULL)
				break;
			int ll = curr->line;
			string ff = curr->file;
			if (ff != arr[j])
			{
				while (getline(fi, temp))
				{
					filer << temp << endl;
				}
				break;
			}
			while (li != ll)
			{
				getline(fi, temp);
				filer << temp << endl;
				li++;
			}
			getline(fi, temp);
			li++;


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

			if (a == 1)
			{
				if (ID == prev1)
				{
					ID = ne1;
				}
			}
			if (a == 2)
			{
				if (Year == prev1)
				{
					Year = ne1;
				}
			}
			if (a == 3)
			{
				if (Cause == prev)
				{
					Cause = ne;
				}
			}
			if (a == 4)
			{
				if (State == prev)
				{
					State = ne;
				}
			}
			if (a == 5)
			{
				if (Death == prev1)
				{
					Death = ne1;
				}
			}
			if (a == 6)
			{
				if (age == prev2)
				{
					age = ne2;
				}
			}

			temp = "";
			temp += to_string(ID);
			temp += ",";
			temp += to_string(Year);
			temp += ",";
			temp += Cause;
			temp += ",";
			temp += Cause113;
			temp += ",";
			temp += State;
			temp += ",";
			temp += to_string(Death);
			temp += ",";
			temp += to_string(age);
			temp += ",";

			filer << temp << endl;

			curr = curr->next;
			if (curr == NULL)
				break;
		}
		filer.close();
		fi.close();
		remove(Storing2.c_str());
		rename(Storing.c_str(), Storing2.c_str());

	}
}

void Where_Menu(string Address, int opt)
{
	bool flag1 = true;
	int a;

	string ne="";
	string prev="";
	int ne1=0;
	int prev1=0;
	float ne2=0;
	float prev2=0;

	while (flag1)
	{
		cout << endl;
		cout << "1 : ID" << endl;
		cout << "2 : Year" << endl;
		cout << "3 : Cause" << endl;
		cout << "4 : State" << endl;
		cout << "5 : Deaths" << endl;
		cout << "6 : Age" << endl;
		cin >> a;
		if (a == 1)
		{
			if (opt == 1)
				cout << "Index Cannot be Manipulated" << endl;
			else
			{
				cout << "Enter Previous ID : ";
				cin >> prev1;
				cout << "Enter New ID : ";
				cin >> ne1;
				flag1 = false;
			}
		}
		if (a == 2)
		{
			if (opt == 2)
				cout << "Index Cannot be Manipulated" << endl;
			else
			{
				cout << "Enter Previous Year : ";
				cin >> prev1;
				cout << "Enter New Year : ";
				cin >> ne1;
				flag1 = false;
			}
		}
		if (a == 3)
		{
			if (opt == 3)
				cout << "Index Cannot be Manipulated" << endl;
			else
			{
				cout << "Enter Previous Cause : ";
				cin >> prev;
				cout << "Enter New Cause : ";
				cin >> ne;
				flag1 = false;
			}
		}
		if (a == 4)
		{
			if (opt == 4)
				cout << "Index Cannot be Manipulated" << endl;
			else
			{
				cout << "Enter Previous State : ";
				cin >> prev;
				cout << "Enter New State : ";
				cin >> ne;
				flag1 = false;
			}
		}
		if (a == 5)
		{
			if (opt == 5)
				cout << "Index Cannot be Manipulated" << endl;
			else
			{
				cout << "Enter Previous Death : ";
				cin >> prev;
				cout << "Enter New Death : ";
				cin >> ne;
				flag1 = false;
			}

		}
		if (a == 6)
		{
			if (opt == 6)
				cout << "Index Cannot be Manipulated" << endl;
			else
			{
				cout << "Enter Previous Age : ";
				cin >> prev2;
				cout << "Enter New Age : ";
				cin >> ne2;
				flag1 = false;
			}

		}
	}

	ifstream filer;
	string text;

	List curr;

	filer.open(Address);
	getline(filer, text);
	int i = 0;
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	while (text[i] != ';')
	{
		i++;
	}
	i += 2;
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	if (text[i] == ';')
		return;
	i += 5;

	bool flag = true;
	string tem = "";
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

		curr.insert(l, f);

		if (text[i] == ';')
			flag = false;
	}
	
	Update_File(curr.head, ne, prev, ne1, prev1, ne2, prev2, a);

}

void Where_Search_int(int year, string ff,int opt)
{
	string Storing = "D:/University/3rd Semester/Data Structures/Project/";
	Storing += ff;
	string he = "Head.txt";
	string text;
	ifstream filer;
	string Address = Storing + he;
	AVL<int> obj;
	filer.open(Address);
	getline(filer, text);
	int data;

	bool flag = true;
	int i = 0;
	string tem = "";
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	i += 4;
	int next;
	while (text[i] != ';')
	{
		tem += text[i];
		i++;
	}
	data = stoi(tem);
	if (data == year)
	{
		Where_Menu(Address,opt);
		return;
	}
	else if (year < data)
	{
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
		if (tem == "-")
			return;
		next = stoi(tem);
	}
	else if (year > data)
	{
		i += 2;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			i++;
		}
		i++;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem == "-")
			return;
		next = stoi(tem);
	}


	filer.close();
	if (flag == true)
	{
		bool fla = true;
		while (fla)
		{
			i = 0;
			tem = "";
			Address = Storing;
			Address += "n";
			Address += to_string(next);
			Address += ".txt";
			filer.open(Address);
			getline(filer, text);
			while (text[i] != ' ')
			{
				i++;
			}
			i++;
			i = i + 4;
			while (text[i] != ';')
			{
				tem += text[i];
				i++;
			}
			data = stoi(tem);
			if (data == year)
			{
				Where_Menu(Address,opt);
				return;
			}
			else if (year < data)
			{
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
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			else if (year > data)
			{
				i += 2;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				tem = "";
				while (text[i] != ' ')
				{
					i++;
				}
				i++;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				while (text[i] != ' ')
				{
					tem += text[i];
					i++;
				}
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			filer.close();
		}
	}
}

void Where_Search_string(string year, string ff, int opt)
{
	string Storing = "D:/University/3rd Semester/Data Structures/Project/";
	Storing += ff;
	string he = "Head.txt";
	string text;
	ifstream filer;
	string Address = Storing + he;
	AVL<int> obj;
	filer.open(Address);
	getline(filer, text);
	string data;

	bool flag = true;
	int i = 0;
	string tem = "";
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	i += 7;
	int next;
	while (text[i] != ';')
	{
		tem += text[i];
		i++;
	}
	data = tem;
	if (data == year)
	{
		Where_Menu(Address, opt);
		return;
	}
	else if (year < data)
	{
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
		if (tem == "-")
			return;
		next = stoi(tem);
	}
	else if (year > data)
	{
		i += 2;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			i++;
		}
		i++;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem == "-")
			return;
		next = stoi(tem);
	}


	filer.close();
	if (flag == true)
	{
		bool fla = true;
		while (fla)
		{
			i = 0;
			tem = "";
			Address = Storing;
			Address += "n";
			Address += to_string(next);
			Address += ".txt";
			filer.open(Address);
			getline(filer, text);
			while (text[i] != ' ')
			{
				i++;
			}
			i++;
			i = i + 7;
			while (text[i] != ';')
			{
				tem += text[i];
				i++;
			}
			data = tem;
			if (data == year)
			{
				Where_Menu(Address, opt);
				return;
			}
			else if (year < data)
			{
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
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			else if (year > data)
			{
				i += 2;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				tem = "";
				while (text[i] != ' ')
				{
					i++;
				}
				i++;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				while (text[i] != ' ')
				{
					tem += text[i];
					i++;
				}
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			filer.close();
		}
	}
}

void Where_Search_float(float year, string ff, int opt)
{
	string Storing = "D:/University/3rd Semester/Data Structures/Project/";
	Storing += ff;
	string he = "Head.txt";
	string text;
	ifstream filer;
	string Address = Storing + he;
	//AVL<int> obj;
	filer.open(Address);
	getline(filer, text);
	float data;

	bool flag = true;
	int i = 0;
	string tem = "";
	while (text[i] != ' ')
	{
		i++;
	}
	i++;
	i += 6;
	int next;
	while (text[i] != ';')
	{
		tem += text[i];
		i++;
	}
	data = stof(tem);
	if (data == year)
	{
		Where_Menu(Address, opt);
		return;
	}
	else if (year < data)
	{
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
		if (tem == "-")
			return;
		next = stoi(tem);
	}
	else if (year > data)
	{
		i += 2;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		tem = "";
		while (text[i] != ' ')
		{
			i++;
		}
		i++;
		while (text[i] != '=')
		{
			i++;
		}
		i++;
		while (text[i] != ' ')
		{
			tem += text[i];
			i++;
		}
		if (tem == "-")
			return;
		next = stoi(tem);
	}


	filer.close();
	if (flag == true)
	{
		bool fla = true;
		while (fla)
		{
			i = 0;
			tem = "";
			Address = Storing;
			Address += "n";
			Address += to_string(next);
			Address += ".txt";
			filer.open(Address);
			getline(filer, text);
			while (text[i] != ' ')
			{
				i++;
			}
			i++;
			i = i + 6;
			while (text[i] != ';')
			{
				tem += text[i];
				i++;
			}
			data = stof(tem);
			if (data == year)
			{
				Where_Menu(Address, opt);
				return;
			}
			else if (year < data)
			{
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
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			else if (year > data)
			{
				i += 2;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				tem = "";
				while (text[i] != ' ')
				{
					i++;
				}
				i++;
				while (text[i] != '=')
				{
					i++;
				}
				i++;
				while (text[i] != ' ')
				{
					tem += text[i];
					i++;
				}
				if (tem == "-")
					return;
				next = stoi(tem);
			}
			filer.close();
		}
	}
}

void delete_Files(ListNode* curr)
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

	string Storing2 = address;

	for (int j = 0; j < 10; j++)
	{
		int li = 1;
		bool flag = true;
		string temp;
		ofstream filer;
		Storing = address;
		Storing += "temp.csv";
		filer.open(Storing);

		ifstream fi;
		Storing2 = address;
		Storing2 += arr[j];
		fi.open(Storing2);
		while (flag)
		{
			if (curr == NULL)
				break;
			int ll = curr->line;
			string ff = curr->file;
			if (ff != arr[j])
			{
				while (getline(fi, temp))
				{
					filer << temp << endl;
				}
				break;
			}
			while (li != ll)
			{
				getline(fi, temp);
				filer << temp << endl;
				li++;
			}
			getline(fi, temp);
			li++;
			curr = curr->next;
			if (curr == NULL)
				break;
		}
		filer.close();
		fi.close();
		remove(Storing2.c_str());
		rename(Storing.c_str(), Storing2.c_str());

	}
	curr = NULL;
}

void Delete_int_AVL(int data)
{
	Queue<int> obj;
	ifstream filer;
	AVL<int> tree;
	string Storing = "D:/University/3rd Semester/Data Structures/Project/AVL/";
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
	if (returner == NULL)
		return;
	delete_Files(returner);
	//WriteToFile_int(tree);

}

void Delete_float_AVL(float data)
{
	Queue<int> obj;
	ifstream filer;
	AVL<float> tree;
	string Storing = "D:/University/3rd Semester/Data Structures/Project/AVL/";
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
	if (returner == NULL)
		return;
	delete_Files(returner);
	//WriteToFile_float(tree);
}

void Delete_string_AVL(string data)
{
	Queue<int> obj;
	ifstream filer;
	AVL<string> tree;
	string Storing = "D:/University/3rd Semester/Data Structures/Project/AVL/";
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
	if (returner == NULL)
		return;
	delete_Files(returner);
	//WriteToFile_string(tree);
}