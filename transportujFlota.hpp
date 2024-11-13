#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int towar_sum = 0;
    int z         = 0;
    if (towar != 0) {

        while (towar_sum <= towar) {

            Stocznia stocznia{};
            Statek*  s1 = stocznia();

            int towar_add = s1->transportuj();
            towar_sum     = towar_sum + towar_add;

            
            if (Zaglowiec* a = dynamic_cast< Zaglowiec* >(s1)) {
                z = z + 1; 
            }
            
            delete s1;
        }
    }

    return z;
}