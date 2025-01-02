//
//  Ride.cpp
//  honors_HorseRides_rashil
//
//  Created by Rashil Shibakoti on 4/19/24.
//

#include "Ride.h"
#include <iostream>
#include <string>

using namespace std;

// Default constructor
Ride::Ride() {
    name = "";
    time = 0.0;
    wranglers = 0;
    cost = 0.0;
    riders = 0;
}

// Constructor with parameters
Ride::Ride(string rideName, float rideTime, int numWranglers, float rideCost, int numRiders) {
    name = rideName;
    time = rideTime;
    wranglers = numWranglers;
    cost = rideCost;
    riders = numRiders;
}

// Accessor functions
string Ride::getName() const {
    return name;
}

float Ride::getTime() const {
    return time;
}

int Ride::getWranglers() const {
    return wranglers;
}

float Ride::getCost() const {
    return cost;
}

int Ride::getRiders() const {
    return riders;
}





// Mutator functions
void Ride::setName(string rideName) {
    name = rideName;
}

void Ride::setTime(float rideTime) {
    if (rideTime >= 0) {
        time = rideTime;
    } else {
        cout << "Invalid time value. Time must be non-negative." << endl;
    }
}

void Ride::setWranglers(int numWranglers) {
    if (numWranglers >= 0) {
        wranglers = numWranglers;
    } else {
        cout << "Invalid number of wranglers. Must be non-negative." << endl;
    }
}

void Ride::setCost(float rideCost) {
    if (rideCost >= 0) {
        cost = rideCost;
    } else {
        cout << "Invalid cost value. Cost must be non-negative." << endl;
    }
}

void Ride::setRiders(int numRiders) {
    if (numRiders >= 0) {
        riders = numRiders;
    } else {
        cout << "Invalid number of riders. Must be non-negative." << endl;
    }
}

// Member functions
float Ride::getRevenue() const {
    return cost * riders;
}

float Ride::getRatio() const {
    
    
    
    
    if (wranglers != 0) {
        
        
        return static_cast<float>(riders) / wranglers;
    } else {
        
        
        cout << "Invalid ratio. Number of wranglers cannot be zero." << endl;
        return 0;
    }
}
