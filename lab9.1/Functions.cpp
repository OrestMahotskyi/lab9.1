#include "functions.h"
#include "nsVar.h"
#include <cmath>

namespace funcTay {
    double S() {
        using namespace nsVar;
        s = 0.0; // Ініціалізація суми
        a = x - 1; // Перший доданок ряду
        n = 0;

        while (std::abs(a) >= eps) {
            s += a;
            n++;
            a = A(n); // Обчислення наступного доданка за допомогою рекурентного співвідношення
        }
        return s;
    }

    double A(int n) {
        using namespace nsVar;
        return a * (-1) * (x - 1) / (n + 1);
    }
}