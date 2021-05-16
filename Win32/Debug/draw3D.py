import plotly.express as px
import os
with open(os.path.abspath(__file__)[:-9] + "coords.txt", "r") as coords:
    x = int(coords.readline())
    y = int(coords.readline())
    z = int(coords.readline())

df = {"x": (0, x), "y": (0, y), "z": (0, z)}
fig = px.line_3d(df, x="x", y="y", z="z")
fig.show()
