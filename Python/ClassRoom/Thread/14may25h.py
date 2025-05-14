from threading import *
import time
l=Lock()
l.acquire()
print("main")
l.acquire()
print("main1")
l.release()
l.release()