t=int(input())
while(t > 0):
    il = list(map(int, input().split(' ')))
    a=il[0]
    b=il[1]
    if(a==b):
        print(0)
    elif(a<b):
        if((b-a)%2==1):
            print(1)
        else:
            print(2)
    elif(a>b):
        if((b-a)%2==0):
            print(1)
        else:
            print(2)
    t-=1
