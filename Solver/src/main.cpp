#include <iostream>

#include "geomap.h"
#include "geometry.h"

int main()
{
    // TODO move all this in test classes, or scrap completely

    GeoMap map{};
    map.getStations().emplace_back(Location{ 2, 2 });
    map.getStations().emplace_back(Location{ 3, .14 });

    for (const Station &s : map.getStations()) {
        std::cout << "station[lon=" << s.getLocation().lon << " lat=" << s.getLocation().lat << "]" << std::endl;
    }

    //Location london{ -0.1276, 51.5072 }; // note! 51N .12W the order is swapped
    //Location paris{ 2.3522, 48.8566 };
    Location london = Location::fromNECoordinates(51.5072, -0.1276);
    Location paris = Location::fromNECoordinates(48.8566, 2.3522);
    std::cout << "distance from london to paris=" << geometry::distance(london, paris) << "nmi" << std::endl;

    std::cin.get();
    return 0;
}