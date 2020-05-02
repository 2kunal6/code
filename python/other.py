import re

print(re.search("a*c", "accbd"))
print(re.search("a*c", "accbd").span())
print(re.search("a*c", "accbd").string)
print(re.search("a*c", "accbd").group())

def f(x):
    return x+5;

a=33
b=33
if(a>b):
    print("wrong")
elif(a==b):
    print("right")


c="abcd"
for x in c:
    print(x)
for x in range(5, 7):
    print(x)

print(f(1000))

x=lambda z : z+2
print(x(10))
