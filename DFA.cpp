#include<iostream>
#include<string>
using namespace std;
class state {
public:
	state *alink = 0, *blink = 0, *trap = 0;
	state* transition(char t) {
		if (t == 'a') {
			return alink;
		}
		else if (t == 'b') {
			return blink;
		}
		else {
			return trap;
		}
	}
};
int main() {
	string input;
	cin >> input;
	state q0, q1, q2, q3, q4, q5;
	q0.alink = &q3;
	q0.blink = &q2;
	q0.trap = &q2;
	q1.alink = &q3;
	q1.blink = &q5;
	q1.trap = &q2;
	q2.alink = &q2;
	q2.blink = &q2;
	q2.trap = &q2;
	q3.alink = &q1;
	q3.blink = &q2;
	q3.trap = &q2;
	q4.alink = &q2;
	q4.blink = &q5;
	q4.trap = &q2;
	q5.alink = &q2;
	q5.blink = &q4;
	q5.trap = &q2;
	state *current = &q0;
	for (int i = 0;i<input.length();i++) {
		current = current->transition(input[i]);
	}
	if (current == &q4) {
		cout << input << " is accepted"<<endl;
	}
	else {
		cout << input << " not accepted"<<endl;
	}
	return 0;
}
