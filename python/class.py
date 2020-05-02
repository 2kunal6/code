class c:
    x=2
class p:
    def __init__(self, n, a):
        self.name=n
        self.age=a
    def f(self):
        print("name is : " + self.name)

class s(p):
    pass
p1=p("a", 12)
print(p1.name)
print(p1.age)
p1.f()

s1=s("bb", "100")
print(s1.name)
s1.f()


mc=c()
print(mc.x)
