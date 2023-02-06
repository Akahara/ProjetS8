#pragma once

#include <vector>

#include "station.h"

class GeoMap {
private:
    std::vector<Station> m_stations;

public:
    GeoMap() {}

    const std::vector<Station> &getStations() const { return m_stations; }
    std::vector<Station> &getStations() { return m_stations; }
};