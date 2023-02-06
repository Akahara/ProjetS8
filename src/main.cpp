#include <iostream>

#include "geomap.h"

int main()
{
    GeoMap map{};
    map.getStations().emplace_back(Location{ 2, 2 });
    map.getStations().emplace_back(Location{ 3, .14 });

    for (const Station &s : map.getStations()) {
        std::cout << "station[lon=" << s.getLocation().lon << " lat=" << s.getLocation().lat << "]" << std::endl;
    }

    std::cin.get();
    return 0;
}