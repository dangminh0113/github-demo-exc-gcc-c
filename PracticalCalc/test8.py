import numpy as np
import time

arr = np.array([-1, -4, 0, 2, 3, 4, 5, -6])
for i in range(8) :
    if (arr[i] < 0 ) :
        arr[i] = 0
print(arr)

time.sleep(100)