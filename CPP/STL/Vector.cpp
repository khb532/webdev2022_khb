/*
�迭 ó�� ��ü���� ���������� �����ϴ� ������ �����̳� (sequence container)
Ű�� �������� �����Ǵ� ���� ã���ִ� ���� �����̳� (associative container)
������ �����̳��� ��� vector, list, deque

*/

#include <iostream>
#include <vector>
using namespace std;

//int main(void)
//{
//	vector<int> vec;
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);
//
//	for (vector<int>::size_type i = 0; i < vec.size(); i++)
//	{
//		cout << "vec ��" << i + 1 << "��° ���� : " << vec[i] << endl;
//	}
//	/*vector<int>::iterator itr = vec.begin();
//	auto a = vec.begin();
//	cout << &itr << ","<< &a << endl;*/
//}


/*
���� : vector<type> obj;
vector�� ����� ��ȯ�ϴ� �Լ� - size_type�� : .size()
vector�� �� �ڿ� ���� ���� : .push_back(n)


������ ��ġ ���� ���� ([], at) : O(1)

�� �ڿ� ���� �߰� �� ���� (push_back/pop_back) : amortized O(1); (��������� O(1) ������ �־��� ��� O(n))

������ ��ġ ���� �߰� �� ���� (insert, erase) : O(n)

*/


// Iterator �ݺ���

// �ݺ��ڴ� �����̳ʿ� ���ҿ� ������ �� �ִ� �����Ϳ� ���� ��ü

/*
vec.begin() : ������ ù��° ���� vec[0]
vec.end() : ������ ������ ������ ��ĭ ��[n+1]
begin() == end() : ���Ұ� ���� ����

*/
/*
for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
{
	cout << *itr << endl;
}	// iterator�� �̿��� ���� ��ü ���

vector<int>::iterator itr = vec.begin() + 2;
cout << "3��° ���� : " << *itr << endl;	
	// begin() + n : 1 + n ��° ����
*/
template <typename T>
void print_vector(vector<T>& vec)
{
	cout << "vec :";
	for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
	{
		cout << " " << *itr;
	}
	cout << endl << "----------------" << endl;
}

int main(void)
{
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	print_vector(vec);

	vec.insert(vec.begin() + 3, 33);	// insert(location, value)
	cout << "vec + insert 33" << endl;
	print_vector(vec);

	vec.erase(vec.begin() + 3);			// erase(loaction)
	cout << "vec + erase 33" << endl;
	print_vector(vec);


	vector<int>::iterator begin_itr = vec.begin();
	vector<int>::iterator end_itr = vec.end();

	/*for (; begin_itr != end_itr; ++begin_itr) 
	{
		if (*begin_itr == 20) {
			vec.erase(begin_itr);
		}
	}*/
	// vector���� insert, erase �� ���Ҹ� �����ϴ� ���� �Ŀ��� ������ begin, end �� ��ȿ, ó������ �ٽ� �����ؾ���
	//for (; begin_itr != end_itr; ++begin_itr)
	//{
	//	if (*begin_itr == 20) 
	//	{
	//		vec.erase(begin_itr);
	//		begin_itr = vec.begin();	// begin_itr�� �� ����, �ٸ� ó������ �ٽ� Ž���ϰԵ�
	//	}
	//}
	/*for (vector<int>::size_type i = 0; i != vec.size(); i++)
	{
		if (vec[i] == 20)
		{
			vec.erase(vec.begin() + i);
			i--;
		}
	}*/

	// vector<int>::const_iterator = vec.cbegin() + 2;	const iterator�� ����Ű�� ���Ͱ� ���� �Ұ�
	// const_iterator �� cbegin(), cend() ... c~()
	// �ݺ����� ���� ���������ʰ� ������ �ϴ°�� ���

	// reverse_iterator
	// vector<int>::reverse_iterator r_itr = vec.rbegin();
	// rbegin() : ������������ ��ġ
	// rend() : ù ������ �� ��ġ
	// reverse_iterator �� rbegin(), rend() ... r~()

	// const_reverse_iterator
	// const_reverse_iterator �� crbegin(), crend() ... cr~()

	/*for (vector<int>::size_type i = 0; i != vec.size(); i++)
	{
		if (vec[i] == 20)
		{
			vec.erase(vec[i]);
		}
	}*/
	

	return 0;
}