import matplotlib.pyplot as plt
import numpy as np
import math

def fx(x):
    result = 0
    result = math.sqrt(1-(abs(x)-1)**2)
    return result
xpoints = np.arange(-1.9,1.9,0.1)
xpints = list(map(fx,xpoints))

plt.plot(xpoints,xpints,color='red')
plt.grid()
plt.show()