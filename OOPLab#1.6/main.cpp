#include <iostream>
#include "Liquid.h"
#include "AlcoholContainer.h"

int main() {
   
    Liquid liquid;
    liquid.Read();

    AlcoholContainer alcoholContainer;
    alcoholContainer.Read();

    std::cout << "\nDetails of the liquid:\n";
    liquid.Display();

    std::cout << "\nDetails of the alcohol container:\n";
    alcoholContainer.Display();

    return 0;
}