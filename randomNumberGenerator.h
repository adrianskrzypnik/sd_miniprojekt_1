#ifndef FINAL_RANDOMNUMBERGENERATOR_H
#define FINAL_RANDOMNUMBERGENERATOR_H

#include <cstdlib>
#include <ctime>

class RandomNumberGenerator
{
public:
    RandomNumberGenerator();
    int random_array_idx(int lenght_of_array);
    int random_list_idx(int range);
    int random_number();
};

#endif //FINAL_RANDOMNUMBERGENERATOR_H
