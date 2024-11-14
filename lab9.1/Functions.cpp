#include "functions.h"
#include "nsVar.h"
#include <cmath>

namespace funcTay {
    double S() {
        using namespace nsVar;
        s = 0.0; // ����������� ����
        a = x - 1; // ������ ������� ����
        n = 0;

        while (std::abs(a) >= eps) {
            s += a;
            n++;
            a = A(n); // ���������� ���������� ������� �� ��������� ������������ ������������
        }
        return s;
    }

    double A(int n) {
        using namespace nsVar;
        return a * (-1) * (x - 1) / (n + 1);
    }
}