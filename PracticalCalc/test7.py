import numpy as np
import time

arr = np.array(np.arange(0,110,1))
sum = 0
for i in range(0,100) :
    if ( arr[i] % 3 == 0 or arr[i] % 5 == 0) :
        print(arr[i]," ")
        sum = arr[i] + sum
print(sum)

time.sleep(100)