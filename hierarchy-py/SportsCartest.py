import unittest

from vehicle import SportsCar

class SportsCarTest(unittest.TestCase):
    def testDefaultSportsCar(self):
        typ:str="gasoline"
        usedfor:str="racing"
        price:int=30000       
        company:str="ferari"
        speed:int=300
        model:str="f8 spider"
        SportsCar1:SportsCar=SportsCar(typ,usedfor,price,company,model,speed)
        
        self.assertEqual(SportsCar1.typ,typ)
        
        self.assertEqual(SportsCar1.usedfor,usedfor)
        self.assertEqual(SportsCar1.price,30000)
        self.assertEqual(SportsCar1.company,company)
        self.assertEqual(SportsCar1.speed,speed)
        self.assertEqual(SportsCar1.model,model)
if __name__=='__main__':
        unittest.main()
