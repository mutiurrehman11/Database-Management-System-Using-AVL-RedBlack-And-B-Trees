#include<iostream>
#include<fstream>
#include<string>
#include"Filing_AVL.h"
#include"AVL_Tree.h"
#include"Queue.h"
#include"Red_Black_Tree.h"
#include"RB_Filing.h"
#include"B_Trees.h"
using namespace std;

void AVL_Management(int opt,int opt1)
{
	int a;
	bool flag = true;
	while (flag)
	{
		cout << endl;
		cout << "       --------DATABASE MANAGEMENT-------" << endl;
		cout << endl;
		cout << "  1 : Point Search " << endl;
		cout << "  2 : Range Search " << endl;
		cout << "  3 : Update " << endl;
		cout << "  4 : Delete " << endl;
		cout << "  5 : Exit " << endl;
		cout << endl;
		cout << "Choose Option : ";
		cin >> a;
		if (a == 1)
		{
			if (opt == 1||opt==2||opt==5)
			{
				int year;
				cout << "Enter Index To Search : ";
				cin >> year;
				Point_Search_int(year,"AVL/");
			}
			else if (opt == 3 || opt == 4)
			{
				//char arr[100];
				string y;
				cout << "Enter Index To Search : ";
				getline(cin, y);
				getline(cin, y);
				//y = arr;
				Point_Search_string(y,"AVL/");
			}
			else if (opt == 6)
			{
				float y;
				cout << "Enter Age To Search : ";
				cin >> y;
				Point_Search_float(y,"AVL/");
			}
			
		}
		else if (a == 2)
		{
			if (a == 1 || a == 2 || a == 5 || a == 6)
			{
				bool fl = true;
				while (fl)
				{
					int ab, ba;
					cout << "Enter Starting Index : ";
					cin >> ab;
					cout << "Enter Ending Index : ";
					cin >> ba;
					if (ab < ba)
					{
						Range_Search(ab, ba);
						fl = false;
					}
					else
					{
						cout << "Wrong Credentials" << endl;
					}

				}
			}
			else
			{
				cout << "Data not Supported for Range Search" << endl;
			}
		}
		else if (a == 3)
		{
			if (opt == 1 || opt == 2 || opt == 5)
			{
				int year;
				cout << "Enter Index To Search : ";
				cin >> year;
				Where_Search_int(year, "AVL/", opt);
			}
			else if (opt == 3 || opt == 4)
			{
				string y;
				cout << "Enter Index To Search : ";
				getline(cin, y);
				getline(cin, y);
				Where_Search_string(y, "AVL/", opt);
			}
			else if (opt == 6)
			{
				float y;
				cout << "Enter Age To Search : ";
				cin >> y;
				Where_Search_float(y, "AVL/", opt);
			}
		}
		else if (a == 4)
		{
			if (opt == 1 || opt == 2 || opt == 5)
			{
				int year;
				cout << "Enter Index To Delete : ";
				cin >> year;
				Delete_int_AVL(year);
			}
			else if (opt == 3 || opt == 4)
			{
				string y;
				cout << "Enter Index To Delete : ";
				getline(cin, y);
				getline(cin, y);
				Delete_string_AVL(y);
			}
			else if (opt == 6)
			{
				float y;
				cout << "Enter Age To Delete : ";
				cin >> y;
				Delete_float_AVL(y);
			}
			Read_From_File(opt);
			RB_RemoveFiles();
			RB_Read_From_File(opt1);
		}
		else if (a == 5)
		{
			flag = false;
		}

	}
}

void RB_Management(int opt,int opt1)
{
	int a;
	bool flag = true;
	while (flag)
	{
		cout << endl;
		cout << "       --------DATABASE MANAGEMENT-------" << endl;
		cout << endl;
		cout << "  1 : Point Search " << endl;
		cout << "  2 : Range Search " << endl;
		cout << "  3 : Update " << endl;
		cout << "  4 : Delete " << endl;
		cout << "  5 : Exit " << endl;
		cout << endl;
		cout << "Choose Option : ";
		cin >> a;
		if (a == 1)
		{
			if (opt == 1 || opt == 2 || opt == 5)
			{
				int year;
				cout << "Enter Index To Search : ";
				cin >> year;
				Point_Search_int(year, "RB/");
			}
			else if (opt == 3 || opt == 4)
			{
				//char arr[100];
				string y;
				cout << "Enter Index To Search : ";
				getline(cin, y);
				getline(cin, y);
				//y = arr;
				Point_Search_string(y, "RB/");
			}
			else if (opt == 6)
			{
				float y;
				cout << "Enter Age To Search : ";
				cin >> y;
				Point_Search_float(y, "RB/");
			}

		}
		else if (a == 2)
		{
			if (a == 1 || a == 2 || a == 5 || a == 6)
			{
				bool fl = true;
				while (fl)
				{
					int ab, ba;
					cout << "Enter Starting Index : ";
					cin >> ab;
					cout << "Enter Ending Index : ";
					cin >> ba;
					if (ab < ba)
					{
						Range_Search(ab, ba);
						fl = false;
					}
					else
					{
						cout << "Wrong Credentials" << endl;
					}

				}
			}
			else
			{
				cout << "Data not Supported for Range Search" << endl;
			}
		}
		else if (a == 3)
		{
			if (opt == 1 || opt == 2 || opt == 5)
			{
				int year;
				cout << "Enter Index To Search : ";
				cin >> year;
				Where_Search_int(year, "RB/", opt);
			}
			else if (opt == 3 || opt == 4)
			{
				string y;
				cout << "Enter Index To Search : ";
				getline(cin, y);
				getline(cin, y);
				Where_Search_string(y, "RB/", opt);
			}
			else if (opt == 6)
			{
				float y;
				cout << "Enter Age To Search : ";
				cin >> y;
				Where_Search_float(y, "RB/", opt);
			}
		}
		else if (a == 4)
		{
			if (opt == 1 || opt == 2 || opt == 5)
			{
				int year;
				cout << "Enter Index To Delete : ";
				cin >> year;
				Delete_int_RB(year);
			}
			else if (opt == 3 || opt == 4)
			{
				string y;
				cout << "Enter Index To Delete : ";
				getline(cin, y);
				getline(cin, y);
				Delete_string_RB(y);
			}
			else if (opt == 6)
			{
				float y;
				cout << "Enter Age To Delete : ";
				cin >> y;
				Delete_float_RB(y);
			}
			RB_Read_From_File(opt);
			AVL_RemoveFiles();
			Read_From_File(opt1);
		}
		else if (a == 5)
		{
			flag = false;
		}

	}
}

void Main()
{
	int a;
	int b;
	bool flag = true;
	while (flag)
	{
		cout << endl;
		cout << "       --------DATABASE MANAGEMENT-------" << endl;
		cout << endl;
		cout << "Writing To AVL Files" << endl;
		cout << "Choose Index Option : " << endl;
		cout << endl;
		cout << "1: ID" << endl;
		cout << "2: Year" << endl;
		cout << "3: Cause" << endl;
		cout << "4: State" << endl;
		cout << "5: Death" << endl;
		cout << "6: Age" << endl;
		cout << "Choose Option : ";
		cin >> a;
		if (a > 0 && a <= 6)
		{
			//Read_From_File(a);
			break;
		}
		system("cls");
	}
	flag = true;
	while (flag)
	{
		cout << endl;
		cout << "       --------DATABASE MANAGEMENT-------" << endl;
		cout << endl;
		cout << "Writing To Red Black Files" << endl;
		cout << "Choose Index Option : " << endl;
		cout << endl;
		cout << "1: ID" << endl;
		cout << "2: Year" << endl;
		cout << "3: Cause" << endl;
		cout << "4: State" << endl;
		cout << "5: Death" << endl;
		cout << "6: Age" << endl;
		cout << "Choose Option : ";
		cin >> b;
		if (b > 0 && b <= 6)
		{
			//RB_Read_From_File(b);
			break;
		}
		system("cls");
	}

	system("cls");

	flag = true;
	while (flag)
	{
		int aa;
		cout << "1 : AVL" << endl;
		cout << "2 : Red Black" << endl;
		cout << "3 : Exit" << endl;
		cout << "Choose Tree to Modify : ";
		cin >> aa;
		if (aa == 1)
		{
			AVL_Management(a,b);
		}
		if (aa == 2)
		{
			RB_Management(b,a);
		}
		if (aa == 3)
		{
			flag = false;
		}
	}

}

int main()
{

	Main();
	//string a = "";
	//AVL<int> obj = Read_From_File();

	//WriteToFile(obj);

	/*AVL obj;
	obj.Insert(51);
	obj.Insert(50);
	obj.Insert(54);
	obj.Insert(56);
	obj.Insert(55);
	obj.Insert(53);
	obj.Insert(52);
	obj.Delete(54);
	obj.Display();*/

	/*Red_Black_Tree obj;
	obj.Insert(10);
	obj.Insert(18);
	obj.Insert(7);
	obj.Insert(15);
	obj.Insert(16);
	obj.Insert(57);

	obj.Delete(16);
	obj.printTree();*/

	/*cout << endl
		<< "After deleting" << endl;
	obj.deleteNode(40);*/
	//obj.printTree();

	/*BTree t(3);
	t.insert(10);
	t.insert(20);
	t.insert(5);
	t.insert(6);
	t.insert(12);
	t.insert(30);
	t.insert(7);
	t.insert(17);

	cout << "Traversal of the constructed tree is ";
	t.traverse();*/
}