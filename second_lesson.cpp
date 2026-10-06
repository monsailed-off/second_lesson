#include <iostream>
#include <locale>
// Функция для нашего выражение
void searchX(int x) {
    std::cout << x << "/ 4.0 + 10.5 = " << x / 4.0 + 10.5 << std::endl;
}
int main() {
    std::setlocale(LC_ALL, "Russian");
    int x;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    searchX(x)
    return 0;
}