#pragma once

#include "geomap.h"
#include "path.h"

class PathSolver {
public:
    virtual Path solveForPath(const GeoMap &map) = 0;
};