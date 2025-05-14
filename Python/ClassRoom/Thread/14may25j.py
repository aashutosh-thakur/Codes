from threading import *
import time
# l=RLock()
l=Semaphore(2)
def job():
    l.acquire()
    for i in range(5):
        time.sleep(1)
        print(current_thread().getName())
t=Thread(target=job)
t1=Thread(target=job)
t.start()
t1.start()
time.sleep(10)