import numpy as np
import time

arr = np.array([3, 5, 12, 0, 9, 2, 1000])
count = 0
for i in range(0,7) :
    if (arr[i] > 0) :
        count = count + 1
print("There are ",count," numbers")

time.sleep(100)