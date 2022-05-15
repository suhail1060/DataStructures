from ctypes import sizeof


A=[1,2,0,0,2,2,1,1,2]
l=0
m=0
h=len(A)
print(h)

while(m<=h):
    match A[m]:
        case 0:
            m=m+1
            break
        case 2:
            A[m],A[h]=A[h],A[m]
            m=m+1
            h=h-1
            break
        case 1:
            