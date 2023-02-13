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

    bool operator==(const Station &other) const { return m_location == other.m_location; }
};