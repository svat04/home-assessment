def getAboveNumfun(list):
    elem = int(input("Enter number: "))
    for i in range(0,10):
     if  (list[i] > elem):
      print(list[i])
      break
    else: 
      print ("-1")