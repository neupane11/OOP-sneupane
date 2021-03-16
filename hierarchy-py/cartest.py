import unittest

from car import Car

class CarTest(unittest.TestCase):
    def testDefaultCar(self):
        typ:str="gasoline"
        usedfor:str="racing"
        price:int=30000       
        company:str="ferari"
        speed:int=300
        model:str="f8 spider"
        Car1:Car=Car(typ,usedfor,price,company,model,speed)
        
        self.assertEqual(Car1.typ,typ)
        
        self.assertEqual(Car1.usedfor,usedfor)
        self.assertEqual(Car1.price,price)
        self.assertEqual(Car1.company,company)
        self.assertEqual(Car1.speed,speed)
        self.assertEqual(Car1.model,model)

    def testisexpensive(self):
        typ:str="gasoline"
        usedfor:str="racing"
        price:int=30000       
        company:str="ferari"
        speed:int=300
        model:str="f8 spider"
        Car1:Car=Car(typ,usedfor,price,company,model,speed)
        
        self.assertEqual(Car1.typ,typ)
        
        self.assertEqual(Car1.usedfor,usedfor)
        self.assertEqual(Car1.price,price)
        self.assertEqual(Car1.company,company)
        self.assertEqual(Car1.speed,speed)
        self.assertEqual(Car1.model,model)
        self.assertEqual(Car1.isexpensive(),False)
        
if __name__=='__main__':
        unittest.main()
