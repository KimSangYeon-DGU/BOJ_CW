/*
1�� 00�� ����ؼ�
�� �ڸ��� ���� �� �ִ� ���ڴ� �� 1��,
�� �ڸ��� ���� �� �ִ� ���ڴ� �� 2��,
�� �ڸ��� ���� �� �ִ� ���ڴ� �� �ڸ��� ������� ���� �ڿ� 00�� ���� ��� + �� �ڸ��� ������� ���� �ڿ� 1�� ���� ���
�ݺ� ���
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