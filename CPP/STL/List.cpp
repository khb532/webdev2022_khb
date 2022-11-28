#include <iostream>
#include <list>

using namespace std;

/*
List
����� ���� ���� �ڷ���
Vector�� �޸� ���� ��ġ ���� �Ұ�
���۰� ���� ��Ī ����
�ϳ��� ��ũ�� ���󰡾���
[] �� at �Լ��� ���ǵ����� ����
*/

template<typename T>
void print_list(list<T>& lst)
{
	// for (list<int>::size_type i = 0; i < lst.size(); i++)
	for (list<int>::iterator itr = lst.begin(); itr != lst.end(); itr++)
	{
		cout << *itr << " ";
	}
	
	/*for (const auto& elem : lst)
	{
		cout << elem << " ";
	}*/
	
	
	cout << endl;
}

int main(void)
{
	list<int> lst;
	
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);

	print_list(lst);
	
	// List�� iterator�� ++, -- ����ۿ� ����.
	// itr + 5 �Ұ�.

	for (list<int>::iterator itr = lst.begin(); itr != lst.end(); itr++)
	{
		if (*itr == 20)
		{
			lst.insert(itr, 15);
		}
	}
	cout << "===========" << endl;
	print_list(lst);


	for (list<int>::iterator itr = lst.begin(); itr != lst.end(); itr++)
	{
		if (*itr == 30)
		{
			itr = lst.erase(itr);	// erase() : ������ ���� ���� itr�� ��ȯ
		}
	}

	cout << "==========" << endl;
	print_list(lst);


	return 0;
}