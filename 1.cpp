#include <iostream>
#define endl "\n"
#define fast ios::sync_with_stdio(0) cin.tie(nullptr) cout.tie(nullptr)
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> dp(91);
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= 90; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}
	cout << dp[N];
}