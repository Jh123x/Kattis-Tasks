class Class(object):
    def __init__(self, name: str):
        self.name = name
        self.upper = None
        self.lower = None
        self.middle = None
        self.persons = []

    def add_person(self, person, person_class):
        if len(person_class) == 0:
            self.persons.append(person)
            self.persons = sorted(self.persons)
            return
        curr = person_class[0]
        if curr == 'upper':
            if self.upper is None:
                self.upper = Class('upper')
            return self.upper.add_person(person, person_class[1:])
        if curr == 'middle':
            if self.middle is None:
                self.middle = Class('middle')
            return self.middle.add_person(person, person_class[1:])
        if curr == 'lower':
            if self.lower is None:
                self.lower = Class('lower')
            return self.lower.add_person(person, person_class[1:])

        raise ValueError(f"Invalid class: {person_class}")

    def _print(self, a_class):
        if a_class is None:
            return
        a_class.print()

    def print(self):
        self._print(self.upper)
        if len(self.persons) > 0:
            for person in self.persons:
                print(person)
        self._print(self.middle)
        self._print(self.lower)


if __name__ == "__main__":
    cases = int(input())
    for _ in range(cases):

        # Number of input data
        d = []
        no = int(input())
        for _ in range(no):
            name, data = input().split(":")
            data = data.strip().split(" ")[0].split('-')
            data = ['middle'] * (10 - len(data)) + data
            d.append((name.strip(), data))

        root = Class('root')
        for person, pclass in d:
            root.add_person(person, pclass[::-1])
        root.print()
        print("="*30)
