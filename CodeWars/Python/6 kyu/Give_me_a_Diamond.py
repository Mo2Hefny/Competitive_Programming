def diamond(n):
    if n < 1 or not n % 2:
        return None
    s = ''
    for i in range(n):
        star = '*'*(i*2 + 1) if i <= n/2 else '*'*((n-i)*2 - 1)
        s += ' '*int((n-len(star)) / 2) + star + '\n'
    return s