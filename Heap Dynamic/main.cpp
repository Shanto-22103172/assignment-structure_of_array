#include <iostream>
#include <vector>
int main() {
    std::vector<int> arr;
    int x;
    while (std::cin >> x) arr.push_back(x); 
    for (int val : arr) std::cout << val << " ";
    return 0;
}
