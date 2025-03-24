class Animal:
    def __init__(self, species):
        self.species = species
    def make_sound(self):
        print(f"The {self.species} make a sound.")
animal= Animal("Cat")
print(animal.species)
print(animal.make_sound)