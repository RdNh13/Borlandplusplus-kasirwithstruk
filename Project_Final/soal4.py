#Apabila data di input dari user
#agar data bisa bebas dimasukkan apa saja
daftarAngka = []

#meng-set range bilangan 
for i in range (8):

    x = int(input('daftarAngka : '))
    #memasukkan angka ke dalam data
    daftarAngka.append(x)
print('Daftar Angka sebelum di sorting : ', daftarAngka)

#mengurutkan angka yang ada di dalam data
list.sort(daftarAngka)
print('Daftar Angka setelah di sorting : ', daftarAngka)






#Apabila data telah di sediakan
data = [11,4,5,2,5,6,93,29]

print("Data Sebelum Di Sorting : ", data)

data.sort()
print("Data setelah di Sorting : ", data)
