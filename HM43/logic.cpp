#include "logic.h"

bool is_unique_array(int array[], int length) {
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (array[i] == array[j]) {
                return false;
            }
        }
    }
    return true;
}