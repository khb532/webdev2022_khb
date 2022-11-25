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
	// List의 iterator는 ++, -- 연산밖에 없음.
	// itr + 5 불가.


	return 0;
}