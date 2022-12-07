#include <iostream>
#include <string>
using namespace std;
// A는 65, a는 97
int main(void) {

	/* 풀이과정
	- 내가 맞은 것:배열 인덱스로 계산하기
	- 몰랐던 것: 굳이 대문자, 소문자 배열 나눌 필요 없음. 
	빈도수 체크 따로 하기


	- 새롭게 알게 된 것
	1. 문자열 함수
	str.length() > 길이 구함 
	이외에도 여러가지
	2. string 길이에는 사실상 제한이 없음
	3. 형 변환 연산자 static_cast<type>
	더 안정적이라고 함
	4. c++은 c스타일과 다르게 문자열 끝에 널문자를 안 붙임
	(안 붙이는 건지 인식을 안하는 건지)
	그래서 길이 계산하면 그대로 나옴

	*/

	string str;
	cin >> str;

	int CNT[26] = {0,}; //대문자

	for (int i = 0; i<str.length(); i++) {
		if (str[i] >= 97) // 소문자
		{
			CNT[str[i] - 97] += 1;
		}
		else // 대문자
			CNT[str[i] - 65] += 1;
		
	}



	int max = 0;
	int num = 0;


	for (int j = 0; j < 26; j++) {
		if (max < CNT[j]) {
			max = CNT[j];
			num = j;
		}
		/* else if ((max == CNT[j]) && (max != 0)) {
			num = 63;
			break;
			
		} */    // 왜 안돼????? 나 진짜 모르겠다...
	}
	int max_count = 0;

	// 최댓값 빈도수 체크
	for (int i = 0; i < 26; i++) {
		if (max == CNT[i])
			max_count++;
	}
	// 최댓값 같은 것이 여러개일 때
	if (max_count > 1)
		cout << "?";
	else
		cout << static_cast<char>(num + 65);

	return 0;




}