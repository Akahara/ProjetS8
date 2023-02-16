#include <iostream>

#include "../vendor/OpenXLSX/OpenXLSX.hpp"

#include "geomap.h"
#include "geometry.h"

int main()
{
    using namespace OpenXLSX;

    XLDocument doc;
    doc.create("Spreadsheet.xlsx");
    auto wks = doc.workbook().worksheet("Sheet1");

    wks.cell("A1").value() = "Hello, OpenXLSX!";

    doc.save();
    doc.close();

    XLDocument d2;
    d2.open("Spreadsheet.xlsx");
    for (const auto &name : d2.workbook().worksheetNames())
        std::cout << name << std::endl;
    std::string name = d2.workbook().worksheetNames()[0];
    std::cout << "opening " << name << std::endl;
    auto wk2 = d2.workbook().worksheet(name);
    std::cout << wk2.cell("A1").value().get<std::string>() << std::endl;

    std::cin.get();
    return 0;
}