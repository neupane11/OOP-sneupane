import unittest
from shoes import Shoes

class ShoesTest(unittest.TestCase):
    def runTest(self):
        #create an object
        brand:str='nike'
        size:float=9.5
        model:str='airmax'
        quantity:int=100

        nike:Shoes=Shoes(brand,size,model,quantity)
        self.assertEqual(nike.brand,brand)
        self.assertEqual(nike.size,size)
        self.assertEqual(nike.model,model)
        self.assertEqual(nike.quantity,quantity)
        nike.addQwantity()
        self.assertEqual(nike.quantity,quantity+1)

if __name__ == '__main__':
    unittest.main()