t=int(input())
while(t):
    t=t-1
    a=0
    k=0
    b=int(input( ))
    l=[]
    while(b):
        b=b-1
        l.append(int(input()))
    l.sort()
    while(len(l) != 0):
        a=a+1
        s=set(l)
        for i in s:
            if i in l:
                l.remove(i)
    print(a)
        
    
                
