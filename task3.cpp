#include <iostream>

using namespace std;

int main()
{
    // 1. Loops (for/while/do while)
    // 1.1.0 Write a program that prints your name 8 times.
    // 1.1.2 Write a program that prints integer numbers in the range 0 to 100.
    // 1.1.3 Write a program that prints integer numbers in the range -10 to 10.
    // 1.1.4 Write a program that prints integer numbers in the range -100 to 100.
    
    // paste your code here 
    int i;
    for ( i = 0; i <= 7;  i++)  
    {
        cout << "Sviatoslav   " << "Name: "<< i << endl;   
    }
    
    cout <<"**_____________________________________________________________________________________**" <<endl;
    
    int j=0; 
    while (j<=100)
    {
        cout  << "Integer: "<< j << endl;
        j++;
    }

    cout <<"**_____________________________________________________________________________________**" <<endl;
    
    int m;
    for ( m = -10; m <= 10 ; m++)
    {
        cout  << "Integer: "<< m << endl;
    }
    
    cout <<"**_____________________________________________________________________________________**" <<endl;


    int n = -100;
    do
    {
       cout << n << endl;
       n++;
    } while (n<=100 );
    
    
    
    
    // 2.1 Write a program that accepts a positive integer N from the user. 
    // Make sure that the user enters exactly a positive number. 
    // After that - sum up a series of numbers from 0 to the entered number N (0 + 1 + 2 + … + N). 
    // For example, if user enter 3 (N = 3), program must print your 6, what means 1+2+3. 
    // You must use for loop.
    
    // paste your code here 
    int N,k,Sum;
    cout << "Enter N: ";
    cin >> N;
    if (N<0)
    {
        cout <<"You need to enter only positve numbers, retype N: ";
        cin >> N;
    }
    
    Sum = 0;
    for ( k = 0; k <= N; k++)
    {
        Sum+=k;
        
    }
      cout << "Sum: "<< Sum <<endl;
    
    
    
    
    
    // 2.2 Rewrite previous program using while loop! 
    
    // paste your code here 
     int M,l,Sum1;
    cout << "Enter M: " ;
    cin >> M;
    if (M<0)
    {
        cout <<"You need to enter only positve numbers, retype M: ";
        cin >> M;
        
    }
       

    Sum1 = 0;
    l=0;
    


    while (   l <= M )
    {
        Sum1+=l;
        l++;
        
    
    }
    cout << "Sum1: "<< Sum1 <<endl;
 
    
    // 3*. A timer is a software program or hardware device in your PC, smartphone, laptop that keeps track of the elapsed time between two events. These events could be mouse clicking, opening new browser window, start Minecraft and CS:GO and so on. Timer count time in “ticks”. A number of ticks could be a pretty large number, to represent 1 second.
    // 	Let’s say that 1 second = 10 000 ticks. Simulate that you have a time span of 20 seconds, where:
    //         - every 10 seconds the “My-Homework-N4.docx” auto save process occurs;
    //         - every 5 seconds a browser page is refreshed;
    //         - every 1 seconds it polls for the state Wi-Fi connection;
    //         - every 1000 ticks it polls for the state of the connected charger;
    //         - every 100 ticks it polls for the state of the left mouse button.
    // At given intervals, you just need to PRINT THE NAME OF THE PROCESS, for example: “Browser page has refreshed!”, and so on.

    
    // paste your code here 
    int time = 20;
    int ticks = time*10000;

    for(int p=100000; p<=ticks; p+=100000){
    cout << "My- Homework-N4.docx  "<<"Timer: "<< p <<endl;
    }
    for(int o=50000; o<=ticks; o+=50000){
    cout << "Browser page is refreshed.  " <<"Timer: "<< o << endl;
    }
    for(int y=10000; y<=ticks; y+=10000){
    cout << "The state Wi-Fi connection.  " <<"Timer: "<< y << endl;
    }
    for(int a=1000; a<=ticks; a+=1000){
    cout << "The state of the connected charger.  " <<"Timer: "<< a << endl;
    }
    for(int b=100; b<=ticks; b+=100){
    cout << "The state of the left mouse button. "<<"Timer: "<< b << endl;
    }
    return 0;
}

