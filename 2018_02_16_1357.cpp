/*
매개변수의 숫자를 Reverse해주는 Rev함수를 만들었다.
Rev함수 내부 로직은 매개변수를 10으로 나눠서 몫과 나머지를 구하고
나머지를 계속해서 축적하여 이를 가지고 적절한 10의 자릿수를 곱하여
최종 값을 구해 리턴한다.
첫 번째 if문(quotient == 0)은 한 자리 수에 대한 예외처리이며, 
두 번째 if문(quotient < 10)은 나누는 연산을 그만하기 위한 조건문이다.
그만한다는 기준은 나눌 수 있는 값(몫)이 10 미만이면 더이상의 나눗셈은 의미가 없음으로 조건을 설정하였다.
*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int Rev(int num) {
	int result = 0;
	int expon = 0;
	int quotient = 0;
	vector<int> remainder;
	while (true) {
		quotient = num / 10;
		remainder.push_back(num % 10);
		if (quotient == 0)
			break;
		else if (quotient < 10) {
			remainder.push_back(quotient);
			break;
		}
		else
			num = quotient;
	}
	int length = remainder.size();
	for (int i = length - 1; i >= 0; i--) {
		result += remainder.at(length - 1 - i) * (int)pow(10, (double)i);
	}
	return result;
}

int main() {
	int X, Y;
	cin >> X >> Y;
	cout << Rev(Rev(X) + Rev(Y)) << endl;
	return 0;
}