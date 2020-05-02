il=list(map(int, input().split(" ")))
if(il[0]+1==il[1] or il[1]+1==il[0]):
    print("Yes")
    exit(0)
il[0]-=il[1]
if(il[0]>0 and il[0]%3==0):
    print("Yes")
    exit(0)
print("No")
