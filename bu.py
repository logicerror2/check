from collections import Counter

nums = [1]
count = Counter(nums)
bucket = [[] for _ in range(len(nums)+1)]

for num, freq in count.items():
    bucket[freq].append(num)

res = []
for i in range(len(bucket)-1, 0, -1):
    if bucket[i]:
        res.extend(bucket[i])
    if len(res) >= 1:
        break
b = {'a': 1, 'b': 2}
c = {'b': 2, 'a': 1}
s = "asdfg"
print(s[:2])