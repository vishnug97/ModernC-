#include <iostream>
template<typename ... T>
auto mean(T ... t) {
    return (t + ...)/2;
}
int main() {
    std::cout << mean(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << std::endl;
}