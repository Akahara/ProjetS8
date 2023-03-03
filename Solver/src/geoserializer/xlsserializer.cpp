#include "xlsserializer.h"

GeoMap XLSSerializer::parseMap(const std::filesystem::path &file) const
{
    GeoMap map{};

    OpenXLSX::XLDocument doc;
    doc.open(file.string());

    auto sheetName = doc.workbook().worksheetNames()[0];
    auto worksheet = doc.workbook().worksheet(sheetName);

    for (auto row = 2; row <= worksheet.rowCount(); ++row) { // skip the header
        std::string lon = worksheet.cell(row, 4).value().get<std::string>();
        std::string lat = worksheet.cell(row, 3).value().get<std::string>();

        // create a Location from the coordinates
        Location location = Location::fromNECoordinates(string2coordinate(lat), string2coordinate(lon));

        // get name and OACI
        std::string name = worksheet.cell(row, 2).value().get<std::string>();
        std::string OACI = worksheet.cell(row, 1).value().get<std::string>();

        // create a Station
        Station station(location, name, OACI);

        // TODO add other fields

        // add the station to the map
        map.getStations().push_back(station);
    }

    return map;
}

void XLSSerializer::writePath(const std::filesystem::path &file, const Path &path) const
{
  // TODO implement XLSSerializer::writePath
}
