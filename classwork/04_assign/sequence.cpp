#include <iostream>
#include <vector>
#include "sequence.h"

using std::string;


/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/

void display_vector(const std::vector<std::string>& names)
{
	for (auto str : names)
	{
		std::cout << str << "\n";
	}
}



/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/

void update_vector_element(std::vector<std::string>& names, std::string search_value, std::string replace_value)
{
	for (auto& str : names)
	{
		if (str == search_value)
		{
			str = replace_value;
			break;
		}
	}
}