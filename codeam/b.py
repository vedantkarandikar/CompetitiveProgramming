for i in range(int(input())):
    s = list(input())
    o = ""
    d = 0
    for x in s: 
        x = int(x)
        diff = x-d
        if diff>0:
            d += diff
            o += "("*diff
        elif diff<0:
            diff = -diff
            d -= diff
            o += ")"*diff
        o += str(x)
    while d>0:
        d -= 1
        o += ")"
    print("Case #{}: {}".format(i+1, o))
    