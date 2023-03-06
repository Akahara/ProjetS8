#pragma once

#include <filesystem>

#include "geomap.h"
#include "path.h"

#define EXCLUDE_COLUMN 1
#define OACI_COLUMN 2
#define NAME_COLUMN 3
#define LATITUDE_COLUMN 4
#define LONGITUDE_COLUMN 5
#define STATUS_COLUMN 6
#define NIGHT_VFR_COLUMN 7
#define FUEL_COLUMN 8

class GeoSerializer {
public:
    virtual GeoMap parseMap(const std::filesystem::path &file) const = 0;
    virtual void writePath(const std::filesystem::path &file, const Path &path) const = 0;

protected:
    const double string2coordinate(const std::string &str) const;
};