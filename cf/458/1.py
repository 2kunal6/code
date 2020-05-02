import math

input()
n=list(map(int, input().split(" ")))
n.sort()
n.reverse()
for i in range(len(n)):
    if(n[i]<0):
        print(n[i])
        exit(0)
    v=math.sqrt(n[i])
    if((v-int(v))!=0):
        print(n[i])
        exit(0)
