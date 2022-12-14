#include <iostream>
#include <cstring>
using namespace std;


int main(void) {
	string word;
	cin >> word;
	int arr[26];
	fill_n(arr, 26, -1);

	for (int i = 0; i < word.length(); i++) {
		if(arr[word[i]-97]==-1)
			arr[word[i] - 97] = i;
	}


	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}

	/*
	string STL 활용
	find 함수 : 입력 문자열이 최초로 등장하는 위치의 인덱스 반환
	만약 없는 문자열이면 string::npos 반환.
	npos 값은 -1로 정의되었지만 자료형이 unsigned 이므로 2의 보수 개념에 의해 
	표현할 수 있는 최대 크기의 양수 출력 
	>> unsigned가 아닌 int형으로 출력

	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin>>s;
	for( int i=0; i<alphabet.length();i++)
		cout << (int)s.find(alphabet[i]) >> " ";

	strlen과 length의 차이
	strlen은 인자를 char 형 포인터로, length는 그냥 string 뒤에 함수 붙이면 됨
	
	
	*/

	return 0;
}