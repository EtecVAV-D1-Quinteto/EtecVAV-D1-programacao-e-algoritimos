import random
# Criação de uma função para o menu
def menu():
    inicio = print("Bem vindo ao Quiz Arduíno!!")
    pergunta = print("\nO que deseja fazer: ")
    alternativa1 = print("\n1-Iniciar quiz")
    alternativa2 = print("\n2-Regras do quiz")
    alternativa3 = print("\n3-Ecerrar programa")

# Lista de 50 perguntas
perguntas =[
    {
        "pergunta":"Você existe?: ",
        "alternativas":["a)Sim","b)Não","c)Labubu","d)Boobie goods","e)Hytalo Santos"],
        "certa": "c"
    },
    {
        "pergunta":"Um dia você vai ser amado?: ",
        "alternativas":["a)Sim","b)Não","c)To confusa","d)Não sei dirigir","e)Focar nos estudos"],
        "certa": "c"
    },
    {
        "pergunta":"A jett é qual classe?: ",
        "alternativas":["a)Duelista","b)Sentinela","c)Iniciador","d)Controlador","e)Não sei"],
        "certa": "a"
    }
]


# Código do quiz
while True:
    menu()
    resposta = input("\nEscolha uma opção: ")
    
    # Iniciar o quiz
    if resposta == "1":
        print("Inciando quiz...")
        acertos = 0
        # Escolher as 20 perguntas aleatoriamente
        quiz = random.sample(perguntas, 2)

        # Mostrar as perguntas e respostas
        for p in quiz:
            print("\n"+p["pergunta"])
            for opcao in p["alternativas"]:
                print(opcao)
            reposta = input("Sua resposta: ")

            if reposta == p["certa"]:
                print("\nAlternativa certa!! Mais 0.5 pontos\n")
                acertos += 0.5
            else:
                print("\nAlternativa incorreta. A reposta era ",p["certa"],"\n")
        print("Sua pontuação no quiz foi ",acertos,"\n\n\n")

    # Regras do quiz
    elif resposta == "2":
        print("\n\n\nNo quiz haverá 20 perguntas sorteadas sobre Arduíno")
        print("\nTerão alternativas de A até E")
        print("\nA cada questao que você acertar, irá ganhar 0,5 pontos, e a pontuação máxima é 10, ao final do quiz a pontuação será exibida na tela")
        print("\nAs perguntas terão 10 temas, são eles:\n1-Histórico\n2-Modelos e famílias de placas\n3-componentes e arquiteturas básicas\n4-Conexões, portas e sinais\n5-Estruturas de código\n6-Principais comandos e funções da IDE Arduíno\n7-Sensores,atuadoras e shields\n8-Comunicações\n9-Boas práticas e segurança elétrica\n10-Casos de uso e aplicações práticas")   
    
    # Ecerrar o programa
    elif resposta == "3":
        print("Programa encerrado.")
        break
