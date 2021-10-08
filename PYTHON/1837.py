a,b = [int(x) for x in input().split(" ")]
for r in range(abs(b)):
    q = int((-(a) + r)/-(b))
    if a == (b * q + r):
        print(q, r)
