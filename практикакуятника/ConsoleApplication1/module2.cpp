#include "module2.h"

struct kniga
{
	string fam;
	string name_knigi;
	int data;
};
void find()
{
	string enter_fam, enter_name;
	int x = 0;
	ifstream fin("Bibl.txt");
	ofstream fout("intermediate.txt");
	while (true)
	{
		string v;
		getline(fin, v);
		if (!fin.eof())
			x++;
		else
			break;
	}
	fin.clear(); //перейти в начало файла
	fin.seekg(0);
	kniga* arr1 = new kniga[x];
	for (int i = 0; i < x; i++)
	{
		fin >> arr1[i].fam >> arr1[i].name_knigi >> arr1[i].data;
	}
	cout << "Введите фамилию автора:";
	cin >> enter_fam;
	fout << "По введенной фамилии-" << enter_fam << ": ";
	cout << "Результат:" << endl;
	for (int i = 0; i < x; i++)
	{
		if (arr1[i].fam == enter_fam)
		{
			if (arr1[i].data >= 1960)
			{
				cout << arr1[i].name_knigi << endl;
				fout << arr1[i].name_knigi << "; ";
			}
		}
	}

	fout.close();
	fin.close();
	delete[] arr1;
}