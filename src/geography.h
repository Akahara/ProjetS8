#pragma once

typedef float nauticmiles_t;

// A (longitude latitude) pair
// both .lon and .longitude can be used to refer to the location's longitude
// the same goes for latitude with .lat and .latitude
struct Location {
    union { double lon; double longitude; };
    union { double lat; double latitude;  };
};
