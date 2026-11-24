try:
    num1 = float(input("Digite o primeiro numero: "))
    num2 = float(input("Digite o segundo numero: "))
    num3 = float(input("Digite o terceiro numero: "))

    if num1 > num2 and num1 > num3:
        print(f"o primeiro numero e maior")
    elif num2 > num1 and num2 > num3:
        print(f"o segundo numero e maior")
    elif num3 > num1 and num3 > num2:
        print(f"o terceiro numero e maior")

except ValueError: 
    print("valores invalidos")