/*
Functor
*/

#include <iostream>
using namespace std;

class SortRule
{
public:
	virtual bool operator()(int num1, int num2) const = 0;
};

class AscendingSort : public SortRule
{
public:
	bool operator()(int num1, int num2) const
	{
		if (num1 > num2)
			return true;
		else
			return false;
	}
};

class DescendingSort : public SortRule
{
public:
	bool operator()(int num1, int num2) const
	{
		if (num2 > num1)
			return true;
		else
			return false;
	}
};

class DataStorage
{
private:
	int* arr;			//배열
	int idx;			//현재 배열의 길이
	const int MAX_LEN;	//최대 허용 배열 길이

public:
	DataStorage(int arrlen) :idx(0), MAX_LEN(arrlen)
	{
		arr = new int[MAX_LEN];
	}
	void AddData(int num)
	{
		if (MAX_LEN <= idx)
		{
			cout << "Not enough memory" << endl;
			return;
		}
		arr[idx++] = num;
	}
	void ShowData()
	{
		for (int i = 0; i < idx; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
	void SortData(const SortRule& functor)
	{
		for (int i = 0; i < idx-1; i++)		// 버블 정렬
		{
			for (int j = 0; j < idx-1-i; j++)
			{
				if(functor(arr[j],arr[j+1]))
				{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				}
			}
		}
	}
};

int main(void)
{
	DataStorage storage(5);
	storage.AddData(40);
	storage.AddData(30);
	storage.AddData(50);
	storage.AddData(10);
	storage.AddData(20);

	storage.SortData(AscendingSort());
	storage.ShowData();

	return 0;
}