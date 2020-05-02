nm=list(map(int, input().split(" ")))
cpk=[]
for i in range(nm[0]):
    ab=list(map(int, input().split(" ")))
    cpk.append((ab[0]/ab[1])*nm[1])
print(min(cpk))
