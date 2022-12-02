#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;


int main(void) {

	string s;
	getline(cin, s);
 
	int cnt = 0;
	int word_cnt = 0;
	int i = 0;

	for (i; s[i] != NULL; i++) {
		if (s[i] == ' ') {
			if (cnt) {
				word_cnt++;
				cnt = 0;
			}
		}
		else
			cnt++;
	}

	if (s[i - 1] != ' ')
		word_cnt++;

	
	return 0;
}
