import decoratorPatt

myStadium=decoratorPatt.Base_Stadium()
print('fan : '+myStadium.fans()+' seats: '+str(myStadium.seats())+' inEurope: '+myStadium.inEurope())

myStadium=decoratorPatt.RealMadrid(myStadium)
print('fan : '+myStadium.fans()+' seats: '+str(myStadium.seats())+' inEurope: '+myStadium.inEurope())
