#include <iostream>
#include "Banking_System.h"



int main(void)
{
	accArr List[ALEN];
	int acc_Count = 0;
	int menu;

	while(1)
	{
		ShowMenu();
		std::cin >> menu;

		switch (menu)
		{
		case 1:
			MakeAcc(List, &acc_Count);
			break;
		case 2:
			Deposit(List, &acc_Count);
			break;
		case 3:
			Withdraw(List, &acc_Count);
			break;
		case 4:
			ShowAcc(List, &acc_Count);
			break;
		case 5:
			return 0;
		default : 
			std::cout << "잘못 입력하셨습니다. 다시 입력하세요" << std::endl;
		}

	}
	
	return 0;

}