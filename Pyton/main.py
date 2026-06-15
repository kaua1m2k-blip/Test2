'''
idade = int(input("idade:"))
print(idade)

if idade<18:
    print("menor de idade")
else:
    print("maior de idade")
'''


#---------------------------------------------------------

'''
palavra_chave = "vento"

letra = str(input("digite uma letra"))

qtd_acertos = palavra_chave.count(letra)

if qtd_acertos>0:
    print(f"palavra digitada tem"(qtd_acertos))
else:
    print(f"Não a nenhuma letra certa")

'''

#---------------------------------------------------------
'''senha = "12345"

usuario_dig =str(input("Digite o usuario:"))
senha_dig = str(input("digite a senha"))

if usuario_dig == "admin":
    print("usuario correto!")
else:
    print("usuario errado!!")

if senha_dig == "12345":
    print("senha correta!")
else:
    print("senha errada!!")'''

#-----------------------------------------------------------

'''pontos=int(input("Digite a pontuação: "))

if pontos >= 90:
    print("Exelente")
elif pontos>=79:
    print("Bom")
elif pontos>=69:
    print("Regular")
else:
    print("Insatisfatorio")
'''

#----------------------------------------------------------

'''valor = 0
op = 0
while(op!=5):
    print("Digite a opição escolhida:\n")
    print("#1 Refrigerante - U$ 3.50\n")
    print("#2 Suco natural - U$ 4.00\n")
    print("#3 Agua Mineral - U$ 2.00\n")
    print("#4 Café - U$ 2.50\n")
    print("#5 Finalizar Pedido.\n")
    op = int(input("Digite o item selecionado: "))
    match op:
        case 1:
            print("Refrigerante adicionado!")
            valor=valor+3.50

        case 2:
            print("Suco natural adicionado!")
            valor=valor+4.00

        case 3:
            print("Agua mineral adicionado!")
            valor=valor+2.00

        case 4:
            print("Cafe adicionado!")
            valor=valor+2.50

        case 5:
            print("-----------------------------------")

        case _:
            print("Opição Invalida")
        
print(f"total = {valor}")'''


#-----------------------------------------------------------

'''while True:

    peso40=0
    pesototal=0
    peso=float(input("Digite a peso de peixe"));
    if(peso40>400):
        peso40+=1
        pesototal=pesototal+peso
    
    if peso == 0:
        break

print(f"O tanque tem: {peso40:.2f} peixes a cima de 40 quilos!")
printf(f"peso total: {pesototal}")'''

#------------------------------------------------------------

import random

rn=random.randint(1,100)
cont =0
while cont<3:
    tn=int(input("Digite um Numero de 1 a 100: "))
    mm=int(input("Digite se o valor misterio é maior(1) ou menor(2) do que e seu numero Digitado: "))

    match mm:
        case 1:
            if(tn>rn):
                print("Acertou, misera.")
                break
            else:
                print("Voce esta sem sorte hoje")
        case 2:
            if(tn<rn):
                print("Acertou, misera.")
                break
            else:
                print("Voce esta sem sorte hoje")
        case _:
            print("opição invalide.")
        
    cont+=1
print(f"{rn}")

{
    
}