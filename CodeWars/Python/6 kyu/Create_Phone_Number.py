def create_phone_number(n):
    s = ""
    for x in n:
        s += str(x)
    s = "(" + s[:3] + ") " + s[3:6] + "-" + s[6:]
    return (s)