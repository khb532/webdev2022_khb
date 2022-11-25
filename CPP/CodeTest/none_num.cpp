#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int>::iterator itr = numbers.begin();
    for (itr; itr != numbers.end(); itr++)
    {
        answer += *itr;
    }

    
    return (45 - answer);
}