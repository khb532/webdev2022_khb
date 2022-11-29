#include <iostream>
#include <set>

using namespace std;


template <typename T>
void print_set(set<T>& s)
{
    // SET의 모든 원소들을 출력하기
    std::cout << "[ ";
    for (typename set<T>::iterator itr = s.begin(); itr != s.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << "]" << endl;
}
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(40);
    s.insert(30);

    cout << "순서대로 정렬되서 출력" << endl;
    print_set(s);

    cout << "20 이 s 의 원소인가? : ";
    auto itr = s.find(20);

    if (itr != s.end()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    cout << "25 가 s 의 원소인가? : ";
    itr = s.find(25);

    if (itr != s.end()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}