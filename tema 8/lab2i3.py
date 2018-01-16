mx=0
mn=1000000
for i in range(10):
     x= int (input("x="))
     if x > mx :
         mx=x
     if x < mn :
         mn=x
print("maximul = " , mx , "\n minimul" , mn)
