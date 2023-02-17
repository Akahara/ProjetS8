#pragma once

#include "../pathsolver.h"

class TSPSolver : public PathSolver {
public:
    virtual Path solveForPath(const GeoMap &map) override;
};
