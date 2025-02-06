rows=5
for i in range(1, rows + 1):
    for j in range(1, i + 1):
        print(''.join(str(k) for k in range(j, 0, -1)),end="")
    print()
#''.join(str(k)) for k in range(j-1,0,-1): This creates a string of number counting down from j-1
