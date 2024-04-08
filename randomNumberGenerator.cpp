#include "randomNumberGenerator.h"

RandomNumberGenerator::RandomNumberGenerator()
{
    srand(time(nullptr));
}

int RandomNumberGenerator::random_array_idx(int lenght_of_array)
{
    return rand() % (lenght_of_array+1);
}

int RandomNumberGenerator::random_number()
{
    return rand() % 1000;
}



int RandomNumberGenerator::random_list_idx(int range)
{
    return rand() % range;
}