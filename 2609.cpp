#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//유클리드 gcd 알고리즘
/*
1. 임의의 두 수 a, b(a<b)로 a%b=n을 구한다.
2. 만약 n==0이면 b는 a, b의 최대공약수
3. n!=0이라면 a=b, b=n 대입 후 다시 n을 구한다.

- lcm 알고리즘
1. a, b의 최대공약수 구하기
2. a를 최대공약수로 나눈 값에 b 곱하기
3. 반대도 성립
>>이건 내가 찾은 거고 원래는 아래의 식 이용.
   최대공약수 * 최소공배수 = 두 수의 곱
   최소공배수 = 두 수의 곱 / 최대공약수
*/

int gcd(int a, int b) {
	int temp;
	if (b > a) {
		temp = a;
		a = b;
		b = temp;
	}
	while (b) {
		int n = a % b;
		if (n == 0) { // b가 a, b의 최대공약수
			return b;
		}
		a = b;
		b = n;			

	}
}


int lcm(int a, int b) {
	int g = gcd(a, b);
	return a / g * b; // a가 b보다 작을 경우 위의 함수를 거친 뒤에도 그대로 아닌가?
					// 생각했는데 사실 a, b 대소관계는 상관없을듯
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	cout << lcm(a, b) << endl;
	
	return 0;
	
}