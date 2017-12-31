/*
이 문제는 꽂을 수 플러그는 1개 존재하고
N개의 멀티탭은 플러그가 m개 존재할 때 
사용가능한 플러그 개수를 묻는 문제이다.
모든 멀티탭은 출력선 1개와 입력선 m개를 가지고 있고
출력선 1개는 반드시 다른 플러그(입력)와 꽂아야 한다.
따라서 출력선 1개는 입력선 1개를 차지하게 되고, 
A개의 입력선이 존재한다면 N개의 출력선을 뺀 B개의 입력선만이 플러그로 사용가능하다
따라서 식은 A - N = B가 된다. (N개의 멀티탭은 N개의 출력선이 존재한다.)
*/
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
