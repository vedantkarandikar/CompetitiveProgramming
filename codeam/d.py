t, b = map(int, input().split(" "))
bits = [-1] * b
for i in range(t):
    for j in range(150):
        n = (j%b)
        print(n+1)
        c = int(input())
        if bits[n] != c:
            # condition 1, 2, 3
            if bits[b-n+1] == c:
                pass
                # condition 2
            
        bits[j%b] = c
        
        if (b == 10 and j+1==10) or (b == 20 and j+1 == 20):
            print(''.join(list(map(str, bits))))
            if input()=='Y':
                break
            else:
                exit(0)