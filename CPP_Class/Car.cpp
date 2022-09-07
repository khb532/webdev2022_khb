#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>	// #include <> : ������ϰ� �����Ϸ��� ���� ��ο� �����Ƿ� <>�� ǥ���ؼ� ���� ��ο��� ã����� ��
#include "Car.h"	// #include "" : ����� ��������� ""�� ǥ���ؼ� �������� ��η� ã����� ��
using namespace std;

//#define ID_LEN		20
//#define MAX_SPD		200
//#define FUEL_STEP	2
//#define ACC_STEP	10
//#define BRK_STEP	10
//
//struct Car
//{
//	char gamerID[ID_LEN];
//	int fuelGauge;
//	int curspeed;
//
//
//	void ShowCarState()
//	{
//		cout << "������ ID : " << gamerID << endl;
//		cout << "���ᷮ : " << fuelGauge << endl;
//		cout << "����ӵ� : " << curspeed << endl;
//	}
//
//	void Accel()
//	{
//		if (fuelGauge <= 0)
//			return;
//		else
//			fuelGauge -= FUEL_STEP;
//
//		if (curspeed + ACC_STEP >= MAX_SPD)
//		{
//			curspeed = MAX_SPD;
//			return;
//		}
//		curspeed += ACC_STEP;
//	}
//
//	void Break()
//	{
//		if (curspeed < BRK_STEP)
//		{
//			curspeed = 0;
//			return;
//		}
//		curspeed -= BRK_STEP;
//	}
//};
//int main(void)
//{
//	Car run99 = { "run99",100,0 };
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//
//	Car sped77 = { "sped77",100,0 };
//	sped77.Accel();
//	sped77.Break();
//	sped77.ShowCarState();
//
//	return 0;
//}


void Car::InitMembers(const char* ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
{
	cout << "������ ID : " << gamerID << endl;
	cout << "���ᷮ : " << fuelGauge << "%" << endl;
	cout << "����ӵ� : " << curSpeed << "km/s" << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
			return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

