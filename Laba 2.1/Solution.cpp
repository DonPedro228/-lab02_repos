#include <iostream>
#include <cmath>

int main() {
    double a; 
    //double z1;
    double z2; 

    std::cout << "Input ";
    std::cin >> a;

    //z1 = cos(a) + sin(a) / (cos(a) - sin(a));
    double tan_squared = tan(a) * tan(a);
    z2 = tan_squared + (1.0 / (cos(a) * cos(a)));

    //std::cout << "Result z1: z = " << z1 << std::endl;
    std::cout << "Result z2: z = " << z2 << std::endl;

    return 0;
}
