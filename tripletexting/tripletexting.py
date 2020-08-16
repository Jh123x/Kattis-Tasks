import textwrap

word = input().strip()
words = [word[i:i+len(word)//3] for i in range(0, len(word), len(word)//3)]

if words[0] == words[1]:
    print(words[0])
elif words[0] == words[2]:
    print(words[0])
else:
    print(words[1])