class Snake:
    def __init__(self,size:int,color:str,danger:bool)->None:
        self._size=size
        self._color=color
        self._danger=True

    def isDanger(self)->bool:
        if(self._color=="black"):
            return True

    @property
    def size(self):
        return self._size

    @property
    def color(self):
        return self._color

    
    @property
    def danger(self):
        return self._danger