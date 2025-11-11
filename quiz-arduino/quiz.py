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
        "pergunta": "O projeto Arduino foi criado originalmente em qual país?",
        "alternativas": ["a) Estados Unidos", "b) Alemanha", "c) Itália", "d) Japão", "e) Canadá"],
        "certa": "c"
    },
    {
        "pergunta": "O Arduino foi desenvolvido inicialmente em qual ano?",
        "alternativas": ["a) 1999", "b) 2003", "c) 2005", "d) 2008", "e) 2010"],
        "certa": "c"
    },
    {
        "pergunta": "Qual era o principal objetivo dos criadores do Arduino?",
        "alternativas": ["a) Criar um sistema operacional para robôs", "b) Desenvolver um processador de alta performance", "c) Facilitar o uso de eletrônica e programação para estudantes e iniciantes", "d) Criar um substituto comercial para microcontroladores industriais", "e) Montar uma empresa de hardware proprietário"],
        "certa": "c"
    },
    {
        "pergunta": "O nome 'Arduino' veio de:",
        "alternativas": ["a) Um dos fundadores", "b) Uma abreviação de 'Automatic Digital Unit'", "c) O nome de um bar frequentado pelos criadores", "d) Uma sigla italiana para 'projeto aberto'", "e) Um termo técnico em latim"],
        "certa": "c"
    },
    {
        "pergunta": "Um dos principais fundadores do Arduino é:",
        "alternativas": ["a) Elon Musk", "b) Linus Torvalds", "c) Massimo Banzi", "d) Mark Zuckerberg", "e) Steve Wozniak"],
        "certa": "c"
    },
    {
        "pergunta": "Qual é o modelo de placa Arduino mais popular e utilizado em projetos educacionais?",
        "alternativas": ["a) Arduino Due", "b) Arduino Micro", "c) Arduino Mega", "d) Arduino Uno", "e) Arduino Nano"],
        "certa": "d"
    },
    {
        "pergunta": "Qual das placas abaixo possui mais pinos digitais e memória, sendo indicada para projetos maiores?",
        "alternativas": ["a) Arduino Uno", "b) Arduino Mega 2560", "c) Arduino Leonardo", "d) Arduino Nano", "e) Arduino Mini"],
        "certa": "b"
    },
    {
        "pergunta": "Qual é a principal diferença entre o Arduino Uno e o Arduino Leonardo?",
        "alternativas": ["a) O Leonardo usa microcontrolador ATmega32U4 com suporte nativo a USB", "b) O Leonardo tem mais memória que o Uno", "c) O Uno possui Wi-Fi embutido", "d) O Leonardo é feito apenas para robótica", "e) O Uno é menor que o Leonardo"],
        "certa": "a"
    },
    {
        "pergunta": "O Arduino Nano é uma versão:",
        "alternativas": ["a) De mesa, com suporte a Ethernet", "b) Compacta, ideal para protótipos pequenos", "c) Voltada a sistemas industriais pesados", "d) Exclusiva para controle de motores", "e) Criada apenas para uso com sensores de temperatura"],
        "certa": "b"
    },
    {
        "pergunta": "Qual placa Arduino foi projetada para uso em Internet das Coisas (IoT), com conectividade Wi-Fi e Bluetooth integrados?",
        "alternativas": ["a) Arduino Uno", "b) Arduino Nano Every", "c) Arduino MKR WiFi 1010", "d) Arduino Mega 2560", "e) Arduino Duemilanove"],
        "certa": "c"
    },
    {
        "pergunta": "Ao montar um circuito com o Arduino, qual é a principal precaução ao ligar sensores e atuadores?",
        "alternativas": ["a) Conectar todos os componentes diretamente aos pinos digitais sem resistores", "b) Ligar os dispositivos antes de conectar o Arduino à energia", "c) Utilizar resistores de valor adequado e conferir a polaridade dos componentes", "d) Alimentar todos os dispositivos com 12V diretamente dos pinos do Arduino", "e) Manter o circuito ligado enquanto faz modificações nos fios"],
        "certa": "c"
    },
    {
        "pergunta": "O que pode acontecer se um componente for ligado incorretamente nos pinos do Arduino?",
        "alternativas": ["a) Nada, o Arduino se ajusta automaticamente", "b) O Arduino desligará e se reiniciará sozinho", "c) Pode ocorrer superaquecimento ou queima do componente e da placa", "d) O LED da placa apenas piscará para avisar do erro", "e) Apenas o programa deixará de funcionar, sem danos físicos"],
        "certa": "c"
    },
    {
        "pergunta": "Qual é a tensão máxima recomendada para alimentação da placa Arduino UNO através do pino 'Vin'?",
        "alternativas": ["a) 3,3V", "b) 5V", "c) 9V a 12V", "d) 15V", "e) 24V"],
        "certa": "c"
    },
    {
        "pergunta": "Para evitar curtos-circuitos e danos elétricos, é importante:",
        "alternativas": ["a) Deixar os fios desencapados próximos uns dos outros", "b) Utilizar sempre uma protoboard e cabos bem encaixados", "c) Conectar fios enquanto o Arduino está ligado", "d) Usar componentes com corrente superior à suportada pelo Arduino", "e) Substituir o fusível da placa por um fio de cobre"],
        "certa": "b"
    },
    {
        "pergunta": "Quando o projeto exige correntes altas (como motores ou lâmpadas de alta potência), qual é a melhor prática?",
        "alternativas": ["a) Alimentar tudo diretamente pelo pino 5V do Arduino", "b) Utilizar relés, transistores ou módulos de potência apropriados", "c) Aumentar a tensão de saída do Arduino com um conversor", "d) Ligar o motor diretamente a um pino digital", "e) Usar um resistor de 1Ω para reduzir a corrente"],
        "certa": "b"
    },
     {
        "pergunta": "Qual das opções abaixo representa uma aplicação prática comum do Arduino?",
        "alternativas": ["a) Servir apenas como calculadora científica", "b) Controlar sistemas automatizados, como irrigação e iluminação", "c) Substituir diretamente um computador pessoal", "d) Executar jogos com gráficos avançados", "e) Usar como roteador de internet"],
        "certa": "b"
    },
    {
        "pergunta": "Em um projeto de casa inteligente, o Arduino pode ser usado para:",
        "alternativas": ["a) Gerar energia elétrica", "b) Controlar o ar-condicionado, luzes e sensores de presença", "c) Transmitir dados de satélite", "d) Substituir o disjuntor principal da casa", "e) Produzir som de alta fidelidade"],
        "certa": "b"
    },
    {
        "pergunta": "No controle de temperatura de uma estufa automatizada, o Arduino normalmente utiliza:",
        "alternativas": ["a) Um motor de passo e uma tela LCD apenas", "b) Sensores de temperatura e atuadores como ventiladores", "c) Apenas LEDs coloridos para medir o calor", "d) Um resistor e um capacitor", "e) Nenhum sensor, apenas código de controle"],
        "certa": "b"
    },
    {
        "pergunta": "Em um projeto de robótica móvel, qual é a função principal do Arduino?",
        "alternativas": ["a) Enviar comandos de internet via Wi-Fi", "b) Fazer o controle dos motores e leitura dos sensores para navegação", "c) Armazenar grandes bancos de dados", "d) Controlar exclusivamente o sistema de som do robô", "e) Servir como fonte de energia para os componentes"],
        "certa": "b"
    },
    {
        "pergunta": "Um exemplo de uso educacional do Arduino é:",
        "alternativas": ["a) Ensinar fundamentos de eletrônica e programação por meio de experimentos práticos", "b) Substituir quadros e cadernos por circuitos eletrônicos", "c) Executar softwares de edição de vídeo", "d) Realizar cálculos complexos de engenharia sem programação", "e) Apenas montar brinquedos sem relação com aprendizado"],
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
        quiz = random.sample(perguntas, 10)

        # Mostrar as perguntas e respostas
        for p in quiz:
            print("\n"+p["pergunta"])
            for opcao in p["alternativas"]:
                print(opcao)
            reposta = input("Sua resposta(digite 00 para encerrar): ")

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
