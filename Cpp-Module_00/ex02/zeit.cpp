#include <vector>
#include <algorithm>
#include <functional>
#include <cctype>
#include <string>
#include <iostream>
#include <ctime>

int	main( void )
{
	std::time_t	now = time(nullptr);

	localtime(&now);
	std::cout << "[" << time.tm_year << time.tm_mon << time.tm_mday << "_"
	<< time.tm_hour << time.tm_min << time.tm_sec << "]" << std::endl;
}