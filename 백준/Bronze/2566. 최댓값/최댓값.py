max_value = -1
max_row = -1
max_col = -1

for i in range(9):
    row = list(map(int, input().split()))
    if max(row) > max_value:
        max_value = max(row)
        max_row = i + 1
        max_col = row.index(max_value) + 1

print(max_value)
print(max_row, max_col)
