#pragma once

#include "../geoserializer.h"

class XLSSerializer : public GeoSerializer {
  GeoMap parseMap(const std::filesystem::path &file) const override;
  void writePath(const std::filesystem::path &file, const Path &path) const override;
};