t=int(input())
while(t):
    t=t-1
    n=int(input())
    l = [ i  for i in input().split()]
    l.sort(reverse=True)
    s=''
    for i in l:
        s=s+i
    print(s)
