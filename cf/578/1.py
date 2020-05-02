n=input()
ans=[0]*10
for i in input():
    if i=='L':
        for j in range(10):
            if ans[j]==0:
                ans[j]=1
                break
    elif i=='R':
        for j in range(9,-1,-1):
            if ans[j]==0:
                ans[j]=1
                break
    else:
        ans[int(i)]=0
print (*ans,sep='')
