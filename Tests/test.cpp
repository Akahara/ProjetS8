#include "pch.h"

#include "../Solver/src/geomap.h"
#include "../Solver/src/geometry.h"


TEST(TestLocationCase, TestConstructors)
{
    Location l1{ 1, -2 };  // lon=-2 lat=+1   lon=2°S lat=1°N
    Location l2{ 1.5, 0 }; // lon=0  lat=
    EXPECT_EQ(l1, Location::fromNECoordinates(-2, +1));
    EXPECT_EQ(l1, Location::fromNECoordinates(+2, +1, Card::SE));
    EXPECT_EQ(l1, Location::fromDegreeMinuteSecond(2,0,0, 1,0,0, Card::SE));
    EXPECT_EQ(l2, Location::fromNECoordinates(+0, +1.5));
    EXPECT_EQ(l2, Location::fromNECoordinates(-0, +1.5, Card::NE));
    EXPECT_EQ(l2, Location::fromDegreeMinuteSecond(0,0,0, 1,30,0, Card::NE));

    EXPECT_EQ((Location{ 0,0 }), (Location{ 360, 0 }));
    EXPECT_EQ((Location{ 0,0 }), (Location{ 0, 360 }));
    EXPECT_EQ((Location{ 50,0 }).lon, 50);
    EXPECT_EQ((Location{ 360+50,0 }).lon, 50);
    EXPECT_EQ((Location{ 360 + 50,181 }), (Location{ -50, 1 }));
}

TEST(TestDistancesCase, TestLocationDistances)
{
    Location london = Location::fromDegreeMinuteSecond(51,28,14, 0,27,42, Card::NE);
    Location paris  = Location::fromDegreeMinuteSecond(49,0,46,  2,32,59, Card::NW);
    nauticmiles_t distanceNM = geometry::distance(london, paris);
    km_t distanceKM = geography::nauticmiles2km(distanceNM);
    EXPECT_NEAR(distanceNM, 187.456, .5); // .5nm range
    EXPECT_NEAR(distanceKM, 347.168, .5); // .5km range
}

TEST(TestPath, TestCreation)
{
    Station s1{ Location{0,0} };
    Station s2{ Location{10,0} };
    Station s3{ Location{20,0} };
    Station s4{ Location{30,0} };
    Path p{};
    p.getStations().push_back(&s1);
    p.getStations().push_back(&s2);
    p.getStations().push_back(&s3);
    p.getStations().push_back(&s4);
    ASSERT_EQ(p.size(), 4);
    EXPECT_FLOAT_EQ(p.length(),
                    geometry::distance(s1.getLocation(), s2.getLocation()) +
                    geometry::distance(s2.getLocation(), s3.getLocation()) +
                    geometry::distance(s3.getLocation(), s4.getLocation()));
}

TEST(TestPath, TestHamiltonian)
{
    Station s1{ Location{0,0} };
    Station s2{ Location{10,0} };
    Station s3{ Location{20,0} };
    Station s4{ Location{30,0} };
    Path p{};
    p.getStations().push_back(&s1);
    p.getStations().push_back(&s2);
    p.getStations().push_back(&s3);
    p.getStations().push_back(&s4);
    EXPECT_FALSE(geometry::isHamiltonian(p)); // not a cycle
    p.getStations().push_back(&s1);
    EXPECT_TRUE(geometry::isHamiltonian(p)); // valid
    p.getStations().push_back(&s2);
    p.getStations().push_back(&s1);
    EXPECT_FALSE(geometry::isHamiltonian(p)); // passes twice by s2 and s1
}
