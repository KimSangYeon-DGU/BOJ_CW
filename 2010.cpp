#include <iostream>
using namespace std;

int main() {
	int N, input, sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (i == 0) {
			sum += input;
		}
		else {
			sum += (input - 1);
		}
	}
	cout << sum << endl;
	return 0;
}