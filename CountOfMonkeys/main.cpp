#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> monkeyCount(int n) {
    std::vector<int>output(n);
    int i{ 0 };

    std::generate_n(output.begin(), n, [&]()mutable { i++; return i; });

    for (auto& v : output)
        std::cout << v;
    
    return output;
}

int main() {
    monkeyCount(5);

    return 0;
}