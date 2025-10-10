#include "Formatter.h"

#include <vector>

using namespace std;

string Formatter::formatDate(const string& date)
{
	int month = stoi(date.substr(0, 2));
	int day = stoi(date.substr(2, 2));
	int year = stoi(date.substr(4, 2));
	year += 2000;

	vector<string> months = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};

	string monthName;
	if (month >= 1 && month <= 12)
	{
		monthName = months[month - 1];
	}

	return monthName + " " + to_string(day) + ", " + to_string(year);
}

string Formatter::formatTime(const string& time)
{
	int hour = stoi(time.substr(0, 2));
	int minute = stoi(time.substr(2, 2));

	return to_string(hour) + ":" + (minute < 10 ? "0" : "") + 
		to_string(minute);
}

string Formatter::formatTitle(const string& title)
{
	return "[DONE] " + title;
}