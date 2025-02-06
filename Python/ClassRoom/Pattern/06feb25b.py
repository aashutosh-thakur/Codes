n=5
#Loop through each line
for i in range(1, n+1):
    first_half=''.join(str(j)for j in range(1,i+1))
    #Concatenate the strings for the second half of the pattern
    second_half=''.join(str(j)for j in range(i-1,0,-1))
    #Concatenate and print the ful line pattern
    print(first_half + second_half)