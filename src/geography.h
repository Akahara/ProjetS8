#pragma once

typedef double nauticmiles_t;
typedef double km_t;

// A (longitude latitude) pair, in degrees
// both .lon and .longitude can be used to refer to the location's longitude
// the same goes for latitude with .lat and .latitude
// for example: 3N5W is (lon=-5 lat=3)
struct Location {
    union { double lon; double longitude; };
    union { double lat; double latitude;  };

    static Location fromNECoordinates(double degreesNorth, double degreesEast)
    {
        return { degreesEast, degreesNorth };
    }

    bool operator==(const Location &other) const { return lon == other.lon && lat == other.lat; }
};

namespace geography {

constexpr double NAUTICMILES_TO_KILOMETERS_FACTOR = 1.852;
constexpr nauticmiles_t EARTH_RADIUS_NM = 3443.9308855292;
constexpr km_t EARTH_RADIUS_KM = 6371;

inline km_t nauticmiles2km(nauticmiles_t nautics)
{
    return nautics * NAUTICMILES_TO_KILOMETERS_FACTOR;
}

inline nauticmiles_t km2nauticmiles(km_t kilometers)
{
    return kilometers / NAUTICMILES_TO_KILOMETERS_FACTOR;
}

}
