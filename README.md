
# Introdução a Programação – Teste 2

    Um correio eletrônico, ou e-mail, é um método que permite enviar e receber mensagens através de sistemas eletrônicos de comunicação. Escreva um programa C que simule esse processo.
    Seu programa deve conter:
    •  Um menu inicial, com as opções cadastrar usuário e fazer login
    •  As estruturas:
    •  As seguintes funções:
        ◦  void cadastrarUsuario(char *nome, char *senha)
            ▪ Cria um novo usuário com nome e senha e insere no arquivo de usuários (users.bin)
        ◦ void login(char *nome, char *senha)
            ▪ Lê o arquivo de usuários, procura pelo usuário com nome e senha, solicitando nome e senha novamente caso o usuário não seja encontrado. Após autenticar o usuário, devem ser oferecidas as opções de ver e-mails recebidos, ver e-mails enviados e enviar e-mail.
        ◦ void enviarEmail(char *nomeRemetente)
            ▪ Solicita o nome do destinatário, assunto e mensagem a ser enviada.
            ▪ Procura o destinatário no arquivo e guarda o e-mail no vetor de e-mails recebidos
            ▪ Procura o remetente no arquivo e guarda o e-mail no vetor de e-mails enviados
            ▪ Atualiza o arquivo (users.bin)
        ◦ void verRecebidos(Usuario usuario)
            ▪ Imprime na tela todos os e-mails recebidos pelo usuário
        ◦ void verEnviados(Usuario usuario)
            ▪ Imprime na tela todos os e-mails enviados pelo usuário

