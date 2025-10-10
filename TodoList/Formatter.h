#ifndef FORMATTER_H
#define FORMATTER_H

#include "TodoList.h"

class Formatter
{
	public:
		static std::string formatDate(const std::string& date);
		static std::string formatTime(const std::string& time);
		static std::string formatTitle(const std::string& title);
};

#endif // !FORMATTER_H

