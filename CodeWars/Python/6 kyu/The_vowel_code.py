def encode(st):
    enc = {'a':'1', 'e':'2', 'i':'3', 'o':'4', 'u':'5'}
    st = list(st)
    for i in range(len(st)):
        if st[i].lower() in ('a', 'e', 'i', 'o', 'u'):
            st[i] = enc[st[i]]
    return ''.join(st)
    
def decode(st):
    st = list(st)
    dec = ['a', 'e', 'i', 'o', 'u']
    for i in range(len(st)):
        if st[i].isdigit():
            st[i] = dec[int(st[i]) - 1]
    return ''.join(st)