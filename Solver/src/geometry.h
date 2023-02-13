#pragma once

#include "geography.h"
#include "path.h"

#include <cmath>
#include <math.h>

namespace geometry {

constexpr long double PI = 3.141592653589793238462643383279502884L;

inline double deg2rad(double degrees)
{
    return degrees*PI/180;
}

inline nauticmiles_t distance(const Location &p1, const Location &p2)
{
    double la1 = deg2rad(p1.lat);
    double lo1 = deg2rad(p1.lon);
    double la2 = deg2rad(p2.lat);
    double lo2 = deg2rad(p2.lon);
    return acos(sin(la1) * sin(la2) + cos(la1) * cos(la2) * cos(lo2 - lo1)) * geography::EARTH_RADIUS_NM;
}

inline bool isHamiltonian(const Path &path)
{
    if (path[0] != path[path.size() - 1])
        return false;
    for (size_t i = 1; i < path.size()-1; i++) {
        for (size_t j = 0; j < i; j++) {
            if (path[i] == path[j])
                return false;
        }
    }
    return true;
}

}
