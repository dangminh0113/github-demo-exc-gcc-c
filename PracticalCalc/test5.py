import numpy as np
import time

array1 = np.array([0, 10, 20, 40, 60, 80])
print("Array1: ",array1)
array2 = [10, 30, 40, 50, 70, 90]
print("Array2: ",array2)
print(np.union1d(array1, array2))

time.sleep(100)