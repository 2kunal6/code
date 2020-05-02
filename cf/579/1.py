for q in range(int(input())):
    n=int(int(input()))
    a=list(map(int, input().split(' ')))
    ans="YES"
    for i in range(1, n):
        if(not((a[i-1]==n and a[i]==1) or (a[i]==a[i-1]+1))):
            ans="NO"
    a.reverse()
    rans="YES"
    for i in range(1, n):
        if(not((a[i-1]==n and a[i]==1) or (a[i]==a[i-1]+1))):
            rans="NO"
    if(rans=='NO' and ans=='NO'):
        print(rans)
    else:
        print("YES")
