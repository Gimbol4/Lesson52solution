#include "logic.h"

bool recursion(int number, int sum) {
	if (number == 0 && sum == 0) {
		return true;

		if ((number == 0 && sum != 0)
			|| (number != 0 && sum == 0)) {
			return false;
		}
	}
}

bool equals(int number, int sum) {
	if (number < 0 || sum < 0) {
		return false;
	}
}
