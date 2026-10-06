#include <iostream>
#include <locale>
// Функция для произведения
int multiply(int a,int b,int c) {
    return a * b * c;
}
int main() {
    std::setlocale(LC_ALL, "Russian");
    //Переменные в которых храняться изначальные числа
    int first_num;
    int second_num;
    int third_num;
    // Назначение чисел
    std::cout << "Enter first num: " << std::endl;
    std::cin >> first_num;
    std::cout << "Second: " << std::endl;
    std::cin >> second_num;
    std::cout << "Third: " << std::endl;
    std::cin >> third_num;
    //Произвидение чисел через указатели и
    int digit = multiply(first_num, second_num, third_num);
    std::cout << "Sum: " << digit << std::endl;
    return 0;
}