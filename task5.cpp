
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "arrays_acrobatics.h"
using namespace std;
string emailes[4] = {"Mike@gmail.com", "John@gmail.com", "Lucy@gmail.com", "Nate@gmail.com"};
int index[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int indx;
void printarray()
{

    for (int j = 0; j < 4; j++)
    {
        cout << emailes[j] << ' ' << endl;
    }
}

void printindexarray(int collection[], int indx)
{

    if (indx < 0)
    {
        cout << "Index must be positive;" << endl;
        cout << "Enter index again: ";
        cin >> indx;
    }
    cout << "Your element: " << index[indx] << endl;
}
int main()
{
    /*
    1.1 Declare a symbolic (char) array with size of 5 elements, and initialize it manually. Please: don’t use magic constants.

    1.2 Declare and initialize an integer array with size of 10 elements and print it to the terminal. Please: don’t use magic constants.

    1.3 Declare a string array with size of 4 elements and initialize it the same values, for example your name, using for/while loop. Please: don’t use magic constants.

    1.4 Write a function that takes an array as an argument. The function must prints all elements to the terminal.

    1.5 Rewrite a previous function that takes an array as an argument, as well as non-negative integer number. The function must prints a specific element if this array to the terminal.
    */

    // place your code here

    char symb[5] = {'a', 'b', 'c', 'd', 'e'}; // 1.1

    int numb[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 1.2
    for (size_t i = 0; i < 10; i++)
    {
        cout << numb[i] << ' ' << endl;
    }
    cout << endl;

    string name[4] = {"Mike", "John", "Lucy", "Nate"}; // 1.3
    for (int j = 0; j < 4; j++)
    {
        cout << name[j] << ' ' << endl;
    }
    cout << endl;

    printarray(); // 1.4

    cout << "Enter index: "; // 1.5
    cin >> indx;
    printindexarray(index, indx);
    /*
    2.1 Declare an integer array (non-negative) with size of N elements, where N – is a number entered by user (cin). After that - initialize the array manually: you array must consist of following numbers: 1, 2, 3, 4, 5, … N.

    2.2 Continuing previous task: print only odd elements to the terminal. After that – print only even elements to the terminal.

    2.3 Continuing previous task: change the elements that are > 2. After that – print the array to the terminal.
    */

    // place your code here
    int N;
    int Narray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Enter N: ";
    cin >> N;
    if (N < 0)
    {
        cout << "N must be positive;" << endl;
        cout << "Enter N again: ";
        cin >> N;
    }
    else
    {
        for (int k = 0; k < N; k++)
        {

            cout << Narray[k] << endl;
        }
    }
    cout << endl;

    for (int k = 0; k < N; k+=2)
        {

            cout << Narray[k] << endl;
        }
    cout << endl;

    for (int k = 0; k < N; k++)
        {
          if(Narray[k]%2==0)
            cout << Narray[k] << endl;
        }
    
    cout << endl;

    for (int k = 0; k < N; k++)
        {
          if(Narray[k]>2)
          Narray[k] = 1;
            cout << Narray[k] << endl;
        }

        cout << endl;
    /*

    3.1 Create the function that print all elements in appropriate array.
        Here is an example of call this function:
            printAll(array);
 

    3.2 Move the implementation of this function in header file called "arrays_acrobatics.h"

    3.3 Create a new function in "arrays_acrobatics.h" that return specified element of an appropriate array.
        The arrays must be float.
    */ 
   float All[]={1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.8, 10.11};
   printAll(All);
   printappropriatearray(All);

    // place your code here
    
    return 0;
}