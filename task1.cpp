#include <iostream> // для використання потокового вводу/виводу cin/cout

using namespace std; // щоб не писати std::cout, а просто std

// 1.1 Variables initialization

int main()
{
int data = 225;            //      Create a variable named "data", and assign to it the value 255 (you must choose the right data type).
float playload = 6.153;    //      Create a variable named "payload", and assign to it the value 6.153 (you must choose the right data type).
bool flag = true;          //      Create a variable named "flag", and assign to it the value "true" (you must choose the right data type).
char ch = '#';             //      Create a variable named "ch", and assign to it the value '#' (you must choose the right data type).
                           // Note: you also need to use endl: try to type in main following code and run it:
cout << data << endl;      //      cout << "Something 1" << endl;
cout << playload << endl;  //      cout << "Something 2" << endl;
cout << flag << endl;      //      cout << "Something 3" << endl;
cout << ch << endl;        // You will see:

// 1.2 Print all variables in next format (help: use spaces):data value is : 255

   cout << "data value is :" << data <<endl; // data value is : 255
   cout << "playload value is :" << playload <<endl; //      payload value is : 6.153
   cout << "flag value is :" << flag <<endl; //      flag value is : true
   cout << "ch value is :" << ch <<endl; //      ch value is : #
    
    // 2. Variable's acrobatics
    
 int var = 100;  //      Create integer variable assigning to it any value,
 var -+ 90;  // then — change it value to 10.
 var +=100; //      Operating with the previous variable — add 100 to its value and print it.
 cout << var <<endl;    
 var -=20;//      Operating with the previous variable — subtract 20 from its value and print it.
 cout << var <<endl;
 var *=3;   //      Operating with the previous variable — multiply by 3 the current value and print it.
 cout << var << endl;
 var/=2; //      Operating with the previous variable — divide by 2 the current value and print it.
 cout << var << endl;
    
    // 3. Someone wrote a program with errors. 
    // Uncomment below code and find these errors and tell why did they arise
    
     float g = 0;
     float h = 1;
     double q = 1.5426;
    
    
    // 4. Someone wrote a program with errors. 
    // Uncomment below code and find these errors and tell why did they arise
    
     int value = 3;
     value = value + 1;
     cout << value << endl; 
    
    
    // 5. Someone wrote a program with errors. 
    // Uncomment below code and find these errors and tell why did they arise
    
     int userID = 0x12;
     userID += 5;
     cout << userID << endl;
    
    
    return 0;
}