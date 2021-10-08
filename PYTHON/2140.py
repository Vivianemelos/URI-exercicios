N, M = [int(x) for x in input().split(" ")]
while N!=0 and M!=0:
    if N<M:
        N,M = M,N
    dif = N - M
    if((dif== 150) or (dif==120) or (dif==110) or (dif==105) or (dif==102) or (dif==70) 
    or (dif==60) or (dif==55) or (dif==52) or (dif==30) or (dif==25) or (dif==22) 
    or (dif==15) or (dif==12) or (dif==7)):
        print('possible')
        
    else:
        print('impossible')
    N, M = [int(x) for x in input().split(" ")]
