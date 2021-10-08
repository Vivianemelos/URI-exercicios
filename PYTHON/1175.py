N = []
i = 0
while i<20:
    x = int(input())
    N.append(x)
    i = i + 1

i = 19
while i>=0:
    m = 19 - i
    print("N[%d] = %d" %(m,N[i]))
    i = i - 1
