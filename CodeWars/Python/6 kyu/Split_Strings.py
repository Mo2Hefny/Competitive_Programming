def solution(s):
    l = list(s[x:x+2] for x in range(0, len(s) - 1, 2))
    if (len(s) % 2):
        l.append(s[-1]+'_')
    return l