//
//  main.cpp
//  honors_HorseRides_rashil
//
//  Created by Rashil Shibakoti on 4/19/24.
//

#include <iostream>
#include <iomanip>
#include "Ride.h"

using namespace std;


//function prototype
void displayRideInfo(const Ride rides[], int size);


int main() {
    
    //defining a constant integer
    const int NUM_RIDES = 5;
    
    
    //storing the given data to an array and initializing the array
    Ride rides[NUM_RIDES] = {
        Ride("Tree Line", 2.5, 3, 150, 7),
        Ride("Beaver Creek", 1.5, 2, 75, 8),
        Ride("Pine Lake", 0.5, 2, 40, 10),
        Ride("Outer Ranch", 3.0, 3, 200, 5),
        Ride("Wild Meadow", 1.0, 2, 60, 10)
    };

    
    //call the display function to display the ride info
    displayRideInfo(rides, NUM_RIDES);

    return 0;
}





//display fxn
void displayRideInfo(const Ride rides[], int size) {
    
    //header
    cout << left << setw(15) << "Ride Name"
    << setw(10) << "Time"
    << setw(12) << "Wranglers"
    << setw(10) << "Cost"
    << setw(10) << "Riders"
    << setw(12) << "Revenue"
    << setw(12) << "Ratio" << endl;
    
    
    cout << "----------------------------------------------------------------------------" << endl;
    
    
    // initialize the variabled
    float totalTime = 0;
    int totalWranglers = 0;
    int totalRiders = 0;
    float totalRevenue = 0;
    float totalRatio = 0;
    
    
    //iterate over the array of ride objects
    for (int i = 0; i < size; i++) {
        
        //display info from each rides
        cout << left << setw(15) << rides[i].getName()
        << setw(10) << rides[i].getTime()
        << setw(12) << rides[i].getWranglers()
        << setw(10) << rides[i].getCost()
        << setw(10) << rides[i].getRiders()
        << setw(12) << rides[i].getRevenue()
        << setw(12) << rides[i].getRatio() << endl;
        
        
        //add the totals of everything
        totalTime += rides[i].getTime();
        totalWranglers += rides[i].getWranglers();
        totalRiders += rides[i].getRiders();
        totalRevenue += rides[i].getRevenue();
        totalRatio += rides[i].getRatio();
    }
    
    cout << "----------------------------------------------------------------------------" << endl;
    
    
    //print the total column
    cout << left << setw(15) << "Total         |"
    << setw(10) << totalTime
    << setw(12) << totalWranglers
    << setw(10) << ""
    << setw(10) << totalRiders
    << setw(12) << totalRevenue << endl;
    
    
    
    //print the everage column for the ratio
    cout << "----------------------------------------------------------------------------" << endl;
    cout << left << setw(15) << "Average Ratio |"
    << setw(10) << ""
    << setw(12) << ""
    << setw(10) << ""
    << setw(10) << ""
    << setw(12) << ""
    << setw(12) << totalRatio / size << endl;
    
}
