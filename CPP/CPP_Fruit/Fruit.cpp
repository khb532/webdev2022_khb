#include <iostream>

using namespace std;

/*

==객체 생성 방법==

ClassName objname -> 일반적인 변수의 선언 방식
ClassName * ptrObj = new ClassName -> 동적할당 방식 (힙 할당)

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
		int num = money / APPLE_PRICE; // 낸돈을 사과 가격으로나누면 구매할수 있는 사과 수, money>appleprice = 0
		numOfApples -= num;
		myMoney += money;
		return num; // 구매한 사과 수
	}

	void ShowSalesResult()
	{
		cout << "남은 사과 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl << endl;
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
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "사과 개수 : " << numOfApples << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0); // price, num, money
	FruitBuyer buyer;
	buyer.InitMembers(5000); // money

	buyer.BuyApples(seller, 2000);	// 2000원 어치 구매 =2개
	// seller.SaleApples()호출됨

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}