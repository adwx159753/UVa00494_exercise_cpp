#include <iostream>
#include <string>
using namespace std;


string space(string a) {
	for (int i = 0; i <= a.length(); i++) {
		if (!isalpha(a[i])) {
			a[i] = ' ';
		}
	}
	return a;
}

void count_word(string a) {
	int count = 0;
	if (!a.empty()) {
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == ' ' && isalpha(a[i + 1])) {
				count++;
			}
		}
		cout << count + 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
}

int main() {
	string a;
	while (getline(cin, a)) {
		count_word(space(a));//計算字數並輸出
	}
	return 0;
}