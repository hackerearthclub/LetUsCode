def partition(a,low,high):
    i=low-1
    piv=a[high]
    for j in range(low,high):
        if a[j]<=piv:
            i=i+1
            a[i],a[j]=a[j],a[i]
    a[i+1],a[high]=a[high],a[i+1]
    return (i+1)
def quicksort(a,low,high):
    if low<high:
        pi=partition(a,low,high)
        quicksort(a,low,pi-1)
        quicksort(a,pi+1,high)
    
a=list(map(int,input().split()))
quicksort(a,0,len(a)-1)
print(a)
