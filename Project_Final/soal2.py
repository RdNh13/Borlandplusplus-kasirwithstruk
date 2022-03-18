kalimat = input('Input Kalimat : ')
list_kalimat = list(kalimat)

list_vokal= ['a','i','e','u','o','A','I','U','E','O']

i = 0

while i < len(list_kalimat) :
    if  list_kalimat[i] in list_vokal :
        list_kalimat.insert(i+1,"g" + list_kalimat[i])
        i += 3
    else :
        i += 1
kalimat = ''.join(list_kalimat)
print("Output Bahasa G : ",kalimat.lower())