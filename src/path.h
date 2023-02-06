#pragma once

#include <vector>

#include "geography.h"
#include "station.h"

class Path {
private:
    std::vector<Station *> m_stations;

public:
    nauticmiles_t length() const;
    size_t size() const { return m_stations.size(); }
};

