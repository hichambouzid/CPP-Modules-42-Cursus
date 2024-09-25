#include <iostream>
#include <ctime>

void add_zero(int number)
{
	if (number < 10)
		std::cout << 0 << number;
	else
		std::cout << number;
}

int main()
{
	struct tm zone_time;
	time_t timestamp;
	time(&timestamp);
	zone_time = *localtime(&timestamp);
	std::cout << ctime(&timestamp);
	std::cout << "\n" << '[' << zone_time.tm_year + 1900;
	add_zero(zone_time.tm_mon + 1);
	add_zero(zone_time.tm_mday);
	std::cout << '_';
	add_zero(zone_time.tm_hour);
	add_zero(zone_time.tm_min);
	add_zero(zone_time.tm_sec);
	std::cout << "] ";
}