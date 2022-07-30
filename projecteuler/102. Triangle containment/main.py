'''
The solution uses the fact that the centroid of a triangle always lies inside the triangle
and if origin lies inside the triangle too, both centroid and (0, 0) should lie on the same side of each line
'''


# function to give line value for a point and a line
def line_value(x1, y1, x2, y2):
    # if slope exists, use difference in mx - y for two points
    if x1 - x2:
        slope = (y2 - y1) / (x2 - x1)
        return lambda x, y: (slope * x - y - slope * x1 + y1) >= 0
    else:
        return lambda x, y: (x - x1) >= 0


def solver():
    n = 0
    with open('p102_triangles.txt') as file:
        lines = file.readlines()

    for line in lines:
        # read a single line
        line_point = line.split(",")
        x1, y1, x2, y2, x3, y3 = [int(x) for x in line_point]

        # calculate the centroid
        x, y = (x1 + x2 + x3) / 3, (y1 + y2 + y3) / 3

        # use line values for all three lines that form the triangle
        line1 = line_value(x1, y1, x2, y2)
        line2 = line_value(x2, y2, x3, y3)
        line3 = line_value(x3, y3, x1, y1)

        # check if centroid and origin lie in the same side of the lines for all lines
        if line1(x, y) == line1(0, 0) and line2(x, y) == line2(0, 0) and line3(x, y) == line3(0, 0):
            n += 1
    return n


print(solver()) # answer: 228
