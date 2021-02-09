class Student:
    def __init__(self,first:str,last:str,grade:float)->None:
        self._first=first
        self._last=last
        self._grade:float=grade

    @property
    def fullname(self)->str:
        return '{} {}'.format(self._first,self._last)

    @property
    def email(self)->str:
         return '{}.{}@email.com'.format(self._first,self._last)
    
    def curvegrade(self)->float:
        return self._grade+1.0