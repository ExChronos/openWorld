#include <iostream>

struct RatThing {
    static int ratThingPower;
    static void power_up_rat_thing(int nuclearIsotopes){
        ratThingPower = ratThingPower + nuclearIsotopes;
        const auto wasteHeat = ratThingPower * 20;

        if(wasteHeat > 10000){
            std::cout << "Warning ! Hot doggie\n";
        }
        std::cout << "Rat-thing power: " << ratThingPower << std::endl;
    }
};

int RatThing::ratThingPower = 200;

int main(void)
{
    using namespace std;

    RatThing::power_up_rat_thing(100);
    RatThing::power_up_rat_thing(500);
    
    return 0;
}