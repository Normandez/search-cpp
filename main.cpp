#include <iostream>
#include "search_cpp.h"

int main( int argc, char** argv )
{
	const size_t arr_sz = 10;
	int arr[arr_sz] = { 10, 20, 80, 30, 60, 50, 110, 100, 130, 170 };

	long i = SearchCpp::BinarySearch<int>( arr, arr + arr_sz, 110 );
	std::cout << i << std::endl;

	std::getchar();
	return 0;
}
