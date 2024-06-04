#include <iostream>
#include <set>

int main() {
    int n;

    std::cout << "[IN]:" << std::endl;
    std::cin >> n;

    std::set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        s.insert(x);
    }

    std::cout << "[OUT]:" << std::endl;
    for (auto it = s.rbegin(); it != s.rend(); it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}