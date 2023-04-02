def valid_phone_number(p):
    dig = True
    if (len(p) != 14):
        return False
    for s in (p[1:4],p[6:9],p[10:14]):
        dig = all(c.isdigit() for c in s)
        if not dig:
            return False
    return p[0] == '(' and p[4:6] == ") " and p[9] == '-'