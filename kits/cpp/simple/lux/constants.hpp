#ifndef constants_h
#define constants_h
#include <stdio.h>
#include "nlohmann/json.hpp"
#include <iostream>
#include <fstream>
namespace lux
{
  // nlohmann::json j = nlohmann::json::parse()
  static nlohmann::json GAME_CONSTANTS = nlohmann::json::parse(R"(
    {
      "UNIT_TYPES": {
        "WORKER": 0,
        "CART": 1
      },
      "RESOURCE_TYPES": {
        "WOOD": "wood",
        "COAL": "coal",
        "URANIUM": "uranium"
      },
      "DIRECTIONS": {
        "NORTH": "n",
        "WEST": "w",
        "EAST": "e",
        "SOUTH": "s",
        "CENTER": "c"
      },
      "PARAMETERS": {
        "DAY_LENGTH": 30,
        "NIGHT_LENGTH": 10,
        "MAX_DAYS": 360,
        "LIGHT_UPKEEP": {
          "CITY": 30,
          "WORKER": 4,
          "CART": 10
        },
        "WOOD_GROWTH_RATE": 1.01,
        "MAX_WOOD_AMOUNT": 400,
        "CITY_BUILD_COST": 100,
        "CITY_ADJACENCY_BONUS": 5,
        "RESOURCE_CAPACITY": {
          "WORKER": 100,
          "CART": 2000
        },
        "WORKER_COLLECTION_RATE": {
          "WOOD": 20,
          "COAL": 10,
          "URANIUM": 4
        },
        "RESOURCE_TO_FUEL_RATE": {
          "WOOD": 1,
          "COAL": 5,
          "URANIUM": 20
        },
        "RESEARCH_REQUIREMENTS": {
          "COAL": 50,
          "URANIUM": 200
        },
        "CITY_ACTION_COOLDOWN": 10,
        "UNIT_ACTION_COOLDOWN": {
          "CART": 3,
          "WORKER": 2
        },
        "MAX_ROAD": 6,
        "MIN_ROAD": 0,
        "CART_ROAD_DEVELOPMENT_RATE": 0.5,
        "PILLAGE_RATE": 0.5
      }
    }
  )");
  enum DIRECTIONS
  {
    NORTH = 'n',
    EAST = 'e',
    SOUTH = 's',
    WEST = 'w',
    CENTER = 'c'
  };
  static const DIRECTIONS ALL_DIRECTIONS[] = { NORTH, EAST, SOUTH, WEST };
};
#endif
