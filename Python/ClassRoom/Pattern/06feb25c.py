rows=8
for line in range(0, rows):
    #Print leading spaces for formatting
    print(' '*(rows-line),end=' ')
    c=1 #Initial value for each row
    for i in range(0, line+1):
        print(c,end=' ')
        c= c * (line-i) // (i+1)
    print()