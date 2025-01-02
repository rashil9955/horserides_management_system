# HorseRides Management System

## Description
A comprehensive C++ class-based system for managing horse riding experiences. This program handles ride scheduling, wrangler assignments, and financial tracking for horse riding operations. It features rider-to-wrangler ratio calculations, revenue tracking, and validation for ride parameters like cost, duration, and capacity.

## README.md

### HorseRides Management System
A C++ application designed to streamline the management of horse riding experiences and tours.

#### Features
- Ride scheduling and management
- Wrangler assignment tracking
- Revenue calculation and financial reporting 
- Rider-to-wrangler ratio monitoring
- Input validation for all parameters

#### Class Structure
The system is built around the `Ride` class which includes:
- Ride details (name, duration, cost)
- Personnel management (riders, wranglers)
- Financial calculations (revenue, ratios)
- Data validation for all inputs

#### Getting Started
1. Include the necessary header files:
```cpp
#include "Ride.h"
```

2. Create a new ride instance:
```cpp
// Using default constructor
Ride myRide;

// Or using parameterized constructor
Ride myRide("Mountain Trail", 2.5, 2, 75.0, 8);
```

3. Access and modify ride properties:
```cpp
// Get ride information
float revenue = myRide.getRevenue();
float ratio = myRide.getRatio();

// Update ride details
myRide.setRiders(10);
myRide.setCost(85.0);
```

#### Error Handling
- The system includes validation for:
  - Non-negative values for time, cost, and personnel counts
  - Zero wrangler checks for ratio calculations
  - Invalid input protection

#### Dependencies
- C++ Standard Library
- iostream
- string

#### Build Instructions
1. Compile all source files:
```bash
g++ -o horserides Ride.cpp main.cpp
```

2. Run the executable:
```bash
./horserides
```

#### Contributing
This project is part of an honors assignment by Rashil Shibakoti. Please contact the author for any contributions or modifications.
