#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//��Ŭ���� gcd �˰���
/*
1. ������ �� �� a, b(a<b)�� a%b=n�� ���Ѵ�.
2. ���� n==0�̸� b�� a, b�� �ִ�����
3. n!=0�̶�� a=b, b=n ���� �� �ٽ� n�� ���Ѵ�.

- lcm �˰���
1. a, b�� �ִ����� ���ϱ�
2. a�� �ִ������� ���� ���� b ���ϱ�
3. �ݴ뵵 ����
>>�̰� ���� ã�� �Ű� ������ �Ʒ��� �� �̿�.
   �ִ����� * �ּҰ���� = �� ���� ��
   �ּҰ���� = �� ���� �� / �ִ�����
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
		if (n == 0) { // b�� a, b�� �ִ�����
			return b;
		}
		a = b;
		b = n;			

	}
}


int lcm(int a, int b) {
	int g = gcd(a, b);
	return a / g * b; // a�� b���� ���� ��� ���� �Լ��� ��ģ �ڿ��� �״�� �ƴѰ�?
					// �����ߴµ� ��� a, b ��Ұ���� ���������
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