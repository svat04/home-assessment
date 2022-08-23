/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


int main()
{ 

    
    /* 1. Write a program to check whether a given number by user is positive or negative. 
          Depending on a result - report it in the console. After that – ask user to enter another number. 
          Find the largest of two entered numbers. Depending on a result - report it in the console.
    */
    
    // place your code
    float a,b;

    cout <<"Enter number(1):";
    cin >> a;
    if (a>0)
        cout << "Number is positive."<<endl;  
    else 
    cout << "Number is negative."<<endl ;
    
    cout <<"Enter another number(2):";
    cin >> b;
    if (a>b)
        cout <<"Number(1) is larger."<<endl;
        else if (a<b)
        cout << "Number(2) is larger."<<endl;
        else if (a==b)
        cout << "Number(1) is equal to Number(2)."<<endl;
    /* 2. Write a small program to compare two strings which values was written by user’s keyboard. 
          Also, create additional logic variable (boolean). 
          If strings are the same – print the next message: <your_string_1> is equal to <your_string_2> and assign truth to a logic variable, 
          otherwise – assign false and report it in the console.
    */
    
    // place your code
    
    string string_1;
    string string_2;
    bool var;
    cout <<"Enter string(1):";
    cin >> string_1;
    cout <<"Enter string(2):";
    cin >> string_2;
     if (string_1==string_2){
      cout<< "your_string_1 is equal to your_string_2"<<endl;
      var = true;
      cout<<"boolean var = "<<var<<endl;
  }
      else{
	  
      cout<< "your_string_1 is not equal to your_string_2"<<endl;
      var = false;
      cout<<"boolean var = "<<var<<endl;
  }
    /*  3. Write a program that finds the largest of three entered numbers. 
           Depending on a result - report it in the console.
           
           
           Підказка: use if in if:
           
           if (...) 
           {
               if (...) 
               {
                   
               }
           }
           
           or you can use:
            - and &&
            - or || 
    
    */
    
    // put your code here
    float c,d,e;
    cout <<"Enter number(1):";
    cin >> c;
    cout <<"Enter number(2):";
    cin >> d;
    cout <<"Enter number(3):";
    cin >> e;
    if (c>d && c>e)
	{
	cout << "Number(1) is the largest";
	}
	else if ( d>c && d>e){
	
    cout << "Number(2) is the largest";
    }
    else{
    	cout << "Number(3) is the largest";
	}
	return 0;
}