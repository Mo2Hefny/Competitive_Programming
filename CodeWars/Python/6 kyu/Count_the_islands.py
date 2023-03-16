def DFS(image, r, c, visited):
    row_mov = [-1, -1, -1, 0, 0, 1, 1, 1]
    col_mov = [-1, 0, 1, -1, 1, -1, 0, 1]

    visited[r][c] = True

    for i in range(8):
        new_r = r + row_mov[i]
        new_c = c + col_mov[i]
        if new_r >= 0 and new_r < len(image) and new_c >= 0 and new_c < len(image[0]) and image[new_r][new_c] == 1 and not visited[new_r][new_c]:
            DFS(image, new_r, new_c, visited)
            
    

def count_islands(image):
    count = 0

    visited = [[False for x in range(len(i))] for i in image]

    for i in range(len(image)):
        for j in range(len(image[i])):
            if (image[i][j] == 1 and not visited[i][j]):
                count += 1
                DFS(image, i, j, visited)

    return count