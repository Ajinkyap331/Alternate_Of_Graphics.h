import turtle
AJ = turtle.Turtle()
turtle.title("Made BY Ajinkya")
win = turtle.Screen()
A = []
f = open('data.txt', 'r')
for i in f:
    A.append(i)
f.close()


for item in range(len(A)):
    if 'circle' in A[item]:
        x, y, r = A[item+1].split(' ')
        AJ.up()
        AJ.goto(int(x), int(y)-int(r))
        AJ.down()
        AJ.circle(int(r))
    elif 'moveto' in A[item]:
        A[item+1].replace('\n', '')
        x, y = A[item+1].split(' ')
        AJ.up()
        AJ.goto(int(x), int(y))
        AJ.down()
    elif 'line' in A[item]:
        A[item+1].replace('\n', '')
        a, b, c, d = A[item+1].split(' ')
        AJ.up()
        AJ.goto(int(a), int(b))
        AJ.down()
        AJ.goto(int(c), int(d))
    elif 'addimage' in A[item]:
        A[item+1] = A[item+1].replace('\n', '')
        print(str(A[item+1]))
        win.bgpic(str(A[item+1]))
    elif 'rect' in A[item]:
        A[item+1].replace('\n', '')
        a, b, c, d = A[item+1].split(' ')
        AJ.up()
        AJ.goto(int(a), int(b))
        AJ.down()
        AJ.goto(int(c), int(b))
        AJ.goto(int(c), int(d))
        AJ.goto(int(a), int(d))
        AJ.goto(int(a), int(b))
    elif 'setcolor' in A[item]:
        A[item+1] = A[item+1].replace("\n", "")
        color = A[item+1]
        AJ.pencolor(color)

    elif 'arc' in A[item]:
        A[item+1] = A[item+1].replace("\n", "")
        x, y, sa, ea, r = A[item+1].split(' ')
        AJ.up()
        AJ.goto(int(x), int(y) - int(r))
        AJ.circle(int(r), int(sa))
        AJ.down()
        AJ.circle(int(r), int(ea)-int(sa))

    elif 'width' in A[item]:
        A[item+1] = A[item+1].replace("\n", "")
        AJ.width(A[item+1])

    elif 'forward' in A[item]:
        A[item+1] = A[item+1].replace("\n", "")
        AJ.forward(int(A[item+1]))

    elif 'backward' in A[item]:
        A[item+1] = A[item+1].replace("\n", "")
        AJ.backward(int(A[item+1]))

    elif 'right' in A[item]:
        A[item+1] = A[item+1].replace("\n", "")
        AJ.right(int(A[item+1]))

    elif 'left' in A[item]:
        A[item+1] = A[item+1].replace("\n", "")
        AJ.left(int(A[item+1]))

    elif 'style' in A[item]:
        A[item+1] = A[item+1].replace("\n", "")
        c, f, t = A[item+1].split(' ')
        style = (c, int(f), t)

    elif 'write' in A[item]:
        A[item+1] = A[item+1].replace("\n", "")
        text, alignit = A[item+1].split(' ')
        AJ.write(text, font=style, align=alignit)

input("Enter any key to quit : ")
