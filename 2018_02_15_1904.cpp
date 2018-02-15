/*
1과 00을 사용해서
한 자리로 만들 수 있는 숫자는 총 1개,
두 자리로 만들 수 있는 숫자는 총 2개,
세 자리로 만들 수 있는 숫자는 한 자리로 만들었던 숫자 뒤에 00을 붙인 경우 + 두 자리로 만들었던 숫자 뒤에 1을 붙인 경우
반복 계산
*/

#include <iostream>
#define MOD 15746
using namespace std;
typedef long long ll;

ll memo[1000001];
int main() {
	ll N;
	cin >> N;
	memo[0] = 1;
	memo[1] = 2;
	for (ll i = 2; i < N; i++) {
		memo[i] = (memo[i - 1] + memo[i - 2]) % MOD;
	}
	cout << memo[N-1] << endl;
	return 0;
}