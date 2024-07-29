#include <iostream>

int main()
{
    /* Blood types are as follows;
    AA
    AO
    BB
    BO
    AB
    OO
    */

    int population, cycles = 0;
    
    std::cout << "Enter population: ";
    std::cin >> population; 

    std::cout << "Enter cycles: ";
    std::cin >> cycles; 

    std::cout << "Population: " << population << std::endl;
    std::cout << "Cycles: " << cycles << std::endl;
    return 0;
}