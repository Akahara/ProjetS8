#pragma once

#include "../geoserializer.h"

class CSVSerializer : public GeoSerializer {
public:
    GeoMap parseMap(const std::filesystem::path &file) const override;
    void writePath(const std::filesystem::path &file, const Path &path) const override;
};