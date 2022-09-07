#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// 문제 2번 -> Q05-1에서 재사용

enum COMP_POS
{
	CLERK, SENIOR, ASSIST, MANAGER
};

void ShowPos(int pos)
{
	switch (pos)
	{
		case CLERK:
		{
			cout << "사원" << endl;
			break;
		}
		case SENIOR:
		{
			cout << "주임" << endl;
			break;
		}
		case ASSIST:
		{
			cout << "대리" << endl;
			break;
		}
		case MANAGER:
		{
			cout << "과장" << endl;
			break;
		}
	}
}

class NameCard
{
private:
	char* m_name;
	char* m_compname;
	char* m_phone;
	int m_pos; 
	

public:
	NameCard(const char* name, const char* compname, const char* phone, int pos)
	{
		int len = strlen(name) + 1;
		m_name = new char[len];	// len만큼 new할당
		strcpy(m_name, name);	// 포인터변수에는 넣을수 없으니 strcpy 이용해서 문자열 복사

		len = strlen(compname) + 1;
		m_compname = new char[len];
		strcpy(m_compname, compname);

		len = strlen(name) + 1;
		m_phone = new char[len];
		strcpy(m_phone, phone);

		m_pos = pos;
	}

	void ShowNameCardInfo()
	{
		cout << "이름 : " << m_name << endl;
		cout << "회사 : " << m_compname << endl;
		cout << "전화번호 : " << m_phone << endl;
		cout << "직급 : ";
		ShowPos(m_pos);
	}
	~NameCard()
	{
		delete[] m_name;
		delete[] m_compname;
		delete[] m_phone;
	}

};

int main(void)
{
	NameCard manClerk("Lee", "ANCEng", "010-1111-2222", COMP_POS::CLERK);

	manClerk.ShowNameCardInfo();

	return 0;
}