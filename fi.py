#find the fibonacci series in python 
number=int(input('Enter the number of term: '))

n1=0
n2=1
next=n1 + n2
list=[]

print('Fibonacci: ',n1,n2)
i=3
for i in range(number):
    print(next)
    n1=n2
    n2=next
    next=n1+n2
