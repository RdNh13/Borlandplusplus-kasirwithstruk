baris = int (input ('Masukkan Jumlah Baris : '))

spasi = (2 * int(baris)) - 2

for i in range(0, int(baris)) :
    for j in range(0, spasi):
        print(end = " ")
    spasi -= 1
    for j in range(0,i + 1):
       print(j + 1, end = " ")
    print()

        
