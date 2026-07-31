# 3 Address Instruction Generator

exp = input("Enter expression (Example: A+B*C): ")

temp = 1
stack = []

for ch in exp:
    if ch.isalpha():
        stack.append(ch)

    elif ch in "+-*/":
        op = ch

        b = stack.pop()
        a = stack.pop()

        t = "T" + str(temp)

        print(t, "=", a, op, b)

        stack.append(t)
        temp += 1
exp = input("Enter Postfix Expression: ")

for ch in exp:
    if ch.isalpha():
        print("PUSH", ch)

    elif ch == "+":
        print("ADD")

    elif ch == "-":
        print("SUB")

    elif ch == "*":
        print("MUL")

    elif ch == "/":
        print("DIV")
