#ifndef TODO_H
#define TODO_H

#include <string>

class Todo
{
	public:
		Todo(const std::string& newTitle, const std::string& newDate,
			const std::string& newTime, const std::string& newLocation,
			int newPriority) : title(newTitle), date(newDate),
			time(newTime), location(newLocation), priority(newPriority) {}

		std::string getTitle() const;
		std::string getDate() const;
		std::string getTime() const;
		std::string getLocation() const;
		int getPriority() const;
		
		void setTitle(const std::string& newTitle);
		void setDate(const std::string& newDate);
		void setTime(const std::string& newTime);
		void setLocation(const std::string& newLocation);
		void setPriority(int newPriority);

		bool operator<(const Todo& otherTodo) const;

	private:
		std::string title;
		std::string date; //combine date and time into a single int?
		std::string time;
		std::string location;
		int priority;
};

#endif // !TODO_H

