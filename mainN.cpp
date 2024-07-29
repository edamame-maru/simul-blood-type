#include <iostream>
#include <string>

int main()
{
    int numberPopulation = 1000;
    const int NUMBER_CYCLES = 100;
    const int NUMBER_BLOOD_TYPES = 6;
    const int PERCENT_COUPLES = 0.11; // Must be a multiplier to 2.d.p

    // nAO, nAA, nBO, nBB, nAB, nOO

    int countBloodType[NUMBER_BLOOD_TYPES] = {0, 0, 0, 0, 0, 0};

    for (int i : countBloodType)
    {
        std::string type;
        switch (i)
        {
        case 0:
            type = "AO";
            break;
        case 1:
            type = "AA";
            break;
        case 2:
            type = "BO";
            break;
        case 3:
            type = "BB";
            break;
        case 4:
            type = "AB";
            break;
        case 5:
            type = "OO";
            break;
        default:
            break;
        }

        std::cout << "Enter number of blood type " << type << ": ";
        std::cin >> countBloodType[i];
    }

    for (int i = 0; i < NUMBER_CYCLES; ++i)
    {
        int numberOfCouples = numberPopulation * PERCENT_COUPLES;
        int numberOfChildren = numberOfCouples / 2;
        numberPopulation += numberOfChildren;

        for (int j = 0; j < numberOfCouples; ++j)
        {
                    
        }
    }

    return 0;
}