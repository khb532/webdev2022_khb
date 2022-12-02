#include <iostream>
#include <list>

using namespace std;

/*
List
양방향 연결 구조 자료형
Vector와 달리 임의 위치 접근 불가
시작과 끝만 지칭 가능
하나씩 링크를 따라가야함
[] 나 at 함수가 정의되있지 않음
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
	
	// List의 iterator는 ++, -- 연산밖에 없음.
	// itr + 5 불가.

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
			itr = lst.erase(itr);	// erase() : 삭제한 원소 다음 itr을 반환
		}
	}

	cout << "==========" << endl;
	print_list(lst);


	return 0;
}