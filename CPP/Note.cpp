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

