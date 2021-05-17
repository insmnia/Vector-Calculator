import numpy as np
import matplotlib.pyplot as plt
from math import radians
with open("coords.txt",'r') as coords:
    x1 = float(coords.readline())
    y1 = float(coords.readline())
    deg = float(coords.readline())

    vector = np.array([x1,y1])
    rad = radians(deg)
    rotate_matrix1 = np.array(
        [[np.cos(rad),-np.sin(rad)],[np.sin(rad),np.cos(rad)]]
    )
    x2,y2 = np.dot(rotate_matrix1,vector)
    print((deg,rad),(x2,y2))
    plt.plot([0, x1], [0, y1], color="r")
    plt.plot([0,x2],[0,y2],color="b")
    plt.plot([-abs(x1 if x1 else 1)*5, abs(x1 if x1 else 1)*5], [0, 0], color="black", linestyle="--")
    plt.plot([0, 0], [-abs(y1 if y1 else 1)*5, abs(y1 if y1 else 1)*5], color="black", linestyle="--")
    plt.axis([-abs(x1 if x1 else 1)*5, abs(x1 if x1 else 1)*5, -abs(y1 if y1 else 1)*5, abs(y1 if y1 else 1)*5])
    plt.xlabel("x")
    plt.ylabel("y")
    plt.show()