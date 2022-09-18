# Task 1
'''
1.1 Create a list using loop (or generator) of integer values: 1, 53, -35, 94, 2, 0, -6, 24, -4 

1.2 Write a code to get the smallest number from this list

1.3 Create a function called sortAsIWant() that pass as argument list and bool variable: if bool variable is true -- 
    list must be sorted from low to high element, otherwire -- from high to high. This function must return sorted list.
'''
import random
randomlist = []
for i in range(0,10):
  n = random.randint(-30,30)
  randomlist.append(n)
print(randomlist)
randomlist.sort()
print("Smallest element is:", randomlist[0])

def sortAsIWant(list,type):
  if (type == True):
    list.sort()
    print(list)
  elif (type == False):
    list.sort(reverse=True)
    print(list)
   

list = [-1,-3,6,4,2,-3,0,5,5]
sortAsIWant(list,True)
sortAsIWant(list,False)
# Task 2
'''
Print all keys and all values of the following dictionary:
{"C++": 8000 , "Python": 9000, "Java": 7000 }


Print all keys and all values of the following dictionary:
{"C++": {"salary" : 8000} , "Python": {"salary" : 9000}, "Java" : {"salary" : 7000} }
'''
d = {"C++": 8000 , "Python": 9000, "Java": 7000 }
for i in d :
    print(i, d[i])
print("________________________________________________________________________-")
f = {"C++": {"salary" : 8000} , "Python": {"salary" : 9000}, "Java" : {"salary" : 7000} }
for f, sal in f.items():
   print(f,sal['salary'])
   
# Task 3
'''
Merge two following dictionaries into one USING built-in dictionarie methods:
{'Monday': 10, 'Tuesday': 20, 'Wednesday': 30}
{'Thursday': 30, 'Friday': 40, 'Saturday': 50, "Sunday" : 40}
'''
d1 ={'Monday': 10, 'Tuesday': 20, 'Wednesday': 30}
d2 ={'Thursday': 30, 'Friday': 40, 'Saturday': 50, "Sunday" : 40}
(d1.update(d2))
print(d1)