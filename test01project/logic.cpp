#include "logic.h"

int recursion(int number) {

}

int sum_of_digits(int number) {
	number *= (number < 0 ? -1 : 1);
	return recursion(number);
}