
#include <iostream>
using namespace std;


int main(void) {
	int num;
	cin >> num;
	int* arr = new int[num];
	int max, min;

	

	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	max = arr[0];
	min = arr[0];

	for (int i = 0; i < num; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}


	cout << min << " " << max;
	delete[]arr;
	return 0;
}


/*
#include <bits/stdc++.h>

using namespace std;

​

int main() {
	

		
	int n, MAX = -1000001, MIN = 1000001;
	
		cin >> n;
	
		int arr[n];
	

		
		for (int i = 0; i < n; i++) {
			11
				cin >> arr[i];
			12
				MAX = max(arr[i], MAX);
			13
				MIN = min(arr[i], MIN);
			14
		}
	
		cout << MIN << ' ' << MAX;
	
}
*/