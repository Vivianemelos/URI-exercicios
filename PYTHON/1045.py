A, B, C = [float(x) for x in input().split(" ")]
if(A<=B and A<=C):
    if(B<=C):
        A,B,C = C,B,A
    elif(B>=C):
        A,B,C = B,C,A
elif(A<=B and A>=C):
    if(B<=C):
        A,B,C = C,A,B
    elif(B>=C):
        A,B,C = B,A,C
elif(A>=B and A>=C):
    if(B<=C):
       A,B,C = A,C,B
if(A>=B+C):
    print('NAO FORMA TRIANGULO')
else:    
    if((A**2)==(B**2) + (C**2)):
        print('TRIANGULO RETANGULO')
    elif((A**2)>(B**2) + (C**2)):   
        print('TRIANGULO OBTUSANGULO')
    elif((A**2)<(B**2)+(C**2)):
        print('TRIANGULO ACUTANGULO')
if(A==B==C):
    print('TRIANGULO EQUILATERO')
if((A==B and A!=C) or (A==C and A!=B)or(B==C and B!=A)):
    print('TRIANGULO ISOSCELES')
    
   
