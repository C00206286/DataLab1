#include "UnorderedArray.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



template <typename T>
T scalarProduct(T const* pArray, T const* lArray, int const ELEMENTS) {
	T scalarProduct = 0;
	scalarProduct = pArray[0] * lArray[0] + pArray[1] * lArray[1] + pArray[2] * lArray[2];
	return scalarProduct;
}

int main() {

	UnorderedArray<int> test(4);

	
	test.push(1);
	test.push(2);
	test.push(3);
	test.push(4);

	test.search(3);

	std::cout << test.search(2) << std::endl;
	std::cout << test.getSize() << std::endl;
	
	int const ELEMENTS = 10;
	int intArray[] = { 1,2,3};
	int intArray2[] = { 1,2,3 };
	float floatArray[] ={ 1.1f,2.2f,3.3f};
	float floatArray2[] ={ 1.1f,2.2f,3.3f };
	

	std::cout << "Scaler Product of int Arrays = " << scalarProduct(intArray, intArray2, ELEMENTS) << std::endl;

	std::cout << "Scaler Product of float Arrays = " << scalarProduct(floatArray, floatArray2, ELEMENTS) << std::endl;

	system("PAUSE");
}