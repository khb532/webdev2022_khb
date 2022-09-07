#include <iostream>

using namespace std;

/*

==��ü ���� ���==

ClassName objname -> �Ϲ����� ������ ���� ���
ClassName * ptrObj = new ClassName -> �����Ҵ� ��� (�� �Ҵ�)

FruitSeller seller;
FruitBuyer buyer;
FruitSeller* seller = new FruitSeller;  
FruitBuyer* buyer = new FruitBuyer;





*/

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE; // ������ ��� �������γ����� �����Ҽ� �ִ� ��� ��, money>appleprice = 0
		numOfApples -= num;
		myMoney += money;
		return num; // ������ ��� ��
	}

	void ShowSalesResult()
	{
		cout << "���� ��� : " << numOfApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl << endl;
	}

};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "��� ���� : " << numOfApples << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0); // price, num, money
	FruitBuyer buyer;
	buyer.InitMembers(5000); // money

	buyer.BuyApples(seller, 2000);	// 2000�� ��ġ ���� =2��
	// seller.SaleApples()ȣ���

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}