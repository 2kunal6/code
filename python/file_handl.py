import os

f=open("file.txt")
for x in f:
    print x

os.remove("file.txt")
