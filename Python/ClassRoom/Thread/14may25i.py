from threading import *
import time
l=RLock()
def factorial(n):
    l.acquire()
    if n==0:
        l.release()
        return 1
    else:
        l.release()
        return n*factorial(n-1)
def result(n):
    print("fact value for",n,":",factorial(n))
t=Thread(target=result, args=(5,))
t.start()