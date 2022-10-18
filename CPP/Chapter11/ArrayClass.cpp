#include <iostream>
#include <cstdlib>

using namespace std;

class BoundCheckIntArray
{
private:
	int* arr;
	int arrlen;
	BoundCheckIntArray(const BoundCheckIntArray& arr){}
	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr){ }
	// 복사, 대입 차단
	// 배열은 저장소의 일종이고, 저장소의 복사는 불필요하거나 잘못된 일로 간주 : 저장소의 유일성 보장
public:
	BoundCheckIntArray(int len) :arrlen(len)
	{
		arr = new int[len];
	}
	int& operator[](int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int& operator[](int idx) const
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetLen()const
	{
		return arrlen;
	}
	~BoundCheckIntArray()
	{
		delete[] arr;
	}
};

void ShowData(const BoundCheckIntArray& ref)	// 매개변수가 const로 선언, oeprator[] const 오버로딩 필요
{
	int len = ref.GetLen();
	for (int i = 0; i < len; i++)
	{
		cout << ref[i] << endl;
	}
}

int main(void)
{
	BoundCheckIntArray arr(5);

	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 11;

	ShowData(arr);

	return 0;
}