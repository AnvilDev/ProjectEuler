fibA = 1
fibB = 1
even_sum = 0

four_million = 4000000

while fibA <= four_million:
    if not fibA & 1:
        even_sum += fibA
    temp = fibA
    fibA += fibB
    fibB = temp

print(even_sum)