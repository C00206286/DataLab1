#include "UnorderedArray.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>


class Gamer
{
public:
	Gamer() {}
	// Destructor function
	~Gamer()
	{
		std::cout << "Destructor called" << std::endl;
	}
	// Define a copy constructor
	Gamer(Gamer const & copy)
	{
		std::cout << "Copy constructor called" << std::endl;
	}
};

template <typename T>
T scalarProduct(T const* pArray, T const* lArray, int const ELEMENTS) {
	T scalarProduct = 0;
	scalarProduct = pArray[0] * lArray[0] + pArray[1] * lArray[1] + pArray[2] * lArray[2];
	return scalarProduct;
}

//auto iterator = vector.begin();
//
//while (iterator != vector.begin());
//{
//	std::find(vector.begin(), vector.end(), val);
//	iterator = vector.erase(iterator);
//}

template <typename T>
std::pair<T, T> minMax(std::vector<T> vector)
{
	auto min = vector[0];
	auto max = vector[0];
	for (std::vector<int>::iterator i = vector.begin(); i != vector.end(); ++i)
	{
		if (*i < min)
		{
			min = *i;
		}
		if (*i > max)
		{
			max = *i;
		}
	}
	return std::pair<T, T>(min, max);
}

template <typename T>
void removeSearch(std::vector<T> vector, int val)
{
	auto iterator = vector.begin();

	while (iterator != vector.end())
	{
		std::find(vector.begin(), vector.end(), val);
		iterator = vector.erase(iterator);
	}

}

template <typename T>
void removeSearch2(std::vector<T> vector, int val)
{
	auto iterator = vector.begin();

	while (iterator != vector.end())
	{
		//std::find(vector.begin(), vector.end(), val);
		if (val == vector[iterator])
		{
			iterator = vector.erase(iterator);
		}
		iterator += 1;
	}

}

int searchNum;

int main() {

	UnorderedArray<int> test(4);

	std::vector<int> vector100;

	int x = 0;
	for (int i = 0; i < 100; i++)
	{
		vector100.push_back(x);
		x = x + 1;
		if (x > 9)
		{
			x = 0;
		}
	};

	for (auto i = vector100.begin(); i != vector100.end(); ++i)
	{
		std::cout << *i << ' ';
	}
	
	test.push(1);
	test.push(2);
	test.push(3);
	test.push(4);

	test.remove(2);
	test.remove(3);
	test.search(3);

	/*std::cout << "Array = ";
	for (int i = 0; i < test.getSize(); i++)
	{
		std::cout << test[i];
	}*/
	/*std::cout << std::endl;
	std::cout << "Search = " << test.search(2) << std::endl;
	std::cout << "Size = " << test.getSize() << std::endl;

	std::cout << "Input search value please." << std::endl;

	std::cout << "Size before removal = " << vector100.size() << std::endl;
	std::cin >> searchNum;
	removeSearch(vector100, searchNum);
	std::cout << "Size after removal = " << vector100.size() << std::endl;*/

	/*for (auto i = vector100.begin(); i != vector100.end(); ++i)
	{
		std::cout << *i << ' ';
	}*/
	
	
	int const ELEMENTS = 10;
	int intArray[] = { 1,2,3,4,5};
	int intArray2[] = { 1,2,3 };
	float floatArray[] ={ 1.1f,2.2f,3.3f};
	float floatArray2[] ={ 1.1f,2.2f,3.3f };

	std::vector<int> intPair;
	intPair.push_back(intArray[0]);
	intPair.push_back(intArray[1]);
	intPair.push_back(intArray[2]);
	intPair.push_back(intArray[3]);
	intPair.push_back(intArray[4]);	

	std::vector<std::string> stringPair;
	stringPair.push_back("Monday");
	stringPair.push_back("Tuesday");
	stringPair.push_back("Wednesday");
	stringPair.push_back("Thursday");

	/*std::cout << "Scaler Product of int Arrays = " << scalarProduct(intArray, intArray2, ELEMENTS) << std::endl;

	std::cout << "Scaler Product of float Arrays = " << scalarProduct(floatArray, floatArray2, ELEMENTS) << std::endl;

	std::cout << "int Min = " << minMax(intPair).first << std::endl;
	std::cout << "int Max = " << minMax(intPair).second << std::endl;

	std::cout << "string Min = " << minMax(intPair).first << std::endl;
	std::cout << "string Max = " << minMax(intPair).second << std::endl;*/

	std::vector<Gamer *> gamerVector;

	Gamer * g1;
	gamerVector.push_back(g1);
	Gamer * g2;
	gamerVector.push_back(g2);
	Gamer * g3;
	gamerVector.push_back(g3);
	Gamer * g4;
	gamerVector.push_back(g4);
	Gamer * g5;
	gamerVector.push_back(g5);

	std::cout << std::endl;
	std::cout << "gamer size = " << gamerVector.size() << std::endl;

    std::cout << "gamer capacity = " << gamerVector.capacity() << std::endl;

	gamerVector.clear();

	std::cout << "gamer size = " << gamerVector.size() << std::endl;

	std::cout << "gamer capacity = " << gamerVector.capacity() << std::endl;


	system("PAUSE");
}