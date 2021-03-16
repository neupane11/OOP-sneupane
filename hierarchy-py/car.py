class Vehicle:
    def __init__(self,typ:str,usedfor:str):
        self._typ=typ
        self._usedfor=usedfor
    
    @property
    def typ(self):
        return self._typ
    @property
    def usedfor(self):
        return self._usedfor
    
class Car(Vehicle):
    def __init__(self, typ:str,usedfor:str,price:int,company:str,model:str,speed:int) -> None:
        Vehicle.__init__(self,typ,usedfor)
        #self._typ:str=typ
        #self._usedfor:str=usedfor
        self._price : int = price
        self._company : str = company
        self._model : str = model
        self._speed: int = speed
    
    def winrace(self) -> bool:
        if self._speed > 200:
            return True
        else:
            return False
    def isexpensive(self) -> bool:
        if self._price>=1000000:
            return True
        else:
            return False

    @property
    def price(self) -> int:
        return self._price
    @property
    def company(self) -> str:
        return self._company
    @property
    def model(self) -> str:
        return self._model
    @property
    def speed(self) -> int:
        return self._speed
    
    