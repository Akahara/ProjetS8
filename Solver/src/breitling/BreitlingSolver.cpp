#include "BreitlingSolver.h"

#include "../geometry.h"

namespace breitling_constraints {

bool satisfiesCardinalsConstraints(const Path &path)
{
    return true; // TODO implement
}

bool satisfiesStationCountConstraints(const Path &path)
{
    return path.size() >= MINIMUM_STATION_COUNT;
}

bool satisfiesPathConstraints(const BreitlingData &dataset, const Path &path)
{
    return path.size() > 0 && path[0] == *dataset.departureStation && path[path.size() - 1] == *dataset.targetStation;
}

bool satisfiesFuelConstraints(const BreitlingData &dataset, const Path &path)
{
    // this test assumes that planeFuelUsage>0 planeSpeed>0 planeFuelCapacity>0
    nauticmiles_t currentDistance = 0;
    nauticmiles_t distanceSinceLastRefuel = 0;
    for (size_t i = 1; i < path.size(); i++) {
        const Station *station = path.getStations()[i];
        nauticmiles_t flightDistance = geometry::distance(path.getStations()[i - 1]->getLocation(), station->getLocation());
        currentDistance += flightDistance;
        distanceSinceLastRefuel += flightDistance;
        daytime_t currentTime = dataset.departureTime + currentDistance / dataset.planeSpeed;
        if (!canBeUsedToFuel(dataset, *station, currentTime)) {
            float remainingFuel = dataset.planeFuelCapacity - distanceSinceLastRefuel / dataset.planeSpeed * dataset.planeFuelUsage;
            if (remainingFuel < 0)
                return false;
        } else {
            distanceSinceLastRefuel = 0;
        }
    }
    return true;
}

bool satisfiesTimeConstraints(const BreitlingData &dataset, const Path &path)
{
    daytime_t totalTime = path.length() / dataset.planeSpeed;
    return totalTime < MAXIMUM_FLYGHT_DURATION;
}

bool canBeUsedToFuel(const BreitlingData &dataset, const Station &station, daytime_t daytime)
{
    daytime = std::fmod(daytime, 24);
    return daytime >= dataset.nauticalDaytime && daytime <= dataset.nauticalNighttime
        //|| station.canFuelAtNightTime() // TODO update the model to consider night time fueling capabilities
        ;
}

} // !namespace breitling_constraints

Path BreitlingSolver::solveForPath(const GeoMap &map)
{
    return Path(); // TODO solve the breitling cup
}