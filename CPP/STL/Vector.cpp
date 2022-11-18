/*
배열 처럼 객체들을 순차적으로 보관하는 시퀀스 컨테이너 (sequence container)
키를 바탕으로 대응되는 값을 찾아주는 연관 컨테이너 (associative container)
시퀀스 컨테이너의 경우 vector, list, deque

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
		cout << "vec 의" << i + 1 << "번째 원소 : " << vec[i] << endl;
	}
}
/*
생성 : vector<type> obj;
vector의 사이즈를 반환하는 함수 - size_type형 : .size()
vector의 맨 뒤에 원소 삽임 : .push_back(n)


임의의 위치 원소 접근 ([], at) : O(1)

맨 뒤에 원소 추가 및 제거 (push_back/pop_back) : amortized O(1); (평균적으로 O(1) 이지만 최악의 경우 O(n))

임의의 위치 원소 추가 및 제거 (insert, erase) : O(n)

*/


// Iterator 반복자

