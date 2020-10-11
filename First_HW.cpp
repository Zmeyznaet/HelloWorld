#include <iostream>
#include <cmath>

int main()
{

    auto a {0}; // произвольное число
    auto b {0}; // произвольное число
    auto c {0}; // произвольное число
    constexpr int s {2}; // степень числа
    constexpr int t {4}; // константа в уравнении
    
    std:: cout << "Для решения уравнения следующего вида ax2 + bx + c = 0, введите значения a, b, c" << std:: endl;
    std:: cout << "Введите a (не должно равнятся 0)" << std:: endl;
    std:: cin >> a;
    if (a != 0) {
        std:: cout << "Введите b" << std:: endl;
        std:: cin >> b;
        std:: cout << "Введите c" << std:: endl;
        std:: cin >> c;
        
        auto D {pow (b,s) - t*a*c}; // дискриминант
        
        if (D > 0) {
            auto x1 { (-b + sqrt(D)) / 2*a}; // первый корень уравнения
            auto x2 { (-b - sqrt(D)) / 2*a}; // второй корень уравнения
            std:: cout << "Корни квадратного уравнения равны: x1 = " << x1 << "; x2 = " << x2 << std:: endl;
        }
    }
    else {
        std:: cout << "Вы ввели 0. Рассчитать квадратное уравнение невозможно. Попробуйте снова" << std:: endl;
    }

    std:: cout << "Who we are? We are all" << std:: endl;
    
    return 0;
}
