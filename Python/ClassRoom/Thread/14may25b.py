from threading import *
import time
def display():
    for i in range(10):
        print(i, "child thread")
t=Thread(target=display)
t.start()
for i in range(10):
    print(i, "main thread")
    time.sleep(1)