#include <iostream>
#include <cmath>
using namespace std;
#define M 1234567891

int main(void) {
	
	//a ~ z (97, 122)
	int l;
	string h;
	cin >> l >> h;
	long long sum = 0;
	int r = 1;

	for(int i=0; i<h.length();i++){
		sum = (sum + (h[i] - 96) * r) % M;
		r = (r * 31) % M;
	}

	cout << sum;
	return 0;

	
	
	
	
}