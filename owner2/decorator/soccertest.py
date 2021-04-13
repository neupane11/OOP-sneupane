import unittest

import decoratorPatt

class Base_stadiumTest(unittest.TestCase):
    def testbasestadium(self):
        myStadium=decoratorPatt.Base_Stadium()
        fans=myStadium.fans()
        seats=myStadium.seats()
        inEurope=myStadium.inEurope()
        self.assertEqual(fans,"Football Fans")
        self.assertEqual(seats,100)
        self.assertEqual(inEurope,"Europe")
class Stadium_DecoratorTest(unittest.TestCase):
    def teststadiumdecorator(self):
        myStadium=decoratorPatt.Base_Stadium()
        decoratedstadium=decoratorPatt.RealMadrid(myStadium)
        fans=decoratedstadium.fans()
        seats=decoratedstadium.seats()
        inEurope=decoratedstadium.inEurope()
        self.assertEqual(fans,"Football Fans that are from Madrid. Population 3 mill")
        self.assertEqual(seats,75100)
        self.assertEqual(inEurope,"Real Madrid stadium is in Madrid, Spain which is inEurope")

    def teststadiumdecorator(self):
        myStadium=decoratorPatt.Base_Stadium()
        decoratedstadium=decoratorPatt.Barcelona(myStadium)
        fans=decoratedstadium.fans()
        seats=decoratedstadium.seats()
        inEurope=decoratedstadium.inEurope()
        self.assertEqual(fans,"Football Fans that are from Barcelona. Population 3 mill")
        self.assertEqual(seats,85100)
        self.assertEqual(inEurope,"Barcelona stadium is in Barcelona, Spain which is inEurope")
if __name__=='__main__':
        unittest.main()