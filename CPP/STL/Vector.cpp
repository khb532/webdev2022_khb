/*
배열 처럼 객체들을 순차적으로 보관하는 시퀀스 컨테이너 (sequence container)
키를 바탕으로 대응되는 값을 찾아주는 연관 컨테이너 (associative container)
시퀀스 컨테이너의 경우 vector, list, deque

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
//		cout << "vec 의" << i + 1 << "번째 원소 : " << vec[i] << endl;
//	}
//	/*vector<int>::iterator itr = vec.begin();
//	auto a = vec.begin();
//	cout << &itr << ","<< &a << endl;*/
//}


/*
생성 : vector<type> obj;
vector의 사이즈를 반환하는 함수 - size_type형 : .size()
vector의 맨 뒤에 원소 삽임 : .push_back(n)


임의의 위치 원소 접근 ([], at) : O(1)

맨 뒤에 원소 추가 및 제거 (push_back/pop_back) : amortized O(1); (평균적으로 O(1) 이지만 최악의 경우 O(n))

임의의 위치 원소 추가 및 제거 (insert, erase) : O(n)

*/


// Iterator 반복자

// 반복자는 컨테이너에 원소에 접근할 수 있는 포인터와 같은 객체

/*
vec.begin() : 벡터의 첫번째 원소 vec[0]
vec.end() : 벡터의 마지막 원소의 한칸 뒤[n+1]
begin() == end() : 원소가 없는 벡터

*/
/*
for (vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
{
	cout << *itr << endl;
}	// iterator를 이용한 벡터 전체 출력

vector<int>::iterator itr = vec.begin() + 2;
cout << "3번째 원소 : " << *itr << endl;	
	// begin() + n : 1 + n 번째 원소
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
	// vector에서 insert, erase 등 원소를 변경하는 연산 후에는 현재의 begin, end 는 무효, 처음부터 다시 선언해야함
	//for (; begin_itr != end_itr; ++begin_itr)
	//{
	//	if (*begin_itr == 20) 
	//	{
	//		vec.erase(begin_itr);
	//		begin_itr = vec.begin();	// begin_itr을 재 선언, 다만 처음부터 다시 탐색하게됨
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

	// vector<int>::const_iterator = vec.cbegin() + 2;	const iterator가 가리키는 벡터값 변경 불가
	// const_iterator 는 cbegin(), cend() ... c~()
	// 반복자의 값을 변경하지않고 참조만 하는경우 사용

	// reverse_iterator
	// vector<int>::reverse_iterator r_itr = vec.rbegin();
	// rbegin() : 마지막원소의 위치
	// rend() : 첫 원소의 앞 위치
	// reverse_iterator 는 rbegin(), rend() ... r~()

	// const_reverse_iterator
	// const_reverse_iterator 는 crbegin(), crend() ... cr~()

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
#include <vector>                    // vector가 들어있는 헤더파일
vector<int> v;                       // int타입 벡터 생성
vector<int> v = { 1, 2, 3};          // int형 백터 생성 후 1, 2, 3 으로 초기화
vector<int> v[10];                   // int타입 벡터 배열(크기 : 10) 생성
vector<int> v[] = {{ 1, 2}, {3, 4}}; // int형 백터 배열 생성(행은 가변이지만 열은 고정)
vector<vector<int>> v;               // 2차원 백터 생성(행과 열 모두 가변)
vector<int> v(5);                    // 5개의 원소를 0으로 초기화
vector<int> v(5, 3);                 // 5개의 원소를 3으로 초기화
vector<int> v2(v);                   // 벡터 v를 복사하여 벡터v2 생성
*/
/*
v.push_back(10);  // 마지막 위치에 숫자 10 추가

vector<int>::iterator it = v.begin();
it = v.insert(it, 2); //맨앞에 2를 삽입
it = v.insert(it, 2, 3); // 맨앞에 3을 2개 삽입
it = v.insert(it+2, 2, 4); // 2번째부터 4를 2개 삽입
*/

/*
v.pop_back();                        // 마지막에 넣은 값 제거
v.erase(vec.begin()+10);             // index 10의 값을 제거
v.erase(vec.begin(), vec.begin()+5);  // index 0~5의 값을 제거
v.clear();                           //모든 값 제거
*/

/*
v.size();   //vector의 원소 갯수
v.capacity; //vector의 물리적 크기

vector<int> v;
for (int i=0; i<5; i++)
  v.push_back(i); //vector 요소 추가


for (int i = 0; i < v.size(); i++)
  cout << v[i] << " "; //모든 값 출력 : 0 1 2 3 4

cout << v[2] << endl;      //index 2의 값 출력 : 2
cout << v.front() << endl; //처음 요소 출력 : 0
cout << v.back() << endl;  //마지막 요소 출력 : 4
*/

