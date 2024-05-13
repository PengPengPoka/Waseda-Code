def multiply(x,y):
    if x>2 and x<30:
        if y>1 and y<50:
            mul = x*y
            return mul
    else:
        return 0

def main():
    x = -1
    y = -4

    res = multiply(x,y)

    if res == 0:
        print("value out of bounds")

    print(res)


main()






