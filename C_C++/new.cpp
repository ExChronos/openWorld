#include <iostream>

static int rat_things_power = 200;

void power_up_rat_things(int nuclear_isotopes){
    rat_things_power = rat_things_power + nuclear_isotopes;
    const auto waste_heat = rat_things_power * 20;

    if(waste_heat > 10000){
        std::cout << "Warning! Hot doggie!" << std::endl;
    }
}

int main(void)
{
    using namespace std;

    cout << "Rat-thing power - " << rat_things_power << endl;
    power_up_rat_things(100);
    cout << "Rat-thing power - " << rat_things_power << endl;
    power_up_rat_things(500);
    cout << "Rat-thing power - " << rat_things_power << endl;
    
    return 0;
}