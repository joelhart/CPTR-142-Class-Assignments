/*************************************************************************
 *
 * In-Class Exercise: Class definition
 *
 * File Name: car.cpp
 * Username:  hartjo
 * Username:  fairka
 * Course:    CPTR 142
 *
 */

#include <iostream>
using namespace std;

// https://en.wikipedia.org/wiki/List_of_counties_in_Washington
enum CountyFIPS { FIPS_ADAMS = 1, FIPS_KING = 33, FIPS_WALLA_WALLA = 71 };

class CarRegistration{
	public:
		void	setYear(int newYear);
		void	setCounty(CountyFIPS newCounty);
		void	setCode(int newCode);
		void	printLicenseNum();
	private:
		int			year;
		CountyFIPS	county;
		int			code;
};

void CarRegistration::setYear(int newYear) {
	year = newYear;
}

void CarRegistration::setCounty(CountyFIPS newCounty) {
	county = newCounty;
}

void CarRegistration::setCode(int newCode) {
	code = newCode;
}

// PrintLicenseNum() with format <county>-<year>-<code>
void CarRegistration::printLicenseNum() {
    cout << county << "-" << year << "-" << code << endl;
}

int main() {
   CarRegistration car;

   car.setYear(2019);
   car.setCounty(FIPS_WALLA_WALLA);
   car.setCode(42);
   car.printLicenseNum();

   return 0;
}
