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

int main(void)
{
	list<int> lst;
	
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);

	for (list<int>::iterator itr = lst.begin(); itr != lst.end(); ++itr)
	{
		cout << *itr << " ";
	}
	cout << endl;
	// List�� iterator�� ++, -- ����ۿ� ����.
	// itr + 5 �Ұ�.


	return 0;
}