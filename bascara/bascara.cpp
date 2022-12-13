#include <iostream>
#include <math.h>
#include <iomanip>

int main() {

    float a, b, c, delta, x1, x2;

    std::cin >> a >> b >> c;

    delta = (b*b)-(4*a*c);
    x1 = (- b + sqrt((b*b)-(4*a*c)))/(2*a);
    x2 = (- b - sqrt((b*b)-(4*a*c)))/(2*a);

    if (a == 0) { std::cout << "NARN\n";}
    else if (delta < 0){ std::cout << "NARN\n";}
    else {std::cout << std::fixed << std::setprecision(2) << x1 << "\t" << x2 << " \n";
	}
}
