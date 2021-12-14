#include "easyfind.hpp"

int main(void)
{
	std::list<int> myList;
	for(int i = 0; i < 50; i++)
		myList.push_back(i);
	for(int i = 0; i > -50; i--)
		myList.push_back(i);

	easyfind(myList, 142);
	easyfind(myList, 42);
	easyfind(myList, -42);
	easyfind(myList, -2);
	easyfind(myList, 642);
	easyfind(myList, 0);
	easyfind(myList, -89);
	easyfind(myList, 92);
	return (0);
}