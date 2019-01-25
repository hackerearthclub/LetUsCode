def selection_sort(Arr):

	for i in range(0, len(Arr)-1):
		Min = i
		for j in range(i+1, len(Arr)):
			if Arr[j] < Arr[Min] :
				Min = j

		Arr[i], Arr[Min] = Arr[Min], Arr[i]

A = [13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7]
print("Orignal array = ", A)
selection_sort(A)
print(" Sorted array = ", A)
