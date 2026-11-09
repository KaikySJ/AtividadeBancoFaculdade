# AtividadeBancoFaculdade
Atividade valendo 3 pontos da faculdade!

REQUISITOS:

Escreva um programa completo em C que comece solicitando ao usuário a criação de uma senha numérica de 4 dígitos (armazenada em uma variável int). Em seguida, o programa deve inicializar o saldo da conta com R$ 500.00 e entrar em um laço de repetição (while ou do-while) que exiba o seguinte menu:

Opções do Menu:

1. Depositar (2,0 pontos)
• Solicite o valor do depósito (pode ser quebrado, tipo float).
• Validação: O valor não pode ser menor ou igual a zero. Se for inválido, mostre "Valor inválido!" e não altere o saldo. Se for válido, adicione ao saldo atual.
2. Sacar (3,0 pontos)
• Solicite a senha de 4 dígitos para autorizar o saque.
• Se a senha estiver incorreta, exiba "Senha Incorreta! Operação cancelada." e retorne ao menu.
• Se a senha estiver correta, solicite o valor do saque.
• Validação: O valor do saque não pode ser maior do que o saldo disponível na conta. Se for maior, exiba "Saldo Insuficiente!". Caso contrário, subtraia o valor do saldo.
3. Consultar Saldo e Estatísticas (3,0 pontos)
• Exiba o saldo atual formatado com duas casas decimais (ex: R$ 520.50).
• Exiba também o maior depósito que foi realizado com sucesso durante a execução do programa (você precisará de uma variável para guardar esse recorde toda vez que um depósito for feito).
4. Sair (2,0 pontos)
• Encerra o laço e finaliza o programa com uma mensagem de despedida ("Obrigado por usar nosso banco!").

