def search(a,size,element):
    for i in range(size):
        if a[i]==element:
            return True
    return False

if __name__ == "__main__":
    a = [10,65,83,25,60,120]
    size = len(a)
    if search(a,size,25):
        print ("Found")
    else:
        print ("Not Found")

    if search(a,size,11):
        print("Found")
    else:
        print("Not Found")
