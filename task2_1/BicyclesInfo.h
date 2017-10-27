// Task 2.1 - Definition of enum type which describes the bicycle types
// Created by Alexey Roienko, 2017
#ifndef _BICYCLES_INFO_H_

#define _BICYCLES_INFO_H_

#include <array>
#include <string>

enum class BicycleTypes: unsigned char {Road, Touring, Hybrid, Mountain, Racing, BMX, Cruiser, Unknown, COUNT};

enum class BicycleProducers: unsigned char {TrekSport = 10, Cannondale, Bianchi, Skott, AIST, GT, Mongoose, GaryFisher, Unknown, COUNT};

#endif