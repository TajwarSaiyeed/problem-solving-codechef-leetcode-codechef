n, k = map(int, input().split())

total_minutes = 240
available_minutes = total_minutes - k
time_spent = 0
solved_problems = 0

for i in range(1, n + 1):
    time_spent += 5 * i
    if time_spent > available_minutes:
        break
    solved_problems += 1

print(solved_problems)