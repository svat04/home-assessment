
'''
This is long comment in Python, btw :)
'''

'''
    Ex. 1:
        1. Create array (list) and append to it elements from -9 to 9; 
        2. Replace all elements to string "Python";
        3. Write a piece of code that ask user to give value and assign each element of array by this given value;

    Note: fill free to use built-in methods of lists or arrays: 
    https://docs.python.org/3/tutorial/datastructures.html#more-on-lists
'''
# put your code here

from ast import If


arr = [-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9]
print(arr)

for i in range(0,19):
     arr[i] = "Python"
print(arr)

array = [1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]
print(array)
N = int(input("Enter number: "))
for i in range(0,23):
     array[i] = N
print(array)
'''
    Ex. 2:
        1. Create getAboveZero() function with integer list as an argument. It must return the first element that above 0. If there is no such elements it must return -1;
        2. Create getAboveNum()  function with integer list as an argument and integer number. It must return the first element that above integer number (that was passed as argument). If there is no such elements it must return -1.
        2. Видалив бо те саме завдання задане двічі.
    Note: fill free to use built-in methods of lists or arrays: 
    https://docs.python.org/3/tutorial/datastructures.html#more-on-lists
'''
# put your code here
print("Task2.1:______________________________________________________________________________________________")
list = [-1,-3,6,4,2,-3,0,5,5]
def getAboveZero(list):
    for i in range(0,10):
     if  (list[i] > 0):
      print(list[i])
      break
    else: 
      print ("-1") 

getAboveZero(list)

print("Task2.2:______________________________________________________________________________________________")
def getAboveNum(list):
    elem = int(input("Enter number: "))
    for i in range(0,10):
     if  (list[i] > elem):
      print(list[i])
      break
    else: 
      print ("-1") 
     
getAboveNum(list)
'''
    Ex. 3:
        1. Locate functions that you have implemented above in separate module called "arracrobatics.py". Then include it and call this function;
'''
# put your code here
from arracrobatics import getAboveNumfun

print("Task3:______________________________________________________________________________________________")
getAboveNumfun(list)
'''
    Ex. 3*:
        Write a program that will read the entered four-digit number. 
        After that, each digit of this number should go into a new series.
'''
# put your code here
print("Task3*:______________________________________________________________________________________________")
value = int(input("Enter number: "))
v = [int(j) for j in str(value)]
print(v)