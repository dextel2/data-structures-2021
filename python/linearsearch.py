def linear_search(sequence: list, target: int) -> int:

    for index, item in enumerate(sequence):
        if item == target:
            return index
    return -1


def rec_linear_search(sequence: list, low: int, high: int, target: int) -> int:

    if not (0 <= high < len(sequence) and 0 <= low < len(sequence)):
        raise Exception("Invalid upper or lower bound!")
    if high < low:
        return -1
    if sequence[low] == target:
        return low
    if sequence[high] == target:
        return high
    return rec_linear_search(sequence, low + 1, high - 1, target)


if __name__ == "__main__":
    user_input = input("Enter The Numbers:\n").strip()
    sequence = [int(item.strip()) for item in user_input.split(",")]

    target = int(input("Enter Number To Be Found:\n").strip())
    result = linear_search(sequence, target)
    if result != -1:
        print(f"linear_search({sequence}, {target}) = {result}")
    else:
        print(f"{target} was not found in {sequence}")
