#include "module1.h"


struct kniga
{
	string fam;
	string name_knigi;
	int data;
};
void enter()
{
	ofstream fout("Bibl.txt");
	int n;
	cout << "Введите кол-во авторов:";
	cin >> n;
	kniga* arr = new kniga[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Автор " << i + 1 << endl;
		cout << " Фамилия:";
		cin >> arr[i].fam;
		cout << " Название:";
		cin >> arr[i].name_knigi;
		cout << " Год издания:";
		cin >> arr[i].data;
		fout << arr[i].fam << " " << arr[i].name_knigi << " " << arr[i].data << endl;
	}
	fout.close();
	delete[] arr;
}