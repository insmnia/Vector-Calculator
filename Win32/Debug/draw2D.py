import matplotlib.pyplot as plt
import os
with open(os.path.abspath(__file__)[:-9] + "coords.txt", "r") as coordinates:
    x = float(coordinates.readline())
    y = float(coordinates.readline())
    plt.plot([0, x], [0, y], color="r")
    plt.plot([-abs(x)*5, abs(x)*5], [0, 0], color="black", linestyle="--")
    plt.plot([0, 0], [-abs(y)*5, abs(y)*5], color="black", linestyle="--")
    plt.axis([-abs(x)*5, abs(x)*5, -abs(y)*5, abs(y)*5])
    plt.xlabel("x")
    plt.ylabel("y")
    plt.show()
