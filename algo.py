lista=[2,3,5,9]
for (index,value) in enumerate(lista):
    print(index,end=" ")
    print(value)
lista.append(4) #dolacza element na koniec
y=lista.index(9)  #pierwszy pasujacy element (indeks)
print(y)
lista2=[3,23]
lista.extend(lista2)    #laczy listy
print(lista)

# math.isclose(a,b) - porownuje stringi