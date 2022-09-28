#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

// ���� 2�� -> Q05-1���� ����

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
			cout << "���" << endl;
			break;
		}
		case SENIOR:
		{
			cout << "����" << endl;
			break;
		}
		case ASSIST:
		{
			cout << "�븮" << endl;
			break;
		}
		case MANAGER:
		{
			cout << "����" << endl;
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
		m_name = new char[len];	// len��ŭ new�Ҵ�
		strcpy(m_name, name);	// �����ͺ������� ������ ������ strcpy �̿��ؼ� ���ڿ� ����

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
		cout << "�̸� : " << m_name << endl;
		cout << "ȸ�� : " << m_compname << endl;
		cout << "��ȭ��ȣ : " << m_phone << endl;
		cout << "���� : ";
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