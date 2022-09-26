#include <iostream>
#include <stdio.h>
using namespace std;
#include <stdlib.h>
char dronenumber;
char getOperator()
{
  while (true) 
  {
    cout << "Enter one of the following: 1,2,3,4: ";

    cin >> dronenumber;

    
    if (dronenumber == '1' || dronenumber == '2' || dronenumber == '3' || dronenumber == '4')
      return dronenumber; 
    else                  
      cout << "Oops, that input is invalid.  Please try again: ";
  }
}

class DroneArmy
{
protected:
  string droneName;
  string operativeDrone;
  string droneType;
  string droneSpecification;
  string droneSerialNumber;
  float droneWeight;
  float droneWingspan;
  int droneMunitionHardpoint;

  DroneArmy(){};
  ~DroneArmy(){};
};

class TacticalDrone : protected DroneArmy
{
public:
  TacticalDrone()
  {
    droneType = "Tactical";
  };
  void setDroneParameters(string newdroneName, string newdroneSpecification, string newDroneSerialNumber, float newdroneWeight, float newdroneWingspan, int newDroneMunitionHardpoint)
  {
    droneName = newdroneName;
    droneSpecification = newdroneSpecification;
    droneSerialNumber = newDroneSerialNumber;
    droneWeight = newdroneWeight;
    droneWingspan = newdroneWingspan;
    droneMunitionHardpoint = newDroneMunitionHardpoint;
  }
  void showDroneInfo()
  {

    cout << "Name: " << droneName << endl;
    cout << "DroneSpecification: " << droneSpecification << endl;
    cout << "DroneType: " << droneType << endl;
    cout << "DroneSerialnumber: " << droneSerialNumber << endl;
    cout << "DroneWeight: " << droneWeight << "kg" << endl;
    cout << "DroneWingspan: " << droneWingspan << "m" << endl;
    cout << "DroneMunitionHardpoints: " << droneMunitionHardpoint << endl;
  }
  void showdroneName() const
  {

    cout << "Drone 1: " << droneName << "---1 " << endl;
  }

  ~TacticalDrone(){};
};

class OperativeDrone : protected DroneArmy
{
public:
  OperativeDrone()
  {
    droneType = "Operative";
  };
  void setDroneParameters(string newdroneName, string newdroneSpecification, string newDroneSerialNumber, float newdroneWeight, float newdroneWingspan, int newDroneMunitionHardpoint)
  {
    droneName = newdroneName;
    droneSpecification = newdroneSpecification;
    droneSerialNumber = newDroneSerialNumber;
    droneWeight = newdroneWeight;
    droneWingspan = newdroneWingspan;
    droneMunitionHardpoint = newDroneMunitionHardpoint;
  }
  void showDroneInfo()
  {

    cout << "Name: " << droneName << endl;
    cout << "DroneSpecification: " << droneSpecification << endl;
    cout << "DroneType: " << droneType << endl;
    cout << "DroneSerialnumber: " << droneSerialNumber << endl;
    cout << "DroneWeight: " << droneWeight << "kg" << endl;
    cout << "DroneWingspan: " << droneWingspan << "m" << endl;
    cout << "DroneMunitionHardpoints: " << droneMunitionHardpoint << endl;
  }

  void showdroneName() const
  {

    cout << "Drone 2: " << droneName << "---2 " << endl;
  }
  ~OperativeDrone(){};
};

class StrategicalDrone : protected DroneArmy
{
public:
  StrategicalDrone()
  {
    droneType = "Strategical";
  };
  void setDroneParameters(string newdroneName, string newdroneSpecification, string newDroneSerialNumber, float newdroneWeight, float newdroneWingspan, int newDroneMunitionHardpoint)
  {
    droneName = newdroneName;
    droneSpecification = newdroneSpecification;
    droneSerialNumber = newDroneSerialNumber;
    droneWeight = newdroneWeight;
    droneWingspan = newdroneWingspan;
    droneMunitionHardpoint = newDroneMunitionHardpoint;
  }
  void showDroneInfo()
  {

    cout << "Name: " << droneName << endl;
    cout << "DroneSpecification: " << droneSpecification << endl;
    cout << "DroneType: " << droneType << endl;
    cout << "DroneSerialnumber: " << droneSerialNumber << endl;
    cout << "DroneWeight: " << droneWeight << "kg" << endl;
    cout << "DroneWingspan: " << droneWingspan << "m" << endl;
    cout << "DroneMunitionHardpoints: " << droneMunitionHardpoint << endl;
  }
  void showdroneName() const
  {

    cout << "Drone 3: " << droneName << "---3 " << endl;
  }
  ~StrategicalDrone(){};
};

class CivilianDrone : protected DroneArmy
{
public:
  CivilianDrone()
  {
    droneType = "Civilian";
    droneMunitionHardpoint = 0;
  };
  void setDroneParameters(string newdroneName, string newdroneSpecification, string newDroneSerialNumber, float newdroneWeight, float newdroneWingspan)
  {
    droneName = newdroneName;
    droneSpecification = newdroneSpecification;
    droneSerialNumber = newDroneSerialNumber;
    droneWeight = newdroneWeight;
    droneWingspan = newdroneWingspan;
  }

  void showDroneInfo()
  {

    cout << "Name: " << droneName << endl;
    cout << "DroneSpecification: " << droneSpecification << endl;
    cout << "DroneType: " << droneType << endl;
    cout << "DroneSerialnumber: " << droneSerialNumber << endl;
    cout << "DroneWeight: " << droneWeight << "kg" << endl;
    cout << "DroneWingspan: " << droneWingspan << "m" << endl;
    cout << "DroneMunitionHardpoints: " << droneMunitionHardpoint << endl;
  }
  void showdroneName() const
  {

    cout << "Drone 4: " << droneName << "---4 " << endl;
  }
  ~CivilianDrone(){};
};

int main()
{

  CivilianDrone Mavic;
  Mavic.setDroneParameters("Mavic", "Scout", "DFGH-4645218", 1.2, 0.8);

  StrategicalDrone GlobalHawk;
  GlobalHawk.setDroneParameters("GlobalHawk", "Strike and scout", "QAMC-2fe44efeg4h", 6631, 70.8, 6);

  OperativeDrone Predator;
  Predator.setDroneParameters("Predator", "Strike", "QA-12345749", 618.5, 18, 4);

  TacticalDrone Phoenix;
  Phoenix.setDroneParameters("Phoenix", "Scout and kamikadze", "LQHD1E2FEGH", 100.6, 7.4, 1);

  cout << "_________________________________________________________________________________________________________________" << endl;
  cout << "Here is a list of preapered drones for opertion." << endl;
  Phoenix.showdroneName();
  Predator.showdroneName();
  GlobalHawk.showdroneName();
  Mavic.showdroneName();
  cout << "To take control on a drone from the list, enter his sequence number: " << endl;
  getOperator();

  switch (dronenumber)
  {
  case '1':
  {
    cout << endl;
    Mavic.showDroneInfo();
    cout << endl;
    cout << "Mssion objective: Operator spoted enemy tank in field, you need to mark him with laser.";
    cout << "Now you need to target ammo on enemy, coordinates: 0 0" << endl;
    char dir = 'a';
    int x = 3, y = 5;
    cout << "\nChange values by entering (s,w) (e,n) then enter: " << endl;
    while (dir != '\r') 
    {
      cout << "\nYour cooordinates: " << x << ", " << y << endl;
      dir = getc(stdin); 
      if (dir == 'n')   
        y--;
      else if (dir == 'e') 
        y++;
      else if (dir == 's') 
        x++;
      else if (dir == 'w') 
        x--;
      else if (y == 0 && x == 0)
      {
        cout << "                                           \033[1;31mTarget destroyed\033[0m\n";

        break;
      };
      break;
    }
    ff
  }
  case '2':
  {
    cout << endl;
    Predator.showDroneInfo();
    cout << endl;
    cout << "Mssion objective: Ground assault group requested air support you need guide UAV to operation area."<<endl;
    cout << "Now you need guide your drone until its coordinates wiil be: -17 3" << endl;
    char dir1 = 'a';
    int a = -10, b = 9;
    cout << "\nChange values by entering (s,w) (e,n) then enter: " << endl;
    while (dir1 != '\r') 
    {
      cout << "\nYour cooordinates: " << a << ", " << b << endl;
      dir1 = getc(stdin);
      if (dir1 == 'n')    
        b--;
      else if (dir1 == 'e') 
        b++;
      else if (dir1 == 's') 
        a++;
      else if (dir1 == 'w') 
        a--;
      else if (a == -17 && b == 3)
      {
        cout << "                                    \033[1;31mDrone reached operation area\033[0m\n";

        break;
      };
    }
  }
    
  }
}
