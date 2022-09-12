#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> digitize(const int& n) {
	std::string number = std::to_string(n);
	std::vector<int>output(number.length());

	std::transform(number.begin(), number.end(), output.begin(), [](char c) {return (int)c - 48; });

	for (auto v : output)
		std::cout << v << std::endl;

	return output;
}

int main() {
	digitize(235234324);

	return 0;
}