def print_duplicate_elements(arr):
    n = len(arr)
    i = 0

    while i < n:
        count = 1

        while i < n - 1 and arr[i] == arr[i + 1]:
            count += 1
            i += 1

        if count > 1:
            print(f"{arr[i]}->{count}", end=", ")

        i += 1