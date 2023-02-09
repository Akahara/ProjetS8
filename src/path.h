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
    const std::vector<Station *> &getStations() const { return m_stations; }
    std::vector<Station *> &getStations() { return m_stations; }

    const Station &operator[](size_t i) const { return *m_stations[i]; }
};

