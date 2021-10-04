#function start
def sumtriangle(n):
    if n == 1:
        return 1
    else:
        return n+(sumtriangle(n-1)) #recursive function
#function end




n = int(input("Enter number :"))
while (n!= -1): #loop start
    print(sumtriangle(n))
    n = int(input("Enter number :"))

print("Finished")
