#pragma once

#include "geography.h"

class Station {
private:
    Location m_location;

public:
    Station(const Location &location)
      : m_location(location)
    {
    }

    const Location &getLocation() const { return m_location; }
};