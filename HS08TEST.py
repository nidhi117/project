xx = input().split()
x = float(xx[0])
y = float(xx[1])
if x + 0.50 > y or y == 0 or x%5 != 0:
    print("%.2f" % y)
else:
    print("%.2f" % (y - x - 0.50)) 
