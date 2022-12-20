#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);


	int t, n, k;
	cin >> t;


	while (t--) {
		cin >> k >> n;
		int* arr = new int[n];


		for (int i = 0; i < n; i++) {
			arr[i] = i + 1;
		}

		for (int j = 0; j < k; j++) {
			for (int i = 0; i < n - 1; i++)
				arr[i + 1] += arr[i];
		}

		cout << arr[n - 1] << endl;
	}
}