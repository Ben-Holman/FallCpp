#pragma once 
#include "dateClass.h"
#include <iostream>
using namespace dateSpace;

	dateClass::dateClass() { // Default Constructor 
		day = 1;
		month = 1;
		year = 1900;
	}
	dateClass::dateClass(int newday) { // sets the newday to Day variable 
		day = newday;
	}
	dateClass::dateClass(int newday, int newmonth) { // 2-Parameter Default Constructor
		day = newday;
		month = newmonth;
	}
	dateClass::dateClass(int newday, int newmonth, int newyear) { // 3-Parameter Default Constructor 
		day = newday;
		month = newmonth;
		year = newyear;
	}
	//Setters
	void dateClass::setDay(int newDay) {
		day = newDay;
	}
	void dateClass::setMonth(int newMonth) {
		month = newMonth;
	}
	void dateClass::setYear(int newYear) {
		year = newYear;
	}
	//Getters
	int dateClass::getDay() {
		return day;
	}
	int dateClass::getMonth() {
		return month;
	}
	int dateClass::getYear() {
		return year;
	}


	void dateClass::plusOne(dateClass& date) { // Increments the Day variable by one.
		date.day = date.day + 1;
	}
