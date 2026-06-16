class MyHashSet:

    def __init__(self):
        # Create an array of False values for all possible keys (0 to 1,000,000)
        self.s = [False] * 1000001

    def add(self, key: int) -> None:
        # Mark the key as present
        self.s[key] = True

    def remove(self, key: int) -> None:
        # Mark the key as absent
        self.s[key] = False

    def contains(self, key: int) -> bool:
        # Instantly look up the value at that index
        return self.s[key]


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)