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


/*
#include <vector>                    // vector�� ����ִ� �������
vector<int> v;                       // intŸ�� ���� ����
vector<int> v = { 1, 2, 3};          // int�� ���� ���� �� 1, 2, 3 ���� �ʱ�ȭ
vector<int> v[10];                   // intŸ�� ���� �迭(ũ�� : 10) ����
vector<int> v[] = {{ 1, 2}, {3, 4}}; // int�� ���� �迭 ����(���� ���������� ���� ����)
vector<vector<int>> v;               // 2���� ���� ����(��� �� ��� ����)
vector<int> v(5);                    // 5���� ���Ҹ� 0���� �ʱ�ȭ
vector<int> v(5, 3);                 // 5���� ���Ҹ� 3���� �ʱ�ȭ
vector<int> v2(v);                   // ���� v�� �����Ͽ� ����v2 ����
*/
/*
v.push_back(10);  // ������ ��ġ�� ���� 10 �߰�

vector<int>::iterator it = v.begin();
it = v.insert(it, 2); //�Ǿտ� 2�� ����
it = v.insert(it, 2, 3); // �Ǿտ� 3�� 2�� ����
it = v.insert(it+2, 2, 4); // 2��°���� 4�� 2�� ����
*/

/*
v.pop_back();                        // �������� ���� �� ����
v.erase(vec.begin()+10);             // index 10�� ���� ����
v.erase(vec.begin(), vec.begin()+5);  // index 0~5�� ���� ����
v.clear();                           //��� �� ����
*/

/*
v.size();   //vector�� ���� ����
v.capacity; //vector�� ������ ũ��

vector<int> v;
for (int i=0; i<5; i++)
  v.push_back(i); //vector ��� �߰�


for (int i = 0; i < v.size(); i++)
  cout << v[i] << " "; //��� �� ��� : 0 1 2 3 4

cout << v[2] << endl;      //index 2�� �� ��� : 2
cout << v.front() << endl; //ó�� ��� ��� : 0
cout << v.back() << endl;  //������ ��� ��� : 4
*/



// ���� ��� for��

for (int elem : vec)
{
	cout << "Element : " << elem << endl;
}	// elem = vec[i]; �� ���� �ݺ�

template <typename T>
void print_vector_range_based(vector<T>& vec)
{
	for (const auto& elem : vec)
	{
		cout << "Element : " << elem << endl;
	}
}	// ������� ���� ��ü ���