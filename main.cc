#include <iostream>
#include <vector>
#include <string>
using namespace std;

extern "C" {
	int asm_add(int x, int y);
	int asm_sub(int x, int y);
	int asm_mul(int x, int y);
	int asm_div(int x, int y);
}

void calculator_prompt() {
	cout << "Welcome to the ASM Calculator 4000 (TM).\n";
	cout << "Enter your calculation: ";
	
	// Obviously, a lot needs to be done with this.
	char op;
	int x, y;
	cin >> x >> op >> y;

	int ans;
	if (op == '+') ans = asm_add(x, y);
	else if (op == '-') ans = asm_sub(x, y);
	else if (op == '*') ans = asm_mul(x, y);
	else if (op == '%') ans = asm_div(x, y);
	else { 
		cout << "Sorry, unrecognized operator.\n";
		exit(1);
	}
	cout << x << op << y << " = " <<ans << endl;
}

int main() {
	calculator_prompt();	
}
