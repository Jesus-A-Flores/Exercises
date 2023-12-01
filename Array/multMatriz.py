m = [[1,2,3],[4,5,6],[7,8,9]]
m2 = [[1,2,3],[4,5,6],[7,8,9]]
res = []
for _ in range(3):
    fila = [0]*3
    res.append(fila)
for i in range(0,3,1):
    col = 0
    for j in range(0,3,1):
        ini = 0
        suma = 0;
        while ini < 3:
            suma+=m[i][ini]*m2[ini][col]
            ini+=1
        col+=1
        res[i][j] = suma

print(res)