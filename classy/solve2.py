from io import BytesIO
from os import read, fstat
from sys import stdout
def tuple_key(obj):
    (name, rank), acc, remainding = obj , 0, 10
    for c in rank:
        acc += c
        acc *= 3
        remainding -= 1
    acc *= 3 ** remainding
    acc += (3 ** (remainding + 1) - 1) / 2
    return (acc, name)
def map_key(obj):
    if obj == 'lower':
        return 2
    elif obj == 'middle':
        return 1
    return 0
def parse(input_str):
    name, data = input_str.split(":")
    data = map(map_key, reversed(data.strip().split(" ")[0].split('-')))
    return name, data

def main():
    input, end_divider = BytesIO(read(0, fstat(0).st_size)).readline, "\n==============================\n" # Fast reading from stdin
    cases = int(input().decode())
    for _ in range(cases):
        no = int(input().decode())
        stdout.write('\n'.join(map(lambda x: x[0], sorted((parse(input().decode()) for _ in range(no)), key=tuple_key))) + end_divider)

main()