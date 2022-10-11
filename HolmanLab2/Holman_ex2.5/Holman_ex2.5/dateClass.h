#pragma once 
namespace dateSpace {

	class dateClass {
	public:
		//Constructors
		dateClass();
		dateClass(int newday);
		dateClass(int newday, int newmonth);
		dateClass(int newday, int newmonth, int newyear);
		//Setters
		void setDay(int newDay);
		void setMonth(int newMonth);
		void setYear(int newYear);
		//Getters
		int getDay();
		int getMonth();
		int getYear();
		//Manipulators
		void plusOne(dateClass& date);
		//Display Date
		friend void displayDate(dateClass date);
	private:
		int day = 1;
		int month = 1;
		int year = 1900;
	};
};