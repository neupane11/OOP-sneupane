class Shoes:
    def __init__(self,brand:str,size:float,model:str,quantity:int)->None:
        self._brand:int=brand
        self._size:float=size
        self._model:str=model
        self._quantity:int=quantity

    def addQwantity(self)->None:
        self._quantity=self._quantity+1


    @property
    def brand(self):
        return self._brand
    @property
    def size(self):
        return self._size
    @property
    def model(self):
        return self._model
    @property
    def quantity(self):
        return self._quantity