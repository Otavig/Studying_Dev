listNames = ["Jesus", "Espirito Santo", "Otávio", "Oliver", "Felipe", "Samuel", "João", "Matheus", "Pedro", "Elias", "Paulo", "Eliseu", "Metusalém", "Mequisaleque", "Potifar", "José"]
listNumbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]

def searchBinary(list, item):
    list.sort()
    high = len(list) - 1
    low = 0
    time = 0

    while low <= high:
        mid = (low + high) // 2 
        attempt = list[mid]

        time += 1
        if attempt == item:
            return f'In {time} attempts we get value {attempt}'
        
        if attempt < item:
            low = mid + 1
        else:
            high = mid - 1
        
    return None

def searchBinaryName(list, item):
    list.sort()
    high = len(list) - 1
    low = 0
    time = 0

    while low <= high:
        mid = (low + high) // 2
        attempt = list[mid]

        time += 1
        if attempt == item:
            return f'In {time} attempts we get value {attempt} at position {mid}'
        
        if attempt < item:
            low = mid + 1
        else:
            high = mid - 1
        
    return None

print(searchBinary(listNumbers, 13))
print(searchBinaryName(listNames, "Oliver"))
