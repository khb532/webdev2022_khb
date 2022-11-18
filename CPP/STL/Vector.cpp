/*
�迭 ó�� ��ü���� ���������� �����ϴ� ������ �����̳� (sequence container)
Ű�� �������� �����Ǵ� ���� ã���ִ� ���� �����̳� (associative container)
������ �����̳��� ��� vector, list, deque

*/

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	for (vector<int>::size_type i = 0; i < vec.size(); i++)
	{
		cout << "vec ��" << i + 1 << "��° ���� : " << vec[i] << endl;
	}
}
/*
���� : vector<type> obj;
vector�� ����� ��ȯ�ϴ� �Լ� - size_type�� : .size()
vector�� �� �ڿ� ���� ���� : .push_back(n)


������ ��ġ ���� ���� ([], at) : O(1)

�� �ڿ� ���� �߰� �� ���� (push_back/pop_back) : amortized O(1); (��������� O(1) ������ �־��� ��� O(n))

������ ��ġ ���� �߰� �� ���� (insert, erase) : O(n)

*/


// Iterator �ݺ���

