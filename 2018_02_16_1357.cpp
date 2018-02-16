/*
�Ű������� ���ڸ� Reverse���ִ� Rev�Լ��� �������.
Rev�Լ� ���� ������ �Ű������� 10���� ������ ��� �������� ���ϰ�
�������� ����ؼ� �����Ͽ� �̸� ������ ������ 10�� �ڸ����� ���Ͽ�
���� ���� ���� �����Ѵ�.
ù ��° if��(quotient == 0)�� �� �ڸ� ���� ���� ����ó���̸�, 
�� ��° if��(quotient < 10)�� ������ ������ �׸��ϱ� ���� ���ǹ��̴�.
�׸��Ѵٴ� ������ ���� �� �ִ� ��(��)�� 10 �̸��̸� ���̻��� �������� �ǹ̰� �������� ������ �����Ͽ���.
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