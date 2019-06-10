import random
tc = random.randint(1,15)
print(tc)
while(tc):
    tc=tc-1
    n = random.randint(1,20)
    print(n)
    l=[]
    
    while(n):
        n=n-1
        l.append(random.randint(0,1000))
    k=len(l)
    for i in range(0,k-1):
        print(l[i],end=' ')
    print(l[k-1])
