lis=["abc", "123", "xyz"]
print(lis[0])
lis[0]="ddd"
print(lis[0])
for item in lis:
    print(item + " ")
if("123" in lis):
    print("123")
if(123 in lis):
    print("int 123")
print(len(lis))
lis.append("CAO")
print(lis)
lis.insert(5, "CCC")
print(lis)
lis.remove("ddd")
print(lis)
lis.pop()
print(lis)
del(lis[0])
print(lis)
lis.clear()
print(lis)
lis=list(("qq", '11'))
print(lis)
del(lis)
#print(lis)
