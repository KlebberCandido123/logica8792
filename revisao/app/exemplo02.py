try:
    valor1 = float(input("Digite o primeiro valor: "))
    valor2 = float(input("Digite o segundo valor: "))

    media = (valor1 + valor2) / 2

    if media >= 7:
        print(f"A média entre {valor1} e {valor2} é {media}. Aprovado")
    else:
        print(f"A média entre {valor1} e {valor2} é {media}. Reprovado")

except ValueError:
    print("Foram digitados valores inválidos")