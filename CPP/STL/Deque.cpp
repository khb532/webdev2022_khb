#include<iostream>
#include<deque>	

using namespace std;


template <typename T>
void print_deq(deque<T>& deq)
{
	cout << "[ ";
	for (const auto& elem : deq)
	{
		cout << elem << " ";
	}
	cout << "]" << endl;
}

int main(void)
{
	deque<int> dq;
	dq.push_back(10);
	dq.push_back(20);
	dq.push_front(30);
	dq.push_back(40);
	dq.push_front(28);

	print_deq(dq);

	cout << "맨 앞 원소 제거" << endl;

	dq.pop_front();
	print_deq(dq);

	cout << "맨 뒤 원소 제거" << endl;

	dq.pop_back();
	print_deq(dq);


	return 0;
}