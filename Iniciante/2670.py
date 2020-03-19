a1 = int(input())
a2 = int(input())
a3 = int(input())

total1 = (a2 * 2) + (a3 * 4)

total2 = (a1 * 2) + (a3 * 2)

total3 = (a1 * 4) + (a2 * 2)

if total1 <= total2 and total1 <= total3:
    print("{}".format(total1))

elif total2 <= total1 and total2 <= total3:
    print("{}".format(total2))

elif total3 <= total1 and total3 <= total2:
    print("{}".format(total3))
