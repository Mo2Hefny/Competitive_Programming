def delete_nth(order,max_e):
    list2 = []
    for x in order:
        if (list2.count(x) < max_e):
            list2.append(x)
    return list2