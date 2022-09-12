#include <iostream>
#include <vector>
#include <numeric>

int main() {
	std::vector<int> arr{ 1,2,3,4,5 };

	auto sum = std::accumulate(arr.begin(), arr.end(), 0,
		[](int a, int b) {if (b > 0) {a += b;}return a;});

	std::cout << sum;

	return 0;
}
