#include "rbt.hpp"
#include <vector>

void test1(vector<int>&arr)
{
	RBTree<int, int> t;

	for (auto&e : arr)
	{
		t[e]++;
	}


	t.Inorder();
	cout << "_____У��________" << endl;

	if (t.Check())
		cout << "�Ǻ����" << endl;
	else
		cout << "���Ǻ����" << endl;
}

int main()
{

	cout << "����1" << endl;
	vector<int>arr1 = { 16, 3, 7, 11, 9, 26, 18, 14, 15 };

	test1(arr1);


	cout << endl << "����2" << endl;
	vector<int>arr2 = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
	test1(arr2);




	system("pause");

	return 0;
}