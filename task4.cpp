#include <iostream>
#include <iomanip>
using namespace std;

string Your_name;
string name_1;
string surname_1;
int Sum,Fac,age,integer_1,integer_2,N;
bool equality;

void name()
{
cout << "Enter your name: ";
cin >>  Your_name;
cout << "Your name: " << Your_name << endl;
}

void NSA()
{
cout << "Enter your name: ";
cin >> name_1;
cout << "Enter your surname: ";
cin >> surname_1;
cout << "Enter your age: ";
cin >> age;
cout  << "Your  name: " << setw(4) << name_1 <<  endl;
cout << "Your  surname: " << setw(1) << surname_1 << endl;
cout << "Your age: " << age << endl;
}

void equal()
{
cout << "Enter integer(1): ";
cin >> integer_1;  
cout << "Enter integer(2): ";
cin >> integer_2;  
if(integer_1 == integer_2){
cout << "They are equal" << endl;
equality = true;}
else
cout << "They are not equal" << endl;
equality = false;
}

void calculate()
{
cout <<"Enter number: ";
cin >> N;
if (N<0){
cout << "Number is negativ, enter positive one: ";
cin >> N;
}
Sum = 0;
for(int i=0; i<=N; i++)
{
Sum +=i ; 
}
cout << "Sum equal: " << Sum << endl;
}

void print()
{
cout <<"Enter number: ";
cin >> N;
if (N<0){
cout << "Number is negativ, enter positive one: ";
cin >> N;
}

for(int i=0; i<=N; i++)
{
 cout << "Number: " << i << endl;
}
}

void fact()
{
cout <<"Enter number: ";
cin >> N;
if (N<0) {
cout << "Number is negativ, enter positive one: ";
cin >> N;
}
Fac=1;
for(int j=1; j<=N; j++)
{
Fac *=j ; 
}
cout << "Fact equal: " << Fac << endl;
}

char calculateSumEven_Odd(int M,char method){
    float c=0;
if(method =='o')
{
    for(int i=1; i<=M; i+=2){
    
      c +=i;
    
    }
    
 }
 if(method =='e')
{
    for(int i=1; i<=M; i++){
    
      c +=i;
    
    }
    
 }
 return c;
}



int main()
{
    /*
    1.1.0 Write the function that takes <name> as an argument and prints it.
    1.1.0 Write the function that takes <name>, <surname> and <age> as input and prints this info.
    1.1.1 Write the function that takes two integer numbers as an argument. It must return true if they are equal, and false in not.

    1.1.2 Write a function that takes and non-negative integer number N as an argument. 
          The function must print integer numbers in the range 0 to N.

    1.1.3 Write a function that takes and non-negative integer number N as an argument. 
          The function calculate sum of integer numbers in the range 0 to N, AND RETURN it.
    */
    
    // place your code here

    name();   //1.1.0
    NSA();    //1.1.0
    equal();  //1.1.1
    print();  //1.1.2
    calculate();//1.1.3
    /*
    2.1 Write a function that calculate and return the factorial of a given number as an argument. Use for or while loop. For example, if user input 3, program must print 6 (1*2*3).

    *A little Help for your:  

        Нагадую що факторіал числа це оце: 1 * 2 * 3 * 4 * … * N. 
        Тоді, factorial of 4  is: 4!  = 1*2*3*4 = 24.
        A factorial of 4  is: 7!  = 1*2*3*4*...*7  = 5040.
        A factorial of 10 is: 10! = 1*2*3*4*...*10 = 3628800.
        

    А ось приклад виклику цієї функції:
    int facto_res = facto(4);
    */
    
    // place your code here
    fact(); //2.1
    
    
    
    /*
    
    2.1* Write a function that calculate separate sum of odd or even numbers in sequence from range 1 to N. 
    This function must take as an argument a number of elements in sequence – N, and 
    also char symbol ‘e’ of ‘o’: ‘e’ for even numbers, and ‘o’ for odd numbers.

        Say, I want to calculate a sum of odd numbers in range of 1 to 5. 
        Then, I should call this function like:

            int result = calculateSumEven_Odd(5, 'o');

        The result would be a sum of all odd numbers in range of 1 to 5: 1, 2, 3, 4, 5. 
        So, the returned result would be 1 + 3 + 5 = 9.

    */ 
     
    
    
    // place your code here
    
    
     int result =calculateSumEven_Odd(5,'o');
     cout <<"Result: "<< result << endl;
    
    
    /*
    3.  Imagine that you working on online chat application. You have a model with two users, and you must to operate with next information:
        - nickname (f.e.: “Nick”);
        - phone number (f.e.: +380 12 345 67 89)
        - account number (f.e.: 543GDR45GF);
        - activity (online/offline, boolean);

        You must create a simple program model to allows these two users to communicate with each other with known information. 
        Users must have the following abilities:
        - addUserToContacts()
        - sendMessage()
        - makeAudioCall()
        - makeVideoCall()
        - makePhoneCall()

    You need to make these functions for each of the two users (we don't know about Classes in C++ yet, sorry 😄).

    You have to figure out in what situations which data for functions are required as input and which as output. Also you have to figure out in what situations which data for functions are required as input and which as output. And also think about simple logic for your functions, for example, user-1 will not be able to successfully make a video call to user-2 if the user-2 is offline. 

    Or, say, user-1 wants to add user-2 to contacts. Suppose that when adding a friend, you need to enter the correct phone number, and if it matches the existing one (user-2), then user-2 will be successfully added to user-1’s contacts.
    */
    
    
    // place your code here
    
   char nickname_usr1 = "John";
   char nickname_usr2 = "Mike";
   string phone_number_usr1 = "+380678912365";
   string phone_number_usr2 = "+380975247921";
   string acc_number_usr1 = "235DF5";
   string acc_number_usr2 = "198GM9";
   bool status;
    
   swith(user)
   {
     case John

   }
   

    return 0;
}