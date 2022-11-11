상단 프로젝트 - 
최하단 프로젝트 속성 - 
C/C++ - 
언어 - 
오른쪽 메뉴 : 준수모드 아니오
적용 확인
// 매개변수 const무시.

///////
#define _CRT_SECURE_NO_WARNINGS // scanf 무시

scanf_s 이용

//C,C++ 기본 배열은 경계검사를 하지 않는다.
int arr[3] = { 1,2,3 };
cout << arr[-1] << endl;	// arr의 주소 + sizeof(int) * -1 위치에 접근

C++ 에서 접근제어자는 Class 기준으로,
Java에서 접근제어자는 Instance 기준으로 작동.

class AAA
{
private:
	int num = 10;

public:
	void AAA(const AAA& ref)
	{
		num += ref.num;	
		// 이 구문에서 C++은 같은 AAA클래스이므로 ref의 private 멤버 접근 O
		// Java는 다른 instance 이므로 X
	}
};
