#except 'e' and 's'
i=0
a='Hello students'
while i<len(a):
    if a[i] == 'e' or a[i] == 's':
        i+=1
        break
    print("Current Letter: ",a[i])
    i += 1