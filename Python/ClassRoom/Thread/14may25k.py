from threading import *
import time
l= BoundedSemaphore() # Keep the count of acquire so we cannot use release more than acquire 
l.acquire()
print("main")
l.release()
# l.release()
print("main1")