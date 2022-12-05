#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	string num = to_string(a * b * c);


	for (int i = 0; i < 10; i++) {  // i는 0~9
		int cnt = 0;				// 숫자의 개수
		for (int idx = 0; num[idx] != NULL; idx++) {
			if (num[idx] - '0' == i)  // 11720번에서는 int변환 없이도 됐는데 그건 연산자에 의한 형 변환때문?
				cnt++;
		}
		cout << cnt << endl;
	}

	return 0;

	/* 세 가지 풀이법 정리
		<핵심> int 배열[10]을 만든 후 인덱스를 count 값으로 이용!

	1. 숫자를 문자열로 변환하여 저장(to_string, 반대는 stoi()) 후
	   아스키 코드 뺄셈으로 count 인덱스 값 증가
	2. 곱한 값을 형 변환 없이 int로 저장 후
	   몫과 나머지를 이용하여 count 인덱스 값 증가
	   count[result %10]++
	   result /= 10;

	< 새롭게 알게 된 것>
	1. foreach 구문
	for( char c : s) // 문자열 s의 각 문자 c에 대하여 (파이썬이랑 비슷?)
	count[c - '0']++;

	2. 굳이 9번 반복하면서 숫자 셀 필요 없이 배열의 인덱스를 활용하여 카운트
	*/
	return 0;
}