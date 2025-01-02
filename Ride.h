//
//  Header.h
//  honors_HorseRides_rashil
//
//  Created by Rashil Shibakoti on 4/19/24.
//

#ifndef RIDE_H
#define RIDE_H

#include <string>
using namespace std;


//declare ride class
class Ride {
private:
    
    //private member variables
    string name;
    float time;
    int wranglers;
    float cost;
    int riders;

    
public:
    
    // Default constructor
    Ride();

    // Constructor with parameters
    Ride(string rideName, float rideTime, int numWranglers, float rideCost, int numRiders);

    // Accessor functions
    string getName() const;
    float getTime() const;
    int getWranglers() const;
    float getCost() const;
    int getRiders() const;

    // Mutator functions
    void setName(string rideName);
    void setTime(float rideTime);
    void setWranglers(int numWranglers);
    void setCost(float rideCost);
    void setRiders(int numRiders);

    // Member functions
    float getRevenue() const;
    float getRatio() const;
};

#endif
