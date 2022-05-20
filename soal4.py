def bubbleSort(arr):
	n = len(arr)

	for i in range(n-1):
		for j in range(0, n-i-1):

			# fungsi Swap
			if arr[j] > arr[j + 1] :
				arr[j], arr[j + 1] = arr[j + 1], arr[j]

# Menjalankan Fungsi Bubble Sort 
arr = [11,4,5,2,5,6,93,29]
print("Data Sebelum di Sorting : ")
for i in range(8):
    print ("%d" % arr[i],end=" ")

bubbleSort(arr)

print ("\nData Yang Sudah Di Sorting :")
for i in range(len(arr)):
	print ("%d" % arr[i],end=" ")