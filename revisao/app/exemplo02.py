try:
    while True:
        try:
            numero = float(input("Digite um número: "))
            break
        except ValueError:
            print("Valor inválido. Por favor, digite um número válido.")

    while True:
        try:
            numero2 = float(input("Digite um número: "))
            break
        except ValueError:
            print("Valor inválido. Por favor, digite um número válido.")

    media = (numero + numero2) / 2
    print(f"A média entre {numero} e {numero2} é {media}")
except KeyboardInterrupt:
    print("\nPrograma encerrado pelo usuário")
