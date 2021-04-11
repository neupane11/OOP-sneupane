class Stadium(object):
    
    def fans(self)->str:
        pass
    
    def seats(self)->int:
        pass
    
    def inEurope(self)->str:
        pass

class Base_Stadium(Stadium):
    def fans(self)->str:
        return "Football Fans"
    def seats(self)->int:
        return 100
    def inEurope(self)->str:
        return "Europe"
    
class Stadium_Decorator(Stadium):
    def __init__(self,decorated_stadium):
        self.decorated_stadium=decorated_stadium
    def fans(self):
        return self.decorated_stadium.fans()
    def seats(self):
        return self.decorated_stadium.seats()
    def inEurope(self):
        return self.decorated_stadium.inEurope()

class RealMadrid(Stadium_Decorator):
    def __init__(self,decorated_stadium):
        Stadium_Decorator.__init__(self,decorated_stadium)

    def fans(self):
        return self.decorated_stadium.fans() + " that are from Madrid. Population 3 mill"
    def seats(self):
        return self.decorated_stadium.seats()+ 75000
    def inEurope(self):
        return "Real Madrid stadium is in Madrid, Spain which is in"+ self.decorated_stadium.inEurope()