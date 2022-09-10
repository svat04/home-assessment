#include <iostream>
using namespace std;
void printAll(float collection[])
{

    for (int j = 0; j < 10; j++)
    {
        std::cout << collection[j]  << std::endl;
    }
}

void printappropriatearray(float collection[]){
    int M;
    cout << "Enter M: ";
    cin >> M;
    if (M < 0)
    {
        cout << "M must be positive;" << endl;
        cout << "Enter M again: ";
        cin >> M;
    }
    else
    {
       cout << collection[M] << endl;
    }
    cout << endl;


}