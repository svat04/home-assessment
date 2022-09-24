#include <iostream>
#include <stdio.h>
using namespace std;
#include <stdlib.h>
char dronenumber;
char getOperator()
{
  while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
  {
    cout << "Enter one of the following: 1,2,3,4: ";

    cin >> dronenumber;

    // Выполняем проверку значений
    if (dronenumber == '1' || dronenumber == '2' || dronenumber == '3' || dronenumber == '4')
      return dronenumber; // возвращаем данные в функцию main()
    else                  // в противном случае, сообщаем пользователю, что что-то пошло не так
      cout << "Oops, that input is invalid.  Please try again: ";
  }
}

class DroneArmy
{
protected:
  string DroneName;
  string OperativeDrone;
  string DroneType;
  string DroneSpecification;
  string DroneSerialNumber;
  float DroneWeight;
  float DroneWingspan;
  int DroneMunitionHardpoint;

  DroneArmy(){};
  ~DroneArmy(){};
};

class TacticalDrone : protected DroneArmy
{
public:
  TacticalDrone()
  {
    DroneType = "Tactical";
  };
  void setDroneParameters(string newDronename, string newDroneSpecification, string newDroneSerialNumber, float newDroneWeight, float newDroneWingspan, int newDroneMunitionHardpoint)
  {
    DroneName = newDronename;
    DroneSpecification = newDroneSpecification;
    DroneSerialNumber = newDroneSerialNumber;
    DroneWeight = newDroneWeight;
    DroneWingspan = newDroneWingspan;
    DroneMunitionHardpoint = newDroneMunitionHardpoint;
  }
  void getDroneInfo()
  {

    cout << "Name: " << DroneName << endl;
    cout << "DroneSpecification: " << DroneSpecification << endl;
    cout << "DroneType: " << DroneType << endl;
    cout << "DroneSerialnumber: " << DroneSerialNumber << endl;
    cout << "DroneWeight: " << DroneWeight << "kg" << endl;
    cout << "DroneWingspan: " << DroneWingspan << "m" << endl;
    cout << "DroneMunitionHardpoints: " << DroneMunitionHardpoint << endl;
  }
  void getDroneName() const
  {

    cout << "Drone 1: " << DroneName << "---1 " << endl;
  }

  ~TacticalDrone(){};
};

class OperativeDrone : protected DroneArmy
{
public:
  OperativeDrone()
  {
    DroneType = "Operative";
  };
  void setDroneParameters(string newDronename, string newDroneSpecification, string newDroneSerialNumber, float newDroneWeight, float newDroneWingspan, int newDroneMunitionHardpoint)
  {
    DroneName = newDronename;
    DroneSpecification = newDroneSpecification;
    DroneSerialNumber = newDroneSerialNumber;
    DroneWeight = newDroneWeight;
    DroneWingspan = newDroneWingspan;
    DroneMunitionHardpoint = newDroneMunitionHardpoint;
  }
  void getDroneInfo()
  {

    cout << "Name: " << DroneName << endl;
    cout << "DroneSpecification: " << DroneSpecification << endl;
    cout << "DroneType: " << DroneType << endl;
    cout << "DroneSerialnumber: " << DroneSerialNumber << endl;
    cout << "DroneWeight: " << DroneWeight << "kg" << endl;
    cout << "DroneWingspan: " << DroneWingspan << "m" << endl;
    cout << "DroneMunitionHardpoints: " << DroneMunitionHardpoint << endl;
  }

  void getDroneName() const
  {

    cout << "Drone 2: " << DroneName << "---2 " << endl;
  }
  ~OperativeDrone(){};
};

class StrategicalDrone : protected DroneArmy
{
public:
  StrategicalDrone()
  {
    DroneType = "Strategical";
  };
  void setDroneParameters(string newDronename, string newDroneSpecification, string newDroneSerialNumber, float newDroneWeight, float newDroneWingspan, int newDroneMunitionHardpoint)
  {
    DroneName = newDronename;
    DroneSpecification = newDroneSpecification;
    DroneSerialNumber = newDroneSerialNumber;
    DroneWeight = newDroneWeight;
    DroneWingspan = newDroneWingspan;
    DroneMunitionHardpoint = newDroneMunitionHardpoint;
  }
  void getDroneInfo()
  {

    cout << "Name: " << DroneName << endl;
    cout << "DroneSpecification: " << DroneSpecification << endl;
    cout << "DroneType: " << DroneType << endl;
    cout << "DroneSerialnumber: " << DroneSerialNumber << endl;
    cout << "DroneWeight: " << DroneWeight << "kg" << endl;
    cout << "DroneWingspan: " << DroneWingspan << "m" << endl;
    cout << "DroneMunitionHardpoints: " << DroneMunitionHardpoint << endl;
  }
  void getDroneName() const
  {

    cout << "Drone 3: " << DroneName << "---3 " << endl;
  }
  ~StrategicalDrone(){};
};

class CivilianDrone : protected DroneArmy
{
public:
  CivilianDrone()
  {
    DroneType = "Civilian";
    DroneMunitionHardpoint = 0;
  };
  void setDroneParameters(string newDronename, string newDroneSpecification, string newDroneSerialNumber, float newDroneWeight, float newDroneWingspan)
  {
    DroneName = newDronename;
    DroneSpecification = newDroneSpecification;
    DroneSerialNumber = newDroneSerialNumber;
    DroneWeight = newDroneWeight;
    DroneWingspan = newDroneWingspan;
  }

  void getDroneInfo()
  {

    cout << "Name: " << DroneName << endl;
    cout << "DroneSpecification: " << DroneSpecification << endl;
    cout << "DroneType: " << DroneType << endl;
    cout << "DroneSerialnumber: " << DroneSerialNumber << endl;
    cout << "DroneWeight: " << DroneWeight << "kg" << endl;
    cout << "DroneWingspan: " << DroneWingspan << "m" << endl;
    cout << "DroneMunitionHardpoints: " << DroneMunitionHardpoint << endl;
  }
  void getDroneName() const
  {

    cout << "Drone 4: " << DroneName << "---4 " << endl;
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
  Phoenix.getDroneName();
  Predator.getDroneName();
  GlobalHawk.getDroneName();
  Mavic.getDroneName();
  cout << "To take control on a drone from the list, enter his sequence number: " << endl;
  getOperator();

  switch (dronenumber)
  {
  case '1':
    Mavic.getDroneInfo();
    cout << "Now you need to target ammo on enemy, coordinates: 0 0" << endl;
    char dir = 'a';
    int x = 3, y = 5;
    cout << "\nChange values by entering (s,w) (e,n) then enter: " << endl;
    while (dir != '\r') // пока не нажата клавиша Enter
    {
      cout << "\nYour cooordinates: " << x << ", " << y << endl;
      dir = getc(stdin); // ввод символа
      if (dir == 'n')    // движение на север
        y--;
      else if (dir == 'e') // движение на юг
        y++;
      else if (dir == 's') // движение на восток
        x++;
      else if (dir == 'w') // движение на запад
        x--;
      else if (y == 0 && x == 0)
      {
        cout << "                                           \033[1;31mTarget destroyed\033[0m\n";
        

        break;
      };
    }
  }
  /*case 2:
    GlobalHawk.getDroneInfo();
    break;

  case 3:

    Predator.getDroneInfo();
    break;

  case 4:
    Phoenix.getDroneInfo();

    break;
  }
  */
}