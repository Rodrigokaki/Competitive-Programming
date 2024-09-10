inicialHr, inicialMin, finalHr, finalMin = map(int, input().split())

hours, mins = 0, 0

while(inicialHr != finalHr):
    inicialHr += 1
    hours += 1
    if inicialHr >= 24:
        inicialHr = 0

while(inicialMin != finalMin):
    inicialMin += 1
    mins += 1
    if inicialMin >= 60:
        inicialMin = 0
        hours -= 1

if(hours < 0 or (hours == 0 and mins == 0)):
    hours += 24

print(f"O JOGO DUROU {hours} HORA(S) E {mins} MINUTO(S)")

