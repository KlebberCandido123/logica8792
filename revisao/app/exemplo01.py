dia_semana = int(input("Digite um número entre 1 e 7: "))

match dia_semana:
    case 1:
        resposta = "Domingo"
    case 2:
        resposta = "Segunda-feira"
    case 3:
        resposta = "Terça-feira"
    case 4:
        resposta = "Quarta-feira"
    case 5:
        resposta = "Quinta-feira"
    case 6:
        resposta = "Sexta-feira"
    case 7:
        resposta = "Sábado"
    case _:
        resposta = "Número inválido!"

print(f"A resposta é: {resposta}")