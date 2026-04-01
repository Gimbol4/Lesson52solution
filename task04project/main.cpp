#include "logic.h"

int main() {
	cout << (equals(-12, 1) ? "Yes" : "No") << endl;
	cout << (equals(1223476, -123) ? "Yes" : "No") << endl;
	cout << (equals(-176, -1) ? "Yes" : "No") << endl;
	cout << (equals(-12873, 1) ? "Yes" : "No") << endl;
	cout << (equals(-67474, 1) ? "Yes" : "No") << endl;
	cout << (equals(-12, 654343) ? "Yes" : "No") << endl;
	cout << (equals(-12, 543) ? "Yes" : "No") << endl;
	cout << (equals(-12, 333) ? "Yes" : "No") << endl;
	cout << (equals(-13543445, 1) ? "Yes" : "No") << endl;

	return 0;
}