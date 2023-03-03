#pragma once

#include "geography.h"

class Station {
private:
    Location m_location;
    std::string m_name;
    std::string m_OACI;
    // TODO : implement status, night VFR and fuel.

public:
    Station(const Location &location, const std::string &name, const std::string &OACI)
      : m_location(location)
    {
        m_name = name;
        m_OACI = OACI;
    }

    const Location &getLocation() const { return m_location; }
    const std::string &getName() const { return m_name; }
    const std::string &getOACI() const { return m_OACI; }

    bool operator==(const Station &other) const { return m_location == other.m_location; }
};