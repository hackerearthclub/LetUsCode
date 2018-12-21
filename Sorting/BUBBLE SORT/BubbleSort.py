# Function for BubbleSort
def BubbleSort(a,n):
    for i in range(n):
        for j in range(n):
            if a[i] < a[j]:
                a[i],a[j] = a[j],a[i]

if __name__ == "__main__":
    arr = list(map(int,input().split())) #taking array input
    n = len(arr) #Lenght of array
    BubbleSort(arr,n)
    print("Sorted Array: ",*arr)
    
