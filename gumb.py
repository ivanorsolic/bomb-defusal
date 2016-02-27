boja = raw_input('Koje je boje gumb: ')
boja = boja.lower()
held = 0
hold = 'Pritisni gumb i pogledaj koje je boje strip sa desne strane modula\n'

#Prvi slucaj
if boja == 'plave':
    abort = raw_input('Piše li na bombi ABORT: ')
    if abort == 'da':
        print hold
        held = 1

#Drugi slucaj	
elif boja == 'bijele':
    car = raw_input ('Svijetli li indikator sa labelom CAR: ')
    if car == da:
        print hold
        held = 1
        
#Treci slucaj		
elif boja == 'žute':
    print hold
    held = 1

#Cetvrti slucaj
elif boja == 'crvene':
    hold = raw_input('Piše li na bombi HOLD: ')
    if hold == 'da':
        print 'Pritisni gumb i odmah ga pusti!'

#Peti slucaj		
elif held == 0:
    broj = raw_input('Koliko je baterija na bombi: ')
    if broj == 1:
        detonate = raw_input('Piše li na bombi DETONATE: ')
        if detonate == 'da':
            print hold
            held = 1
    elif broj == 2:
        frk = raw_input('Svijetli li indikator sa labelom FRK: ')
        if frk == 'da':
            print hold
            held = 1
    else:
        print hold
        held = 1

#Nista od gore navedenog ili je held = 1
if held == 1:
    boja2 = raw_input('Koje je boje strip: ')
    if boja2 == 'plave':
        print 'Pusti gumb dok je èetvorka bilo gdje u timeru\n'
    elif boja2 == 'bijele':
        print 'Pusti gumb dok je jedinica bilo gdje u timeru\n'
    elif boja2 == 'žute':
        print 'Pusti gumb dok je petica bilo gdje u timeru\n'
    else:
        print 'Pusti gumb dok je jedinica bilo gdje u timeru\n'

	
