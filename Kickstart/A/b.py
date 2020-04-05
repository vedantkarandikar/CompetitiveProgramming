t = int(input())
maxD = 1
for i in range(t):
    n, k = list(map(int, input().split(" ")))
    x = list(map(int, input().split(" ")))
    d = []
    for j in range(1,len(x)):
        n = abs(x[j]-x[j-1])
        if n>1:
            d.append(n)
    d.sort(reverse=True)
    for j in range(k):
        if len(d)>0:
            print(d)
            temp = d[0]
            print(temp)
            temp = int(temp/2)
            print(temp)
            if temp%2 == 0:
                d.extend([temp, temp])
            else:
                d.extend([1+temp, temp])
            d = d[1:]
            #d.sort(reverse=True)
            maxD = d[0]
    print("Case #{}: {}".format(i+1, maxD))
