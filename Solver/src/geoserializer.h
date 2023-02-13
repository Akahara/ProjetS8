#pragma once

#include <filesystem>

#include "geomap.h"
#include "path.h"

class GeoSerializer {
public:
    virtual GeoMap parseMap(const std::filesystem::path &file) const = 0;
    virtual void writePath(const std::filesystem::path &file, const Path &path) const = 0;
};