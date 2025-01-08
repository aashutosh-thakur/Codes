#Program 5: Convert between numeric data types
j = int(3.5) #Convert float to int
k = float(4) #Convert int to float
l = complex(5, 6) #Convert int to complex
m = complex(7.8, 9.1) #Convert float to complex
n = int(l.real) #get the real part of complex as int
o = float(m.imag) #get the imaginary part of complex as float
print(j, k, l, m, n, o)