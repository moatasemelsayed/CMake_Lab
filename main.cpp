#include <iostream>
#include "calc.hpp"
#include "Wifi.hpp"
#include "defultconfig.h"
int main()
{
#ifdef DEBUGINFO
    std::cout << DEBUGINFO << std::endl;
#endif
    WIFI_Init();
    std::cout << "ProductType is " << ProductType << std::endl;
    std::cout << "PRODUCT_YEAR is " << PRODUCT_YEAR << std::endl;
    std::cout << STD_CXX << std::endl;
    return 0;
}